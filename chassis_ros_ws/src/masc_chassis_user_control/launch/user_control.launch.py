import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    pkg = get_package_share_directory('masc_chassis_user_control')
    return LaunchDescription([
        Node(
            package='masc_chassis_user_control',
            executable='distance_controller_node',
            name='masc_chassis_user_control',
            output='screen',
            parameters=[os.path.join(pkg, 'config', 'user_control.yaml')],
        )
    ])
