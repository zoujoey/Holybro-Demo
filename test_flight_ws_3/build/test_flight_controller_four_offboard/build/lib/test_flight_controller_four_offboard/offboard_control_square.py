"""
Python implementation of Offboard Control
"""


import rclpy
from geometry_msgs.msg import PoseStamped
from rclpy.node import Node
from rclpy.clock import Clock
from rclpy.qos import QoSProfile
from rclpy.qos import QoSHistoryPolicy, QoSDurabilityPolicy, QoSReliabilityPolicy
from px4_msgs.msg import VehicleVisualOdometry, Timesync, VehicleOdometry
from px4_msgs.msg import OffboardControlMode
from px4_msgs.msg import TrajectorySetpoint
from px4_msgs.msg import VehicleCommand
from px4_msgs.msg import VehicleControlMode
import time
import math


class OffboardControl(Node):

    def __init__(self):
        super().__init__('OffboardControl')
        qos_profile = QoSProfile(
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=5,
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            durability = QoSDurabilityPolicy.TRANSIENT_LOCAL)
        
        self.trajectory_setpoint_publisher_ = self.create_publisher(TrajectorySetpoint,
                                                                    "/Wifi/Channel_Two", 10)
        
        self.position_callback = self.create_subscription(PoseStamped,
                                                          "/Wifi/Channel_One", self.position_callback,10)

        self.offboard_setpoint_counter_ = 0
        timer_period = 0.01  # 100 milliseconds
        self.timer_ = self.create_timer(timer_period, self.timer_callback)
        self.setpoint_reached_2 = 0
        self.pose = PoseStamped()
        self.setpoint_current = TrajectorySetpoint
        self.last_update_time_rel = 0
        self.last_update_time_abs = int(time.time()*1000000)
        #sp = [0.43, -2.03, -0.25, -1.5]
        sp = [0.0, 0.0, -0.25, 1.5]
        self.setpoint_targets = [(sp[0]+0.00, sp[1]+0.00, sp[2]-0.20, sp[3]+0.00), 
                                 (sp[0]+1.50, sp[1]+0.00, sp[2]-0.20, sp[3]+0.00),
                                 (sp[0]+1.50, sp[1]+1.50, sp[2]-0.20, sp[3]+0.00),
                                 (sp[0]-1.50, sp[1]+1.50, sp[2]-0.20, sp[3]+0.00),
                                 (sp[0]-1.50, sp[1]-1.50, sp[2]-0.20, sp[3]+0.00),
                                 (sp[0]+1.50, sp[1]-1.50, sp[2]-0.20, sp[3]+0.00),
                                 (sp[0]+1.50, sp[1]+0.00, sp[2]-0.20, sp[3]+0.00),
                                 (sp[0]+0.00, sp[1]+0.00, sp[2]-0.20, sp[3]+0.00),
                                 (sp[0]+0.00, sp[1]+0.00, sp[2]-0.00, sp[3]+0.00)]
    
    def timer_callback(self):
        pose = self.setpoint_targets[self.offboard_setpoint_counter_]
        self.publish_trajectory_setpoint(pose)
        msg = TrajectorySetpoint()
        msg.x, msg.y, msg.z = pose[0], pose[1], pose[2]
        msg.yaw = pose[3]
        msg.timestamp = self.time()
        self.setpoint_current = msg
        if self.setpoint_reached():
            self.setpoint_reached_2+=1
            if self.setpoint_reached_2>=200:
                self.offboard_setpoint_counter_+=1
                self.setpoint_reached_2=0
    
    #..................................................................................................#
    #Callback Functions
    def position_callback(self, datum:PoseStamped):
        self.pose = datum    
    def timesync_callback(self, datum1:Timesync):
        self.last_update_time_rel= datum1.timestamp
        self.last_update_time_abs = int(time.time()*1000000)
    
    def distance_between_points(self, x1, y1, z1, x2, y2, z2):
        return math.sqrt((x2 - x1)**2 + (y2 - y1)**2 + (z2 - z1)**2)
    
    def point_along_line(self, x1, y1, z1, x2, y2, z2, distance):
        # Calculate the vector between the two points (x2, y2, z2) and (x1, y1, z1)
        dx = x1 - x2
        dy = y1 - y2
        dz = z1 - z2

        # Calculate the distance between the two points
        total_distance = self.distance_between_points(x1, y1, z1, x2, y2, z2)

        # Calculate the normalized vector in the direction from (x1, y1, z1) to (x2, y2, z2)
        normalized_dx = dx / total_distance
        normalized_dy = dy / total_distance
        normalized_dz = dz / total_distance

        # Calculate the new point coordinates that are 'distance' units away from (x2, y2, z2)
        x3 = x2 + distance * normalized_dx
        y3 = y2 + distance * normalized_dy
        z3 = z2 + distance * normalized_dz
        if self.distance_between_points(x1, y1, z1, x3, y3, z3) <= 0.2:
            return[x1,y1,z1]
        return [x3,y3,z3]
    #Current time (vehicle)
    def time(self):
        self.last_update_time_rel = int(time.time()*1000000) - self.last_update_time_abs + self.last_update_time_rel
        self.last_update_time_abs = int(time.time()*1000000)
        return self.last_update_time_rel

    # Setpoint_reached
    def setpoint_reached(self):
        return ((self.pose.pose.position.z>(self.setpoint_current.z-0.1) and self.pose.pose.position.z<(self.setpoint_current.z+0.1)) and
                ((self.pose.pose.position.x>(self.setpoint_current.x-0.1) and self.pose.pose.position.x<(self.setpoint_current.x+0.1)) and
                (self.pose.pose.position.y>(self.setpoint_current.y-0.1) and self.pose.pose.position.y<(self.setpoint_current.y+0.1))))
    
    # Publish a Setpoint and Set Current Setpoint
    def publish_trajectory_setpoint(self, pose:tuple):
        msg = TrajectorySetpoint()
        posef = (self.point_along_line(pose[0], pose[1], pose[2], self.pose.pose.position.x, self.pose.pose.position.y, self.pose.pose.position.z, 0.2))
        msg.x, msg.y, msg.z = posef[0], posef[1], posef[2]
        msg.yaw = pose[3]
        msg.timestamp = self.time()
        self.trajectory_setpoint_publisher_.publish(msg)
        self.get_logger().info("NEW1:" + str(msg.z) +" " +str(self.setpoint_reached_2)+" "+
                               str(self.pose.pose.position.x)+" "+str(self.pose.pose.position.y)+" "+str(self.pose.pose.position.z)+" "+
                               str(self.offboard_setpoint_counter_))


def main(args=None):
    rclpy.init(args=args)
    print("Starting offboard control node...\n")
    offboard_control = OffboardControl()
    rclpy.spin(offboard_control)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    offboard_control.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()