import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from rclpy.qos import QoSProfile
from rclpy.qos import QoSHistoryPolicy, QoSDurabilityPolicy, QoSReliabilityPolicy
import sys

class publishernode(Node):
    def __init__(self):
        super().__init__("pose_pub_dum")
        self.get_logger().info("Hello_World1")
        self.counter = 0
        qos_profile = QoSProfile(
            depth=5,
            reliability=QoSReliabilityPolicy.RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT)
        self.pos_pub = self.create_publisher(
            PoseStamped, "/Wifi/Channel_One", 10)
        self.timer_ = self.create_timer(0.01, self.publish_datum)
    
    def publish_datum(self):
        pose_stamped_msg = PoseStamped()

        # Populate the pose information
        pose_stamped_msg.pose.position.x = 15.1
        pose_stamped_msg.pose.position.y = 15.1
        pose_stamped_msg.pose.position.z = 15.1
        pose_stamped_msg.pose.orientation.x = 15.1
        pose_stamped_msg.pose.orientation.y = 15.1
        pose_stamped_msg.pose.orientation.z = 15.1
        pose_stamped_msg.pose.orientation.w = 0.5

        # Populate the header information
        pose_stamped_msg.header.stamp = self.get_clock().now().to_msg()
        pose_stamped_msg.header.frame_id = 'base_link'
        t = pose_stamped_msg.header.stamp
        x = pose_stamped_msg.pose.position.x
        y = pose_stamped_msg.pose.position.y
        z = pose_stamped_msg.pose.position.z
        self.get_logger().info(f'Publish')
        self.pos_pub.publish(pose_stamped_msg)
        
def main(args = None):
    rclpy.init(args=args)
    node = publishernode()
    rclpy.spin(node)
    rclpy.shutdown()