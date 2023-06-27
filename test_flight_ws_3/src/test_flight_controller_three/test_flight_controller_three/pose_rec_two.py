import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from px4_msgs.msg import VehicleVisualOdometry, Timesync
from rclpy.qos import QoSProfile
from rclpy.qos import QoSHistoryPolicy, QoSDurabilityPolicy, QoSReliabilityPolicy
import sys

class publishernode(Node):
    def __init__(self):
        super().__init__("pose_rec_two")
        self.get_logger().info("Hello_World1")
        qos_profile = QoSProfile(
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=5,
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            durability = QoSDurabilityPolicy.TRANSIENT_LOCAL)
        self.pos_pub = self.create_publisher(
            VehicleVisualOdometry, "/fmu/vehicle_visual_odometry/in", 10)
        self.timesync_callback = self.create_subscription(
            Timesync, "/fmu/timesync/in",self.timesync_callback,qos_profile)
        self.pose_callback = self.create_subscription(
            PoseStamped, "/Wifi/Channel_One", self.pose_callback, qos_profile)
        self.xdatum2 = VehicleVisualOdometry()
    def timesync_callback(self, datum1:Timesync):
        if self.xdatum2 != None:
            self.xdatum2.timestamp = datum1.tc1
            self.xdatum2.timestamp_sample = datum1.ts1
            self.xdatum2.reset_counter = 5
            msg = self.xdatum2
            self.get_logger().info("Datum Published: "+str(msg.timestamp)+"\n" + str(msg.x)+" "+str(msg.y)+" "+str(msg.z))
            self.pos_pub.publish(self.xdatum2)
    def pose_callback(self, datum:PoseStamped):
        msg = VehicleVisualOdometry()
        msg.timestamp = 2
        msg.local_frame = 1
        msg.x = datum.pose.position.x
        msg.y = datum.pose.position.y
        msg.z = datum.pose.position.z
        msg.q = [datum.pose.orientation.x,datum.pose.orientation.y,datum.pose.orientation.z,datum.pose.orientation.w]
        msg.velocity_frame = 1
        msg.vx = float("NaN")
        msg.vy = float("NaN")
        msg.vz = float("NaN") 
        msg.rollspeed = float("NaN")
        msg.pitchspeed = float("NaN")
        msg.yawspeed = float("NaN")
        msg.pose_covariance = [float("NaN")]*21
        msg.velocity_covariance = [float("NaN")]*21
        # self.get_logger().info("Datum: "+str(msg.timestamp)+"\n" + str(msg.x)+" "+str(msg.y)+" "+str(msg.z))
        self.xdatum2 = msg
        
def main(args = None):
    rclpy.init(args=args)
    node = publishernode()
    rclpy.spin(node)
    rclpy.shutdown()