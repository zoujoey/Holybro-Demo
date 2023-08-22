from setuptools import setup

package_name = 'test_flight_controller_four_offboard'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='asrl',
    maintainer_email='joezou5555@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "offboard_hover = test_flight_controller_four_offboard.offboard_hover:main",
            "offboard_ex = test_flight_controller_four_offboard.offboard_ex:main",
            "offboard_control = test_flight_controller_four_offboard.offboard_control:main",
            "offboard_control_L = test_flight_controller_four_offboard.offboard_control_L:main",
            "offboard_control_square = test_flight_controller_four_offboard.offboard_control_square:main",
            "offboard_control_square2 = test_flight_controller_four_offboard.offboard_control_square2:main",
            "offboard_control_circle = test_flight_controller_four_offboard.offboard_control_circle:main",
            "offboard_control_circle2 = test_flight_controller_four_offboard.offboard_control_circle2:main",
            "offboard_control_circle_tilted = test_flight_controller_four_offboard.offboard_control_circle_tilted:main",
            "offboard_control_helix = test_flight_controller_four_offboard.offboard_control_helix:main",
            "fake_pose_pub = test_flight_controller_four_offboard.fake_pose_pub:main"
        ],
    },
)
