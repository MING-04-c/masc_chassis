
网络配置可通过环境变量设置：

```bash
MASC_ARM_IP=192.168.1.20 MASC_ARM_PORT=9000 ros2 run masc_user_serial masc_tcp_node
```

推荐使用 launch 文件配置：

```bash
ros2 launch masc_user_serial masc_tcp.launch.py arm_ip:=192.168.1.20 arm_port:=9000
```

双向调试：向 `tcp_debug_tx` 发布字符串即可发送到 TCP 对端；对端返回的数据会发布到 `tcp_rx`。

```bash
ros2 topic pub --once /tcp_debug_tx std_msgs/msg/String "{data: 'ping'}"
ros2 topic echo /tcp_rx
```

## 相机图片 TCP 输出

先启动海康相机，再运行 `ros2 launch masc_user_serial masc_tcp.launch.py`。图像节点订阅 `/camera/image`，可发送 JPEG 或原始 ROS 图像字节，通过网线接口 `169.254.199.100:9002` 输出，只接受来自 `169.254.199.250` 的连接。原有 9001 端口的字符串/调试通讯保持不变。

```bash
ros2 launch masc_user_serial masc_tcp.launch.py image_topic:=/camera/image image_max_fps:=10.0
```

默认仍是 JPEG 模式。需要无压缩原始图像时运行 `ros2 launch masc_user_serial masc_tcp.launch.py image_format:=raw`，对端将收到 ROS `Image.data` 原样字节，图像编码等信息见 JSON 帧头。默认最多传输 10 帧/秒，慢客户端会跳过中间帧。暂时不需要图像服务可加 `image_stream:=false`。另一台电脑用网线直连的方法、逐字节协议和 Python 接收程序见 [CAMERA_TCP_PROTOCOL.md](CAMERA_TCP_PROTOCOL.md)。接收程序在 `tools/receive_camera_tcp.py`。

只启动图像服务、不启动原有 9001 TCP 服务时，可运行：

```bash
ros2 run masc_user_serial camera_image_tcp_node.py
```

对端电脑设置网线地址为 `169.254.199.250/24` 后运行：

```bash
python3 receive_camera_tcp.py --host 169.254.199.100 --port 9002 --latest latest.jpg
# 如果发送端选择 image_format:=raw，则改为 --latest latest.raw
```

如果网线 IP 改变，用 `image_listen_ip:=本机IP image_allowed_client_ip:=对端IP` 覆盖启动参数。
