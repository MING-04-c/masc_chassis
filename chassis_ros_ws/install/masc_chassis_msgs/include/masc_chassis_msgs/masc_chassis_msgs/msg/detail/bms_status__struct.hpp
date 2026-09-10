// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from masc_chassis_msgs:msg/BmsStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/bms_status.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__BMS_STATUS__STRUCT_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__BMS_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__masc_chassis_msgs__msg__BmsStatus __attribute__((deprecated))
#else
# define DEPRECATED__masc_chassis_msgs__msg__BmsStatus __declspec(deprecated)
#endif

namespace masc_chassis_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BmsStatus_
{
  using Type = BmsStatus_<ContainerAllocator>;

  explicit BmsStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bat_soc = 0;
      this->bat_soh = 0;
      this->bat_voltage = 0.0;
      this->bat_current = 0.0;
      this->bat_max_voltage = 0.0;
      this->bat_max_current = 0.0;
      this->bat_temp_max = 0.0;
      this->bat_temp_min = 0.0;
      this->bms_health = 0;
      this->bms_cycle_count = 0;
    }
  }

  explicit BmsStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bat_soc = 0;
      this->bat_soh = 0;
      this->bat_voltage = 0.0;
      this->bat_current = 0.0;
      this->bat_max_voltage = 0.0;
      this->bat_max_current = 0.0;
      this->bat_temp_max = 0.0;
      this->bat_temp_min = 0.0;
      this->bms_health = 0;
      this->bms_cycle_count = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _bat_soc_type =
    uint8_t;
  _bat_soc_type bat_soc;
  using _bat_soh_type =
    uint8_t;
  _bat_soh_type bat_soh;
  using _bat_voltage_type =
    double;
  _bat_voltage_type bat_voltage;
  using _bat_current_type =
    double;
  _bat_current_type bat_current;
  using _bat_max_voltage_type =
    double;
  _bat_max_voltage_type bat_max_voltage;
  using _bat_max_current_type =
    double;
  _bat_max_current_type bat_max_current;
  using _bat_temp_max_type =
    double;
  _bat_temp_max_type bat_temp_max;
  using _bat_temp_min_type =
    double;
  _bat_temp_min_type bat_temp_min;
  using _bms_health_type =
    uint8_t;
  _bms_health_type bms_health;
  using _bms_cycle_count_type =
    uint16_t;
  _bms_cycle_count_type bms_cycle_count;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__bat_soc(
    const uint8_t & _arg)
  {
    this->bat_soc = _arg;
    return *this;
  }
  Type & set__bat_soh(
    const uint8_t & _arg)
  {
    this->bat_soh = _arg;
    return *this;
  }
  Type & set__bat_voltage(
    const double & _arg)
  {
    this->bat_voltage = _arg;
    return *this;
  }
  Type & set__bat_current(
    const double & _arg)
  {
    this->bat_current = _arg;
    return *this;
  }
  Type & set__bat_max_voltage(
    const double & _arg)
  {
    this->bat_max_voltage = _arg;
    return *this;
  }
  Type & set__bat_max_current(
    const double & _arg)
  {
    this->bat_max_current = _arg;
    return *this;
  }
  Type & set__bat_temp_max(
    const double & _arg)
  {
    this->bat_temp_max = _arg;
    return *this;
  }
  Type & set__bat_temp_min(
    const double & _arg)
  {
    this->bat_temp_min = _arg;
    return *this;
  }
  Type & set__bms_health(
    const uint8_t & _arg)
  {
    this->bms_health = _arg;
    return *this;
  }
  Type & set__bms_cycle_count(
    const uint16_t & _arg)
  {
    this->bms_cycle_count = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BMS_HEALTH_TIMEOUT =
    255u;
  static constexpr uint8_t BMS_HEALTH_UNKNOWN =
    0u;
  static constexpr uint8_t BMS_HEALTH_GOOD =
    1u;
  static constexpr uint8_t BMS_HEALTH_OVERHEAT =
    2u;
  static constexpr uint8_t BMS_HEALTH_DEAD =
    3u;
  static constexpr uint8_t BMS_HEALTH_OVERVOLTAGE =
    4u;
  static constexpr uint8_t BMS_HEALTH_UNSPEC_FAILURE =
    5u;
  static constexpr uint8_t BMS_HEALTH_COLD =
    6u;
  static constexpr uint8_t BMS_HEALTH_WATCHDOG_TIMER_EXPIRE =
    7u;
  static constexpr uint8_t BMS_HEALTH_SAFETY_TIMER_EXPIRE =
    8u;

  // pointer types
  using RawPtr =
    masc_chassis_msgs::msg::BmsStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const masc_chassis_msgs::msg::BmsStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::BmsStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::BmsStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::BmsStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::BmsStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::BmsStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::BmsStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::BmsStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::BmsStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__masc_chassis_msgs__msg__BmsStatus
    std::shared_ptr<masc_chassis_msgs::msg::BmsStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__masc_chassis_msgs__msg__BmsStatus
    std::shared_ptr<masc_chassis_msgs::msg::BmsStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BmsStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->bat_soc != other.bat_soc) {
      return false;
    }
    if (this->bat_soh != other.bat_soh) {
      return false;
    }
    if (this->bat_voltage != other.bat_voltage) {
      return false;
    }
    if (this->bat_current != other.bat_current) {
      return false;
    }
    if (this->bat_max_voltage != other.bat_max_voltage) {
      return false;
    }
    if (this->bat_max_current != other.bat_max_current) {
      return false;
    }
    if (this->bat_temp_max != other.bat_temp_max) {
      return false;
    }
    if (this->bat_temp_min != other.bat_temp_min) {
      return false;
    }
    if (this->bms_health != other.bms_health) {
      return false;
    }
    if (this->bms_cycle_count != other.bms_cycle_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const BmsStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BmsStatus_

// alias to use template instance with default allocator
using BmsStatus =
  masc_chassis_msgs::msg::BmsStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BmsStatus_<ContainerAllocator>::BMS_HEALTH_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BmsStatus_<ContainerAllocator>::BMS_HEALTH_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BmsStatus_<ContainerAllocator>::BMS_HEALTH_GOOD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BmsStatus_<ContainerAllocator>::BMS_HEALTH_OVERHEAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BmsStatus_<ContainerAllocator>::BMS_HEALTH_DEAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BmsStatus_<ContainerAllocator>::BMS_HEALTH_OVERVOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BmsStatus_<ContainerAllocator>::BMS_HEALTH_UNSPEC_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BmsStatus_<ContainerAllocator>::BMS_HEALTH_COLD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BmsStatus_<ContainerAllocator>::BMS_HEALTH_WATCHDOG_TIMER_EXPIRE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BmsStatus_<ContainerAllocator>::BMS_HEALTH_SAFETY_TIMER_EXPIRE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__BMS_STATUS__STRUCT_HPP_
