import rclpy
from rclpy.node import Node
from rclpy.time import Time
from rclpy.qos import QoSProfile
from rclpy.qos import QoSHistoryPolicy, QoSDurabilityPolicy, QoSReliabilityPolicy
from geometry_msgs.msg import PoseStamped
from sensor_msgs.msg import Imu

class publishernode(Node):
    def __init__(self):
        super().__init__("pose_pub_dummy")
        self.get_logger().info("Hello_World1")
        self.counter = 0
        qos_profile = QoSProfile(
            history=QoSHistoryPolicy.RMW_QOS_POLICY_HISTORY_KEEP_LAST,
            depth=5,
            reliability=QoSReliabilityPolicy.RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT,
            durability=QoSDurabilityPolicy.RMW_QOS_POLICY_DURABILITY_VOLATILE)
        self.posedummy_pub = self.create_subscription(
            PoseStamped, "/mavros/vision_pose/pose", self.publish_datum, qos_profile)
    
    def publish_datum(self, datum:PoseStamped):
        current_time = self.get_clock().now()
        time_difference = current_time.nanoseconds -datum.header.stamp.sec*(1e9)-datum.header.stamp.nanosec
        time_difference_seconds = time_difference / 1e9
        self.get_logger().info(str(current_time)+" .................................... "+str(datum.header.stamp))
        self.get_logger().info(str(time_difference_seconds))
        
def main(args = None):
    rclpy.init(args = args)
    node = publishernode()
    rclpy.spin(node)
    rclpy.shutdown()