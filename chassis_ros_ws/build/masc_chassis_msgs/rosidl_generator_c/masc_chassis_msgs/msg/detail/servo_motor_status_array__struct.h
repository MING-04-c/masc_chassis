// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from masc_chassis_msgs:msg/ServoMotorStatusArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/servo_motor_status_array.h"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_STATUS_ARRAY__STRUCT_H_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_STATUS_ARRAY__STRUCT_H_

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
// Member 'status'
#include "masc_chassis_msgs/msg/detail/servo_motor_status__struct.h"

/// Struct defined in msg/ServoMotorStatusArray in the package masc_chassis_msgs.
/**
  * Function: Servo motor status array.
  * Msg Name: ServoMotorStatusArray
 */
typedef struct masc_chassis_msgs__msg__ServoMotorStatusArray
{
  std_msgs__msg__Header header;
  masc_chassis_msgs__msg__ServoMotorStatus__Sequence status;
} masc_chassis_msgs__msg__ServoMotorStatusArray;

// Struct for a sequence of masc_chassis_msgs__msg__ServoMotorStatusArray.
typedef struct masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence
{
  masc_chassis_msgs__msg__ServoMotorStatusArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_STATUS_ARRAY__STRUCT_H_
