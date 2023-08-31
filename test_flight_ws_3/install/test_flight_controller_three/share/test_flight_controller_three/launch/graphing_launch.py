from launch import LaunchDescription
from launch_ros.actions import Node
def generate_launch_description():
    ld = LaunchDescription()
    
    pose_pub = Node(
        package = "test_flight_controller_three",
        executable = "pose_pub"
    )

    ld.add_action(pose_pub)
    
    pose_data_save = Node(
        package = "test_flight_controller_three",
        executable = "pose_data_save"
    )
    ld.add_action(pose_data_save)

    pose_grapher_xyz = Node(
        package = "test_flight_controller_three",
        executable = "pose_grapher_xyz"
    )
    ld.add_action(pose_grapher_xyz)

    # pose_grapher_xy = Node(
    #     package = "test_flight_controller_three",
    #     executable = "pose_grapher_xy"
    # )
    # ld.add_action(pose_grapher_xy)

    # pose_grapher_yz = Node(
    #     package = "test_flight_controller_three",
    #     executable = "pose_grapher_yz"
    # )
    # ld.add_action(pose_grapher_yz)

    # pose_grapher_xz = Node(
    #     package = "test_flight_controller_three",
    #     executable = "pose_grapher_xz"
    # )
    # ld.add_action(pose_grapher_xz)

    return ld