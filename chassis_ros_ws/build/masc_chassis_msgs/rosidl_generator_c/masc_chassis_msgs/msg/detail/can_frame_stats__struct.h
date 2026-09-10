// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from masc_chassis_msgs:msg/CanFrameStats.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/can_frame_stats.h"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS__STRUCT_H_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'can_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CanFrameStats in the package masc_chassis_msgs.
/**
  * Function: Receive and parse statistics for one CAN ID.
  * Msg Name: CanFrameStats
 */
typedef struct masc_chassis_msgs__msg__CanFrameStats
{
  /// 单位：无，CAN ID，格式示例：0x200
  rosidl_runtime_c__String can_id;
  /// 单位：帧，接收成功次数
  uint64_t rx_count;
  /// 单位：帧，解析失败次数
  uint64_t parse_error_count;
  /// 单位：帧，丢弃次数
  uint64_t drop_count;
  /// 单位：Hz，低通平滑后的接收频率
  double frequency;
  /// 单位：ms，距离最后一次收到该 CAN ID 的时间；rx_count 为 0 时填 0
  uint64_t last_rx_age_ms;
} masc_chassis_msgs__msg__CanFrameStats;

// Struct for a sequence of masc_chassis_msgs__msg__CanFrameStats.
typedef struct masc_chassis_msgs__msg__CanFrameStats__Sequence
{
  masc_chassis_msgs__msg__CanFrameStats * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__msg__CanFrameStats__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS__STRUCT_H_
