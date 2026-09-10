// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from masc_chassis_msgs:msg/ChassisStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/chassis_status.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__CHASSIS_STATUS__STRUCT_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__CHASSIS_STATUS__STRUCT_HPP_

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
# define DEPRECATED__masc_chassis_msgs__msg__ChassisStatus __attribute__((deprecated))
#else
# define DEPRECATED__masc_chassis_msgs__msg__ChassisStatus __declspec(deprecated)
#endif

namespace masc_chassis_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChassisStatus_
{
  using Type = ChassisStatus_<ContainerAllocator>;

  explicit ChassisStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_state = 0;
      this->current_motion_mode = 0;
      this->motion_mode_switching = false;
      this->brake_active = false;
      this->low_battery = false;
      this->excessive_tilt = false;
      this->manual_charging = false;
      this->dock_charging = false;
      this->main_power_active = false;
      this->obstacle_status_flags = 0;
      this->system_status_flags = 0ul;
      this->chassis_fault = 0ul;
    }
  }

  explicit ChassisStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_state = 0;
      this->current_motion_mode = 0;
      this->motion_mode_switching = false;
      this->brake_active = false;
      this->low_battery = false;
      this->excessive_tilt = false;
      this->manual_charging = false;
      this->dock_charging = false;
      this->main_power_active = false;
      this->obstacle_status_flags = 0;
      this->system_status_flags = 0ul;
      this->chassis_fault = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _chassis_state_type =
    uint8_t;
  _chassis_state_type chassis_state;
  using _current_motion_mode_type =
    uint8_t;
  _current_motion_mode_type current_motion_mode;
  using _motion_mode_switching_type =
    bool;
  _motion_mode_switching_type motion_mode_switching;
  using _brake_active_type =
    bool;
  _brake_active_type brake_active;
  using _low_battery_type =
    bool;
  _low_battery_type low_battery;
  using _excessive_tilt_type =
    bool;
  _excessive_tilt_type excessive_tilt;
  using _manual_charging_type =
    bool;
  _manual_charging_type manual_charging;
  using _dock_charging_type =
    bool;
  _dock_charging_type dock_charging;
  using _main_power_active_type =
    bool;
  _main_power_active_type main_power_active;
  using _obstacle_status_flags_type =
    uint8_t;
  _obstacle_status_flags_type obstacle_status_flags;
  using _system_status_flags_type =
    uint32_t;
  _system_status_flags_type system_status_flags;
  using _chassis_fault_type =
    uint32_t;
  _chassis_fault_type chassis_fault;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__chassis_state(
    const uint8_t & _arg)
  {
    this->chassis_state = _arg;
    return *this;
  }
  Type & set__current_motion_mode(
    const uint8_t & _arg)
  {
    this->current_motion_mode = _arg;
    return *this;
  }
  Type & set__motion_mode_switching(
    const bool & _arg)
  {
    this->motion_mode_switching = _arg;
    return *this;
  }
  Type & set__brake_active(
    const bool & _arg)
  {
    this->brake_active = _arg;
    return *this;
  }
  Type & set__low_battery(
    const bool & _arg)
  {
    this->low_battery = _arg;
    return *this;
  }
  Type & set__excessive_tilt(
    const bool & _arg)
  {
    this->excessive_tilt = _arg;
    return *this;
  }
  Type & set__manual_charging(
    const bool & _arg)
  {
    this->manual_charging = _arg;
    return *this;
  }
  Type & set__dock_charging(
    const bool & _arg)
  {
    this->dock_charging = _arg;
    return *this;
  }
  Type & set__main_power_active(
    const bool & _arg)
  {
    this->main_power_active = _arg;
    return *this;
  }
  Type & set__obstacle_status_flags(
    const uint8_t & _arg)
  {
    this->obstacle_status_flags = _arg;
    return *this;
  }
  Type & set__system_status_flags(
    const uint32_t & _arg)
  {
    this->system_status_flags = _arg;
    return *this;
  }
  Type & set__chassis_fault(
    const uint32_t & _arg)
  {
    this->chassis_fault = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CHASSIS_STATE_UNKNOWN =
    0u;
  static constexpr uint8_t CHASSIS_STATE_ESTOP =
    1u;
  static constexpr uint8_t CHASSIS_STATE_TOW =
    2u;
  static constexpr uint8_t CHASSIS_STATE_FAULT =
    3u;
  static constexpr uint8_t CHASSIS_STATE_SELF_CHECK =
    4u;
  static constexpr uint8_t CHASSIS_STATE_PARK =
    5u;
  static constexpr uint8_t CHASSIS_STATE_REMOTE_CONTROL =
    6u;
  static constexpr uint8_t CHASSIS_STATE_COMM_CONTROL =
    7u;
  static constexpr uint8_t MOTION_MODE_DEFAULT_CHASSIS =
    0u;
  static constexpr uint8_t MOTION_MODE_PARK =
    1u;
  static constexpr uint8_t MOTION_MODE_ACKERMANN =
    2u;
  static constexpr uint8_t MOTION_MODE_SPIN =
    3u;
  static constexpr uint8_t MOTION_MODE_LATERAL =
    4u;
  static constexpr uint8_t MOTION_MODE_DIAGONAL =
    5u;

  // pointer types
  using RawPtr =
    masc_chassis_msgs::msg::ChassisStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const masc_chassis_msgs::msg::ChassisStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::ChassisStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::ChassisStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::ChassisStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::ChassisStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::ChassisStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::ChassisStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::ChassisStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::ChassisStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__masc_chassis_msgs__msg__ChassisStatus
    std::shared_ptr<masc_chassis_msgs::msg::ChassisStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__masc_chassis_msgs__msg__ChassisStatus
    std::shared_ptr<masc_chassis_msgs::msg::ChassisStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChassisStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->chassis_state != other.chassis_state) {
      return false;
    }
    if (this->current_motion_mode != other.current_motion_mode) {
      return false;
    }
    if (this->motion_mode_switching != other.motion_mode_switching) {
      return false;
    }
    if (this->brake_active != other.brake_active) {
      return false;
    }
    if (this->low_battery != other.low_battery) {
      return false;
    }
    if (this->excessive_tilt != other.excessive_tilt) {
      return false;
    }
    if (this->manual_charging != other.manual_charging) {
      return false;
    }
    if (this->dock_charging != other.dock_charging) {
      return false;
    }
    if (this->main_power_active != other.main_power_active) {
      return false;
    }
    if (this->obstacle_status_flags != other.obstacle_status_flags) {
      return false;
    }
    if (this->system_status_flags != other.system_status_flags) {
      return false;
    }
    if (this->chassis_fault != other.chassis_fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChassisStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChassisStatus_

// alias to use template instance with default allocator
using ChassisStatus =
  masc_chassis_msgs::msg::ChassisStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChassisStatus_<ContainerAllocator>::CHASSIS_STATE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChassisStatus_<ContainerAllocator>::CHASSIS_STATE_ESTOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChassisStatus_<ContainerAllocator>::CHASSIS_STATE_TOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChassisStatus_<ContainerAllocator>::CHASSIS_STATE_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChassisStatus_<ContainerAllocator>::CHASSIS_STATE_SELF_CHECK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChassisStatus_<ContainerAllocator>::CHASSIS_STATE_PARK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChassisStatus_<ContainerAllocator>::CHASSIS_STATE_REMOTE_CONTROL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChassisStatus_<ContainerAllocator>::CHASSIS_STATE_COMM_CONTROL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChassisStatus_<ContainerAllocator>::MOTION_MODE_DEFAULT_CHASSIS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChassisStatus_<ContainerAllocator>::MOTION_MODE_PARK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChassisStatus_<ContainerAllocator>::MOTION_MODE_ACKERMANN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChassisStatus_<ContainerAllocator>::MOTION_MODE_SPIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChassisStatus_<ContainerAllocator>::MOTION_MODE_LATERAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChassisStatus_<ContainerAllocator>::MOTION_MODE_DIAGONAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__CHASSIS_STATUS__STRUCT_HPP_
