// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from masc_chassis_msgs:msg/RcStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/rc_status.h"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__RC_STATUS__STRUCT_H_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__RC_STATUS__STRUCT_H_

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

/// Struct defined in msg/RcStatus in the package masc_chassis_msgs.
/**
  * Function: RC channel feedback.
  * Msg Name: RcStatus
 */
typedef struct masc_chassis_msgs__msg__RcStatus
{
  std_msgs__msg__Header header;
  /// 单位：无，RC 遥控器是否在线
  bool online;
  /// 单位：无，RC 通道 CH0-CH6 原始值，范围 -100~100
  int8_t channels[7];
} masc_chassis_msgs__msg__RcStatus;

// Struct for a sequence of masc_chassis_msgs__msg__RcStatus.
typedef struct masc_chassis_msgs__msg__RcStatus__Sequence
{
  masc_chassis_msgs__msg__RcStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__msg__RcStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__RC_STATUS__STRUCT_H_
