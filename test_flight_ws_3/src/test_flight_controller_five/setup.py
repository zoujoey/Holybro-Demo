import os
from glob import glob
from setuptools import setup

package_name = 'test_flight_controller_five'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*')))
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
            "offboard_control = test_flight_controller_five.offboard_control:main",
            "command_control = test_flight_controller_five.command_control:main",
            "keyboard_controller = test_flight_controller_five.keyboard_controller:main",
            "set_path_hover = test_flight_controller_five.set_path_hover:main",
            "set_path_return = test_flight_controller_five.set_path_return:main",
            "set_path_square = test_flight_controller_five.set_path_square:main",
            "set_path_circle = test_flight_controller_five.set_path_circle:main",
            "set_path_helix = test_flight_controller_five.set_path_helix:main",
            "set_path_linear_setpoint = test_flight_controller_five.set_path_linear_setpoint:main",
            "set_path_continuous_setpoint = test_flight_controller_five.set_path_continuous_setpoint:main"
            
        ],
    },
)
