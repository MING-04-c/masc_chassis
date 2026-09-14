from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    arm_ip = LaunchConfiguration('arm_ip'); arm_port = LaunchConfiguration('arm_port')
    return LaunchDescription([
        DeclareLaunchArgument('arm_ip', default_value='192.168.0.250',
                              description='机械臂电脑 IPv4 地址'),
        DeclareLaunchArgument('arm_port', default_value='9000',
                              description='机械臂 TCP 端口'),
        DeclareLaunchArgument('listen_ip', 
                              default_value='0.0.0.0'), 
        DeclareLaunchArgument('listen_port', 
                              default_value='9001'),
        Node(package='masc_user_serial', 
             executable='masc_tcp_node',
             name='masc_tcp_node', 
             output='screen', 
             parameters=[{'remote_ip':arm_ip},{'remote_port':arm_port},{'listen_ip':LaunchConfiguration('listen_ip')},{'listen_port':LaunchConfiguration('listen_port')}]),
    ])
