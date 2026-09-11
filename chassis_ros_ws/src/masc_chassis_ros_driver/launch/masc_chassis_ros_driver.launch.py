"""ROS2 启动文件：加载参数、启动底盘节点并设置 topic 重映射。"""

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    # 获取安装后的包目录，这样从任意工作目录执行 ros2 launch 都能找到配置文件。
    pkg_dir = get_package_share_directory('masc_chassis_ros_driver')

    odom_topic_remap = DeclareLaunchArgument(
        'odom_topic_remap',
        default_value='/wheel_odom',
        description='Remap topic name for chassis odom output',
    )

    driver_params = DeclareLaunchArgument(
        'driver_params',
        default_value=os.path.join(pkg_dir, 'config', 'ros2', 'driver_params.yaml'),
        description='MASC chassis driver parameter file',
    )

    cmd_vel_topic = DeclareLaunchArgument(
        'cmd_vel_topic',
        default_value='cmd_vel_nav',
        description='Remap topic name for chassis cmd_vel input',
    )

    stamped_control = DeclareLaunchArgument(
        'stamped_control',
        default_value='true',
        description='Use geometry_msgs/msg/TwistStamped for cmd_vel input',
    )

    # 启动真正的 C++ 驱动节点。参数文件和命令行 launch 参数会合并。
    driver_node = Node(
        package='masc_chassis_ros_driver',
        executable='masc_chassis_ros_driver_node',
        name='masc_chassis',
        output='screen',
        parameters=[
            LaunchConfiguration('driver_params'),
            {
                'command': {
                    'stamped_control': ParameterValue(
                        LaunchConfiguration('stamped_control'),
                        value_type=bool,
                    )
                }
            },
        ],
        remappings=[
            ('~/cmd_vel', LaunchConfiguration('cmd_vel_topic')),
            ('~/odom', LaunchConfiguration('odom_topic_remap')),
        ],
    )

    return LaunchDescription([
        odom_topic_remap,
        driver_params,
        cmd_vel_topic,
        stamped_control,
        driver_node,
    ])
