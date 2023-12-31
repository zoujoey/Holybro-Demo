import matplotlib.pyplot as plt
import rclpy
from rclpy.node import Node
from rclpy.clock import Clock
from rclpy.qos import QoSProfile
from rclpy.qos import QoSHistoryPolicy, QoSDurabilityPolicy, QoSReliabilityPolicy
from vicon_receiver.msg import Position
from px4_msgs.msg import VehicleOdometry, Timesync
from px4_msgs.msg import OffboardControlMode
from px4_msgs.msg import TrajectorySetpoint
from px4_msgs.msg import VehicleCommand
from px4_msgs.msg import VehicleControlMode
import time

class PositionGraph(Node):
    def __init__(self):
        super().__init__('position_graph')
        self.subscription = self.create_subscription(
            VehicleOdometry,
            '/fmu/vehicle_odometry/out',
            self.position_callback,
            10  # QoS profile depth
        )
        #self.posedummy_pub = self.create_subscription(
        #    Position, "/vicon/Holybro_Drone/Holybro_Drone", self.position_callback, 10)

        qos_profile = QoSProfile(
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=5,
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            durability = QoSDurabilityPolicy.TRANSIENT_LOCAL)
        self.positions = {'x': [], 'y': [], 'z': []}

    def position_callback(self, msg):
        self.positions['x'].append(msg.x)
        self.positions['y'].append(msg.y)
        self.positions['z'].append(msg.z)
        #self.positions['x'].append(msg.x_trans/1000)
        #self.positions['y'].append(msg.y_trans/1000)
        #self.positions['z'].append(msg.z_trans/1000)
        self.update_graph()

    def update_graph(self):
        plt.figure('XY Position Graph')
        plt.clf()
        plt.plot(self.positions['x'], self.positions['y'])
        plt.xlabel('X')
        plt.ylabel('Y')
        plt.legend()
        plt.pause(0.001)

def main(args=None):
    rclpy.init(args=args)
    position_graph = PositionGraph()
    rclpy.spin(position_graph)
    position_graph.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()