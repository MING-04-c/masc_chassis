
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
