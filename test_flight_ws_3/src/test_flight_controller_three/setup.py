from setuptools import setup
import os
from glob import glob

package_name = 'test_flight_controller_three'

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
            "pose_data_save = test_flight_controller_three.pose_data_save:main",
            "pose_pub = test_flight_controller_three.pose_pub:main",
            "pose_rec_three = test_flight_controller_three.pose_rec_three:main",
            "pose_grapher_xy = test_flight_controller_three.pose_grapher_xy:main",
            "pose_grapher_yz = test_flight_controller_three.pose_grapher_yz:main",
            "pose_grapher_xz = test_flight_controller_three.pose_grapher_xz:main",
            "pose_grapher_xyz = test_flight_controller_three.pose_grapher_xyz:main"
        ],
    },
)
