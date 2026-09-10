// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from masc_chassis_msgs:msg/BmsStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/bms_status.h"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__BMS_STATUS__STRUCT_H_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__BMS_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'BMS_HEALTH_TIMEOUT'.
enum
{
  masc_chassis_msgs__msg__BmsStatus__BMS_HEALTH_TIMEOUT = 255
};

/// Constant 'BMS_HEALTH_UNKNOWN'.
enum
{
  masc_chassis_msgs__msg__BmsStatus__BMS_HEALTH_UNKNOWN = 0
};

/// Constant 'BMS_HEALTH_GOOD'.
enum
{
  masc_chassis_msgs__msg__BmsStatus__BMS_HEALTH_GOOD = 1
};

/// Constant 'BMS_HEALTH_OVERHEAT'.
enum
{
  masc_chassis_msgs__msg__BmsStatus__BMS_HEALTH_OVERHEAT = 2
};

/// Constant 'BMS_HEALTH_DEAD'.
enum
{
  masc_chassis_msgs__msg__BmsStatus__BMS_HEALTH_DEAD = 3
};

/// Constant 'BMS_HEALTH_OVERVOLTAGE'.
enum
{
  masc_chassis_msgs__msg__BmsStatus__BMS_HEALTH_OVERVOLTAGE = 4
};

/// Constant 'BMS_HEALTH_UNSPEC_FAILURE'.
enum
{
  masc_chassis_msgs__msg__BmsStatus__BMS_HEALTH_UNSPEC_FAILURE = 5
};

/// Constant 'BMS_HEALTH_COLD'.
enum
{
  masc_chassis_msgs__msg__BmsStatus__BMS_HEALTH_COLD = 6
};

/// Constant 'BMS_HEALTH_WATCHDOG_TIMER_EXPIRE'.
enum
{
  masc_chassis_msgs__msg__BmsStatus__BMS_HEALTH_WATCHDOG_TIMER_EXPIRE = 7
};

/// Constant 'BMS_HEALTH_SAFETY_TIMER_EXPIRE'.
enum
{
  masc_chassis_msgs__msg__BmsStatus__BMS_HEALTH_SAFETY_TIMER_EXPIRE = 8
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/BmsStatus in the package masc_chassis_msgs.
/**
  * Function: Unified BMS / power-system status.
  * Msg Name: BmsStatus
 */
typedef struct masc_chassis_msgs__msg__BmsStatus
{
  std_msgs__msg__Header header;
  /// 单位：%，电池剩余电量，范围 0-100
  uint8_t bat_soc;
  /// 单位：%，电池健康度，范围 0-100
  uint8_t bat_soh;
  /// 单位：V，电池电压
  double bat_voltage;
  /// 单位：A，电池电流，放电可为负值
  double bat_current;
  /// 单位：V，电池满电电压/电源系统允许最大电压
  double bat_max_voltage;
  /// 单位：A，电源系统允许最大电流
  double bat_max_current;
  /// 单位：degC，电池最高温度
  double bat_temp_max;
  /// 单位：degC，电池最低温度
  double bat_temp_min;
  /// 单位：无，BMS 健康状态，见 BMS_HEALTH_* 常量
  uint8_t bms_health;
  /// 单位：次，电池循环次数
  uint16_t bms_cycle_count;
} masc_chassis_msgs__msg__BmsStatus;

// Struct for a sequence of masc_chassis_msgs__msg__BmsStatus.
typedef struct masc_chassis_msgs__msg__BmsStatus__Sequence
{
  masc_chassis_msgs__msg__BmsStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__msg__BmsStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__BMS_STATUS__STRUCT_H_
