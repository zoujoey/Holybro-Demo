from setuptools import setup

package_name = 'test_flight_controller_two'

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
    maintainer_email='asrl@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "pose_pub = test_flight_controller_two.pose_pub:main",
            "pose_pub_dummy = test_flight_controller_two.pose_pub_dummy:main",
            "pose_pub_dum = test_flight_controller_two.pose_pub_dum:main"
        ],
    },
)
