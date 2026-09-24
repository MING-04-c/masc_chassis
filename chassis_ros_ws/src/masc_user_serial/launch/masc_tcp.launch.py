from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    arm_ip = LaunchConfiguration('arm_ip'); arm_port = LaunchConfiguration('arm_port')
    return LaunchDescription([
        DeclareLaunchArgument('arm_ip', default_value='169.254.199.250',
                              description='机械臂电脑 IPv4 地址'),
        DeclareLaunchArgument('arm_port', default_value='9000',
                              description='机械臂 TCP 端口'),
        DeclareLaunchArgument('listen_ip', 
                              default_value='0.0.0.0'), 
        DeclareLaunchArgument('listen_port', 
                              default_value='9001'),
        DeclareLaunchArgument('debug_format', default_value='auto',
                              description='调试发送格式: auto/ascii/hex'),
        DeclareLaunchArgument('image_stream', default_value='true',
                              description='启动图像 TCP 服务'),
        DeclareLaunchArgument('image_topic', default_value='/camera/image'),
        DeclareLaunchArgument('image_listen_ip', default_value='169.254.199.100',
                              description='本机网线 IPv4 地址'),
        DeclareLaunchArgument('image_allowed_client_ip', default_value='169.254.199.250',
                              description='允许接收图像的对端 IPv4 地址'),
        DeclareLaunchArgument('image_port', default_value='9002'),
        DeclareLaunchArgument('image_format', default_value='jpeg',
                              description='图像传输模式: jpeg/raw'),
        DeclareLaunchArgument('image_jpeg_quality', default_value='80'),
        DeclareLaunchArgument('image_max_fps', default_value='20.0'),
        Node(package='masc_user_serial', 
             executable='masc_tcp_node',
             name='masc_tcp_node', 
             output='screen', 
             parameters=[{'remote_ip':arm_ip},{'remote_port':arm_port},{'listen_ip':LaunchConfiguration('listen_ip')},{'listen_port':LaunchConfiguration('listen_port')},{'debug_format':LaunchConfiguration('debug_format')}]),
        Node(package='masc_user_serial',
             executable='camera_image_tcp_node.py',
             name='camera_image_tcp_node',
             output='screen',
             condition=IfCondition(LaunchConfiguration('image_stream')),
             parameters=[{
                 'image_topic': LaunchConfiguration('image_topic'),
                 'listen_ip': LaunchConfiguration('image_listen_ip'),
                 'allowed_client_ip': LaunchConfiguration('image_allowed_client_ip'),
                 'listen_port': ParameterValue(LaunchConfiguration('image_port'), value_type=int),
                 'max_fps': ParameterValue(LaunchConfiguration('image_max_fps'), value_type=float),
                 'image_format': LaunchConfiguration('image_format'),
                 'jpeg_quality': ParameterValue(LaunchConfiguration('image_jpeg_quality'), value_type=int),
             }]),
    ])
