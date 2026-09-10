// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from masc_chassis_msgs:msg/DriveMotor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/drive_motor.h"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR__STRUCT_H_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR__STRUCT_H_

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

/// Struct defined in msg/DriveMotor in the package masc_chassis_msgs.
/**
  * Function: Drive motor feedback for one protocol index.
  * Msg Name: DriveMotor
 */
typedef struct masc_chassis_msgs__msg__DriveMotor
{
  std_msgs__msg__Header header;
  /// 单位：无，协议索引，由 CAN ID 范围计算
  uint8_t index;
  /// 单位：m/s，驱动轮线速度
  double speed;
  /// 单位：A，驱动电机电流
  double current;
  /// 单位：m，驱动轮累计位置
  double position;
} masc_chassis_msgs__msg__DriveMotor;

// Struct for a sequence of masc_chassis_msgs__msg__DriveMotor.
typedef struct masc_chassis_msgs__msg__DriveMotor__Sequence
{
  masc_chassis_msgs__msg__DriveMotor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__msg__DriveMotor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR__STRUCT_H_
