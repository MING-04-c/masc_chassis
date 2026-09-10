// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from masc_chassis_msgs:msg/DriveMotorArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/drive_motor_array.h"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_ARRAY__STRUCT_H_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_ARRAY__STRUCT_H_

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
// Member 'motors'
#include "masc_chassis_msgs/msg/detail/drive_motor__struct.h"

/// Struct defined in msg/DriveMotorArray in the package masc_chassis_msgs.
/**
  * Function: Drive motor feedback array.
  * Msg Name: DriveMotorArray
 */
typedef struct masc_chassis_msgs__msg__DriveMotorArray
{
  std_msgs__msg__Header header;
  masc_chassis_msgs__msg__DriveMotor__Sequence motors;
} masc_chassis_msgs__msg__DriveMotorArray;

// Struct for a sequence of masc_chassis_msgs__msg__DriveMotorArray.
typedef struct masc_chassis_msgs__msg__DriveMotorArray__Sequence
{
  masc_chassis_msgs__msg__DriveMotorArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__msg__DriveMotorArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_ARRAY__STRUCT_H_
