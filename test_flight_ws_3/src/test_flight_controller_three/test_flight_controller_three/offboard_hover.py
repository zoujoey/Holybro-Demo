"""
Python implementation of Offboard Control Hover
"""


import rclpy
from rclpy.node import Node
from rclpy.clock import Clock
from rclpy.qos import QoSProfile
from rclpy.qos import QoSHistoryPolicy, QoSDurabilityPolicy, QoSReliabilityPolicy
from px4_msgs.msg import VehicleOdometry, Timesync
from px4_msgs.msg import OffboardControlMode
from px4_msgs.msg import TrajectorySetpoint
from px4_msgs.msg import VehicleCommand
from px4_msgs.msg import VehicleControlMode
import time

class OffboardControl(Node):

    def __init__(self):
        super().__init__('OffboardControl')
        self.offboard_control_mode_publisher_ = self.create_publisher(OffboardControlMode,
                                                                        "/fmu/offboard_control_mode/in", 10)
        self.trajectory_setpoint_publisher_ = self.create_publisher(TrajectorySetpoint,
                                                                    "/fmu/trajectory_setpoint/in", 10)
        self.vehicle_command_publisher_ = self.create_publisher(VehicleCommand, "/fmu/vehicle_command/in", 10)
        qos_profile = QoSProfile(
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=5,
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            durability = QoSDurabilityPolicy.TRANSIENT_LOCAL)
        self.timesync_callback = self.create_subscription(Timesync, 
                                                          "/fmu/timesync/in",self.timesync_callback,qos_profile)
        self.position_callback = self.create_subscription(VehicleOdometry,
                                                          "/fmu/vehicle_odometry/out", self.position_callback,qos_profile)
        self.offboard_setpoint_counter_ = 0

        timer_period = 0.1  # 100 milliseconds
        self.timer_ = self.create_timer(timer_period, self.timer_callback)
        self.pose = VehicleOdometry()
        self.waypoint_reached = 0
        self.last_update_time_rel = 0
        self.last_update_time_abs = int(time.time()*1000000)

    def position_callback(self, datum:VehicleOdometry):
        self.pose = datum
    def time(self):
        self.last_update_time_rel = int(time.time()*1000000) - self.last_update_time_abs + self.last_update_time_rel
        self.last_update_time_abs = int(time.time()*1000000)
        return self.last_update_time_rel
    
    def timesync_callback(self, datum1:Timesync):
        self.last_update_time_rel= datum1.timestamp
        self.last_update_time_abs = int(time.time()*1000000)
    
    def timer_callback(self):
        if (self.offboard_setpoint_counter_ == 10):
            # Change to Offboard mode after 10 setpoints
            self.publish_vehicle_command(VehicleCommand.VEHICLE_CMD_DO_SET_MODE, 1., 6.)
            # Arm the vehicle
            self.arm()

        # Offboard_control_mode needs to be paired with trajectory_setpoint
        self.publish_offboard_control_mode()
        self.publish_trajectory_setpoint()
        if self.offboard_setpoint_counter_>100 and (self.pose.z < -1.9 and self.pose.z > -2.1):
            self.waypoint_reached = 1
        if self.offboard_setpoint_counter_>150 and (self.pose.z < -0.9 and self.pose.z > -1.1):
            self.waypoint_reached = 2
        # stop the counter after reaching 11
        if (self.offboard_setpoint_counter_ < 200):
            self.offboard_setpoint_counter_ += 1
        else:
            self.disarm()
        

    # Arm the vehicle
    def arm(self):
        self.publish_vehicle_command(VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM, 1.0)
        self.get_logger().info("Arm command send")

    # Disarm the vehicle
    def disarm(self):
        self.publish_vehicle_command(VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM, 0.0)
        self.get_logger().info("Disarm command send")


    '''
	Publish the offboard control mode.
	For this example, only position and altitude controls are active.
    '''

    def publish_offboard_control_mode(self):
        msg = OffboardControlMode()
        msg.position = True
        msg.velocity = False
        msg.acceleration = False
        msg.attitude = False
        msg.body_rate = False
        msg.timestamp = self.time()
        self.offboard_control_mode_publisher_.publish(msg)

    '''
	Publish a trajectory setpoint
	For this example, it sends a trajectory setpoint to make the
	vehicle hover at 5 meters with a yaw angle of 180 degrees.
    '''

    def publish_trajectory_setpoint(self):
        msg = TrajectorySetpoint()
        if self.waypoint_reached == 0:
            msg.x,msg.y,msg.z = 0.0, 0.0, -1.0 
        if (self.offboard_setpoint_counter_>100) and self.waypoint_reached == 1:
            msg.x,msg.y,msg.z = 0.0, 0.0, -0.5 
        if (self.offboard_setpoint_counter_>150) and self.waypoint_reached == 2:
            msg.x,msg.y,msg.z = 0.0, 0.0, -0.3 
        msg.yaw = 0.  # [-PI:PI]
        msg.timestamp = self.time()
        self.trajectory_setpoint_publisher_.publish(msg)
        self.get_logger().info(str(msg.z) +" " +str(self.waypoint_reached)+" "+str(self.pose.z)+" "+str(self.pose.y)+" "+str(self.offboard_setpoint_counter_))

    '''
    Publish vehicle commands
        command   Command code (matches VehicleCommand and MAVLink MAV_CMD codes)
        param1    Command parameter 1 as defined by MAVLink uint16 VEHICLE_CMD enum
        param2    Command parameter 2 as defined by MAVLink uint16 VEHICLE_CMD enum
    '''
    def publish_vehicle_command(self, command, param1=0.0, param2=0.0):
        msg = VehicleCommand()
        msg.param1 = param1
        msg.param2 = param2
        msg.command = command  # command ID
        msg.target_system = 1  # system which should execute the command
        msg.target_component = 1  # component which should execute the command, 0 for all components
        msg.source_system = 1  # system sending the command
        msg.source_component = 1  # component sending the command
        msg.from_external = True
        msg.timestamp = self.time()
        self.vehicle_command_publisher_.publish(msg)

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