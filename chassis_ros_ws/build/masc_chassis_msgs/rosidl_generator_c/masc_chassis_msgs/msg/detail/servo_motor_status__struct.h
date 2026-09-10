// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from masc_chassis_msgs:msg/ServoMotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/servo_motor_status.h"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_STATUS__STRUCT_H_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_STATUS__STRUCT_H_

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

/// Struct defined in msg/ServoMotorStatus in the package masc_chassis_msgs.
/**
  * Function: Servo motor runtime status for one protocol index.
  * Msg Name: ServoMotorStatus
 */
typedef struct masc_chassis_msgs__msg__ServoMotorStatus
{
  std_msgs__msg__Header header;
  /// 单位：无，协议索引，由 CAN ID 范围计算
  uint8_t index;
  /// 单位：degC，舵机电机温度
  double motor_temperature;
  /// 单位：degC，驱动器温度
  double driver_temperature;
  /// 单位：无，驱动器故障码 bitfield/raw code
  uint32_t driver_fault;
} masc_chassis_msgs__msg__ServoMotorStatus;

// Struct for a sequence of masc_chassis_msgs__msg__ServoMotorStatus.
typedef struct masc_chassis_msgs__msg__ServoMotorStatus__Sequence
{
  masc_chassis_msgs__msg__ServoMotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__msg__ServoMotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_STATUS__STRUCT_H_
