import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped

class publishernode(Node):
    def __init__(self):
        super().__init__("pose_pub")
        self.get_logger().info("Hello_World1")
        self.counter = 0
        self.pos_pub = self.create_publisher(
            PoseStamped, "/mavros/vision_pose/pose", 20)
        self.posedummy_pub = self.create_subscription(
            PoseStamped, "/Wifi/Channel_One", self.publish_datum, 10)
    
    def publish_datum(self, datum:PoseStamped):
        pose_stamped_msg = datum
        t = pose_stamped_msg.header.stamp
        x = pose_stamped_msg.pose.position.x
        y = pose_stamped_msg.pose.position.y
        z = pose_stamped_msg.pose.position.z
        self.get_logger().info(f'Publishing PoseStamped message: t={t}, x={x}, y={y}, z={z}')
        self.pos_pub.publish(pose_stamped_msg)
        
def main(args = None):
    rclpy.init(args = args)
    node = publishernode()
    rclpy.spin(node)
    rclpy.shutdown()