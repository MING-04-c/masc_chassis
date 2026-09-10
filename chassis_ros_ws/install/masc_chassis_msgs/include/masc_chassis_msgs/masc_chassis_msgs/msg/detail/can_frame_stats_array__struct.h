// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from masc_chassis_msgs:msg/CanFrameStatsArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/can_frame_stats_array.h"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS_ARRAY__STRUCT_H_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'stats'
#include "masc_chassis_msgs/msg/detail/can_frame_stats__struct.h"

/// Struct defined in msg/CanFrameStatsArray in the package masc_chassis_msgs.
/**
  * Function: Receive and parse statistics for all tracked CAN IDs.
  * Msg Name: CanFrameStatsArray
 */
typedef struct masc_chassis_msgs__msg__CanFrameStatsArray
{
  /// 单位：无，本组 CAN 统计信息的发布时间
  std_msgs__msg__Header header;
  masc_chassis_msgs__msg__CanFrameStats__Sequence stats;
} masc_chassis_msgs__msg__CanFrameStatsArray;

// Struct for a sequence of masc_chassis_msgs__msg__CanFrameStatsArray.
typedef struct masc_chassis_msgs__msg__CanFrameStatsArray__Sequence
{
  masc_chassis_msgs__msg__CanFrameStatsArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__msg__CanFrameStatsArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS_ARRAY__STRUCT_H_
