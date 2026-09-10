// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from masc_chassis_msgs:msg/ChassisStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/chassis_status.h"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__CHASSIS_STATUS__STRUCT_H_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__CHASSIS_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'CHASSIS_STATE_UNKNOWN'.
enum
{
  masc_chassis_msgs__msg__ChassisStatus__CHASSIS_STATE_UNKNOWN = 0
};

/// Constant 'CHASSIS_STATE_ESTOP'.
enum
{
  masc_chassis_msgs__msg__ChassisStatus__CHASSIS_STATE_ESTOP = 1
};

/// Constant 'CHASSIS_STATE_TOW'.
enum
{
  masc_chassis_msgs__msg__ChassisStatus__CHASSIS_STATE_TOW = 2
};

/// Constant 'CHASSIS_STATE_FAULT'.
enum
{
  masc_chassis_msgs__msg__ChassisStatus__CHASSIS_STATE_FAULT = 3
};

/// Constant 'CHASSIS_STATE_SELF_CHECK'.
enum
{
  masc_chassis_msgs__msg__ChassisStatus__CHASSIS_STATE_SELF_CHECK = 4
};

/// Constant 'CHASSIS_STATE_PARK'.
enum
{
  masc_chassis_msgs__msg__ChassisStatus__CHASSIS_STATE_PARK = 5
};

/// Constant 'CHASSIS_STATE_REMOTE_CONTROL'.
enum
{
  masc_chassis_msgs__msg__ChassisStatus__CHASSIS_STATE_REMOTE_CONTROL = 6
};

/// Constant 'CHASSIS_STATE_COMM_CONTROL'.
enum
{
  masc_chassis_msgs__msg__ChassisStatus__CHASSIS_STATE_COMM_CONTROL = 7
};

/// Constant 'MOTION_MODE_DEFAULT_CHASSIS'.
enum
{
  masc_chassis_msgs__msg__ChassisStatus__MOTION_MODE_DEFAULT_CHASSIS = 0
};

/// Constant 'MOTION_MODE_PARK'.
enum
{
  masc_chassis_msgs__msg__ChassisStatus__MOTION_MODE_PARK = 1
};

/// Constant 'MOTION_MODE_ACKERMANN'.
enum
{
  masc_chassis_msgs__msg__ChassisStatus__MOTION_MODE_ACKERMANN = 2
};

/// Constant 'MOTION_MODE_SPIN'.
enum
{
  masc_chassis_msgs__msg__ChassisStatus__MOTION_MODE_SPIN = 3
};

/// Constant 'MOTION_MODE_LATERAL'.
enum
{
  masc_chassis_msgs__msg__ChassisStatus__MOTION_MODE_LATERAL = 4
};

/// Constant 'MOTION_MODE_DIAGONAL'.
enum
{
  masc_chassis_msgs__msg__ChassisStatus__MOTION_MODE_DIAGONAL = 5
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/ChassisStatus in the package masc_chassis_msgs.
/**
  * Function: Chassis runtime status from motion mode and system info feedback.
  * Msg Name: ChassisStatus
 */
typedef struct masc_chassis_msgs__msg__ChassisStatus
{
  std_msgs__msg__Header header;
  /// 单位：无，底盘显示状态，见 CHASSIS_STATE_* 常量
  uint8_t chassis_state;
  /// 单位：无，当前底盘运动模式，见 MOTION_MODE_* 常量
  uint8_t current_motion_mode;
  /// 单位：无，是否处于运动模式切换中
  bool motion_mode_switching;
  /// 单位：无，抱闸是否激活
  bool brake_active;
  /// 单位：无，是否低电量
  bool low_battery;
  /// 单位：无，是否倾角过大
  bool excessive_tilt;
  /// 单位：无，是否手动充电
  bool manual_charging;
  /// 单位：无，是否充电桩充电
  bool dock_charging;
  /// 单位：无，动力电源是否接通，来自主接触器状态
  bool main_power_active;
  /// 单位：无，障碍状态 flags，bit0 前，bit1 后，bit2 左前，bit3 左后，bit4 右前，bit5 右后
  uint8_t obstacle_status_flags;
  /// 单位：无，0x204 Byte0-Byte3 原始状态值，Byte0 主状态，Byte1 系统 flags，Byte2 障碍 flags，Byte3 预留
  uint32_t system_status_flags;
  /// 单位：无，底盘故障码 bitfield/raw code
  uint32_t chassis_fault;
} masc_chassis_msgs__msg__ChassisStatus;

// Struct for a sequence of masc_chassis_msgs__msg__ChassisStatus.
typedef struct masc_chassis_msgs__msg__ChassisStatus__Sequence
{
  masc_chassis_msgs__msg__ChassisStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__msg__ChassisStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__CHASSIS_STATUS__STRUCT_H_
