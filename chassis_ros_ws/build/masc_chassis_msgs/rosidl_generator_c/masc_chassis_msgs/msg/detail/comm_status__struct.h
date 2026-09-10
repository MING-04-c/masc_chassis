// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from masc_chassis_msgs:msg/CommStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/comm_status.h"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__COMM_STATUS__STRUCT_H_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__COMM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'COMM_STATE_UNKNOWN'.
enum
{
  masc_chassis_msgs__msg__CommStatus__COMM_STATE_UNKNOWN = 0
};

/// Constant 'COMM_STATE_DISCONNECTED'.
enum
{
  masc_chassis_msgs__msg__CommStatus__COMM_STATE_DISCONNECTED = 1
};

/// Constant 'COMM_STATE_CONNECTING'.
enum
{
  masc_chassis_msgs__msg__CommStatus__COMM_STATE_CONNECTING = 2
};

/// Constant 'COMM_STATE_PROTOCOL_MISMATCH'.
enum
{
  masc_chassis_msgs__msg__CommStatus__COMM_STATE_PROTOCOL_MISMATCH = 3
};

/// Constant 'COMM_STATE_CONNECTED'.
enum
{
  masc_chassis_msgs__msg__CommStatus__COMM_STATE_CONNECTED = 4
};

/// Constant 'FAIL_REASON_NONE'.
enum
{
  masc_chassis_msgs__msg__CommStatus__FAIL_REASON_NONE = 0
};

/// Constant 'FAIL_REASON_PORT_OPEN_FAILED'.
enum
{
  masc_chassis_msgs__msg__CommStatus__FAIL_REASON_PORT_OPEN_FAILED = 1
};

/// Constant 'FAIL_REASON_VERSION_TIMEOUT'.
enum
{
  masc_chassis_msgs__msg__CommStatus__FAIL_REASON_VERSION_TIMEOUT = 2
};

/// Constant 'FAIL_REASON_PROTOCOL_VERSION_MISMATCH'.
enum
{
  masc_chassis_msgs__msg__CommStatus__FAIL_REASON_PROTOCOL_VERSION_MISMATCH = 3
};

/// Constant 'FAIL_REASON_READ_ERROR'.
enum
{
  masc_chassis_msgs__msg__CommStatus__FAIL_REASON_READ_ERROR = 4
};

/// Constant 'FAIL_REASON_WRITE_ERROR'.
enum
{
  masc_chassis_msgs__msg__CommStatus__FAIL_REASON_WRITE_ERROR = 5
};

/// Constant 'FAIL_REASON_TRANSPORT_ERROR'.
enum
{
  masc_chassis_msgs__msg__CommStatus__FAIL_REASON_TRANSPORT_ERROR = 6
};

/// Constant 'FAIL_REASON_UNKNOWN'.
enum
{
  masc_chassis_msgs__msg__CommStatus__FAIL_REASON_UNKNOWN = 255
};

/// Constant 'CHASSIS_TYPE_RESERVED'.
/**
  * Chassis type values from system_version_feedback (0x205) Byte6.
  * Newer CAN V10 docs define currently supported values directly.
  * 0x00
 */
enum
{
  masc_chassis_msgs__msg__CommStatus__CHASSIS_TYPE_RESERVED = 0
};

/// Constant 'CHASSIS_TYPE_DIFF_2WD'.
/**
  * 0x01
 */
enum
{
  masc_chassis_msgs__msg__CommStatus__CHASSIS_TYPE_DIFF_2WD = 1
};

/// Constant 'CHASSIS_TYPE_DIFF_4WD'.
/**
  * 0x02
 */
enum
{
  masc_chassis_msgs__msg__CommStatus__CHASSIS_TYPE_DIFF_4WD = 2
};

/// Constant 'CHASSIS_TYPE_DIFF_6WD'.
/**
  * 0x03
 */
enum
{
  masc_chassis_msgs__msg__CommStatus__CHASSIS_TYPE_DIFF_6WD = 3
};

/// Constant 'CHASSIS_TYPE_DIFF_8WD'.
/**
  * 0x04
 */
enum
{
  masc_chassis_msgs__msg__CommStatus__CHASSIS_TYPE_DIFF_8WD = 4
};

