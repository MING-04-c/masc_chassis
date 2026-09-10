// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from masc_chassis_msgs:msg/ServoMotor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/servo_motor.h"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR__STRUCT_H_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SERVO_CALIBRATION_NOT_CALIBRATED'.
enum
{
  masc_chassis_msgs__msg__ServoMotor__SERVO_CALIBRATION_NOT_CALIBRATED = 0
};

/// Constant 'SERVO_CALIBRATION_CALIBRATING'.
enum
{
  masc_chassis_msgs__msg__ServoMotor__SERVO_CALIBRATION_CALIBRATING = 1
};

/// Constant 'SERVO_CALIBRATION_CALIBRATED'.
enum
{
  masc_chassis_msgs__msg__ServoMotor__SERVO_CALIBRATION_CALIBRATED = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/ServoMotor in the package masc_chassis_msgs.
/**
  * Function: Servo motor feedback for one protocol index.
  * Msg Name: ServoMotor
 */
typedef struct masc_chassis_msgs__msg__ServoMotor
{
  std_msgs__msg__Header header;
  /// 单位：无，协议索引，由 CAN ID 范围计算
  uint8_t index;
  /// 单位：无，舵机自动标定状态，见 SERVO_CALIBRATION_* 常量
  uint8_t calibration_state;
  /// 单位：rad，舵机角度
  double angle;
  /// 单位：A，舵机电流
  double current;
} masc_chassis_msgs__msg__ServoMotor;

// Struct for a sequence of masc_chassis_msgs__msg__ServoMotor.
typedef struct masc_chassis_msgs__msg__ServoMotor__Sequence
{
  masc_chassis_msgs__msg__ServoMotor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__msg__ServoMotor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR__STRUCT_H_
