import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from vicon_receiver.msg import Position

class publishernode(Node):
    def __init__(self):
        super().__init__("pose_pub")
        self.get_logger().info("Hello_World1")
        self.counter = 0
        self.pos_pub = self.create_publisher(
            PoseStamped, "/mavros/vision_pose/pose", 20)
        self.posedummy_pub = self.create_subscription(
            Position, "/vicon/Holybro_Drone/Holybro_Drone", self.publish_datum, 10)
    
    def publish_datum(self, datum:Position):
        pose_stamped_msg = PoseStamped()

        # Populate the pose information
        pose_stamped_msg.pose.position.x = datum.x_trans/1000
        pose_stamped_msg.pose.position.y = datum.y_trans/1000
        pose_stamped_msg.pose.position.z = datum.z_trans/1000
        pose_stamped_msg.pose.orientation.x = datum.x_rot
        pose_stamped_msg.pose.orientation.y = datum.y_rot
        pose_stamped_msg.pose.orientation.z = datum.z_rot
        pose_stamped_msg.pose.orientation.w = datum.w

        # Populate the header information
        pose_stamped_msg.header.stamp = self.get_clock().now().to_msg()
        pose_stamped_msg.header.frame_id = 'base_link_frd'
        t = pose_stamped_msg.header.stamp
        x = pose_stamped_msg.pose.position.x
        y = pose_stamped_msg.pose.position.y
        z = pose_stamped_msg.pose.position.z
        # self.get_logger().info(f'Publishing PoseStamped message: t={t}, x={x}, y={y}, z={z}')
        self.pos_pub.publish(pose_stamped_msg)
        
def main(args = None):
    rclpy.init(args = args)
    node = publishernode()
    rclpy.spin(node)
    rclpy.shutdown()