/// Constant 'CHASSIS_TYPE_TRICYCLE_UNSPECIFIED'.
/**
  * 0x20
 */
enum
{
  masc_chassis_msgs__msg__CommStatus__CHASSIS_TYPE_TRICYCLE_UNSPECIFIED = 32
};

/// Constant 'CHASSIS_TYPE_TRICYCLE_FRONT'.
/**
  * 0x21
 */
enum
{
  masc_chassis_msgs__msg__CommStatus__CHASSIS_TYPE_TRICYCLE_FRONT = 33
};

/// Constant 'CHASSIS_TYPE_TRICYCLE_REAR'.
/**
  * 0x22
 */
enum
{
  masc_chassis_msgs__msg__CommStatus__CHASSIS_TYPE_TRICYCLE_REAR = 34
};

/// Constant 'CHASSIS_TYPE_ACKERMANN_UNSPECIFIED'.
/**
  * 0x40
 */
enum
{
  masc_chassis_msgs__msg__CommStatus__CHASSIS_TYPE_ACKERMANN_UNSPECIFIED = 64
};

/// Constant 'CHASSIS_TYPE_ACKERMANN_FRONT'.
/**
  * 0x41
 */
enum
{
  masc_chassis_msgs__msg__CommStatus__CHASSIS_TYPE_ACKERMANN_FRONT = 65
};

/// Constant 'CHASSIS_TYPE_ACKERMANN_REAR'.
/**
  * 0x42
 */
enum
{
  masc_chassis_msgs__msg__CommStatus__CHASSIS_TYPE_ACKERMANN_REAR = 66
};

/// Constant 'CHASSIS_TYPE_ACKERMANN_FRONT_REAR'.
/**
  * 0x43
 */
enum
{
  masc_chassis_msgs__msg__CommStatus__CHASSIS_TYPE_ACKERMANN_FRONT_REAR = 67
};

/// Constant 'CHASSIS_TYPE_AWS_4WS'.
/**
  * 0x61
 */
enum
{
  masc_chassis_msgs__msg__CommStatus__CHASSIS_TYPE_AWS_4WS = 97
};

/// Constant 'CHASSIS_TYPE_AWS_6WS'.
/**
  * 0x62
 */
enum
{
  masc_chassis_msgs__msg__CommStatus__CHASSIS_TYPE_AWS_6WS = 98
};

/// Constant 'CHASSIS_TYPE_AWS_8WS'.
/**
  * 0x63
 */
enum
{
  masc_chassis_msgs__msg__CommStatus__CHASSIS_TYPE_AWS_8WS = 99
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/CommStatus in the package masc_chassis_msgs.
/**
  * Function: CAN SDK communication status and chassis identity/version data.
  * Msg Name: CommStatus
 */
typedef struct masc_chassis_msgs__msg__CommStatus
{
  std_msgs__msg__Header header;
  /// 单位：无，CAN 通讯状态，见 COMM_STATE_* 常量
  uint8_t comm_state;
  /// 单位：无，通讯失败原因，见 FAIL_REASON_* 常量
  uint8_t fail_reason;
  /// 单位：无，运动控制命令是否处于超时保护状态
  bool motion_command_timeout_active;
  /// 单位：次，连接尝试次数
  uint64_t connection_attempt_count;
  /// 单位：次，CAN transport 错误次数
  uint64_t transport_error_count;
  /// 单位：次，发送错误次数
  uint64_t tx_error_count;
  /// 单位：次，接收错误次数
  uint64_t rx_error_count;
  /// 单位：无，底盘 UUID
  uint8_t chassis_uuid[5];
  /// 单位：无，系统软硬件版本原始字节，来自 0x205 Byte5
  uint8_t system_software_hardware_version;
  /// 单位：无，底盘类型版本，见 CHASSIS_TYPE_* 常量
  uint8_t chassis_type_version;
  /// 单位：无，通讯协议版本
  uint8_t chassis_protocol_version;
} masc_chassis_msgs__msg__CommStatus;

// Struct for a sequence of masc_chassis_msgs__msg__CommStatus.
typedef struct masc_chassis_msgs__msg__CommStatus__Sequence
{
  masc_chassis_msgs__msg__CommStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__msg__CommStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__COMM_STATUS__STRUCT_H_
