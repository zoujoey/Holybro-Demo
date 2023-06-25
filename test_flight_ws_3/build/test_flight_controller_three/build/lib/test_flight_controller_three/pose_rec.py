import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from px4_msgs.msg import VehicleVisualOdometry
from rclpy.qos import QoSProfile
from rclpy.qos import QoSHistoryPolicy, QoSDurabilityPolicy, QoSReliabilityPolicy
import sys

class publishernode(Node):
    def __init__(self):
        super().__init__("pose_pub")
        self.get_logger().info("Hello_World1")
        qos_profile = QoSProfile(
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=5,
            reliability=QoSReliabilityPolicy.BEST_EFFORT)
        self.pos_pub = self.create_publisher(
            VehicleVisualOdometry, "/fmu/vehicle_visual_odometry/in", 10)
        self.posedummy_pub = self.create_subscription(
            PoseStamped, "/Wifi/Channel_One", self.publish_datum, qos_profile)
    
    def publish_datum(self, datum:PoseStamped):
        msg = VehicleVisualOdometry()
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
        msg.reset_counter = 5
        self.get_logger().info("Datum Published: "+str(msg.timestamp)+"\n" + str(msg.x)+" "+str(msg.y)+" "+str(msg.z))
        self.pos_pub.publish(msg)
        
def main(args = None):
    ros_master_uri = 'http://asrl-ThinkPad-P15-Gen-2i:11311'
    sys.argv.append('__master:={}'.format(ros_master_uri))
    rclpy.init(args=sys.argv)
    node = publishernode()
    rclpy.spin(node)
    rclpy.shutdown()