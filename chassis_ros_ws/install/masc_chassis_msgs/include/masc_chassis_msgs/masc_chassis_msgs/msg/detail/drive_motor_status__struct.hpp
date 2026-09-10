// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from masc_chassis_msgs:msg/DriveMotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/drive_motor_status.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS__STRUCT_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS__STRUCT_HPP_

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
# define DEPRECATED__masc_chassis_msgs__msg__DriveMotorStatus __attribute__((deprecated))
#else
# define DEPRECATED__masc_chassis_msgs__msg__DriveMotorStatus __declspec(deprecated)
#endif

namespace masc_chassis_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DriveMotorStatus_
{
  using Type = DriveMotorStatus_<ContainerAllocator>;

  explicit DriveMotorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
      this->motor_temperature = 0.0;
      this->driver_temperature = 0.0;
      this->driver_fault = 0ul;
    }
  }

  explicit DriveMotorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
      this->motor_temperature = 0.0;
      this->driver_temperature = 0.0;
      this->driver_fault = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _index_type =
    uint8_t;
  _index_type index;
  using _motor_temperature_type =
    double;
  _motor_temperature_type motor_temperature;
  using _driver_temperature_type =
    double;
  _driver_temperature_type driver_temperature;
  using _driver_fault_type =
    uint32_t;
  _driver_fault_type driver_fault;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__index(
    const uint8_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__motor_temperature(
    const double & _arg)
  {
    this->motor_temperature = _arg;
    return *this;
  }
  Type & set__driver_temperature(
    const double & _arg)
  {
    this->driver_temperature = _arg;
    return *this;
  }
  Type & set__driver_fault(
    const uint32_t & _arg)
  {
    this->driver_fault = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    masc_chassis_msgs::msg::DriveMotorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const masc_chassis_msgs::msg::DriveMotorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::DriveMotorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::DriveMotorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::DriveMotorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::DriveMotorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::DriveMotorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::DriveMotorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::DriveMotorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::DriveMotorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__masc_chassis_msgs__msg__DriveMotorStatus
    std::shared_ptr<masc_chassis_msgs::msg::DriveMotorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__masc_chassis_msgs__msg__DriveMotorStatus
    std::shared_ptr<masc_chassis_msgs::msg::DriveMotorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveMotorStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    if (this->motor_temperature != other.motor_temperature) {
      return false;
    }
    if (this->driver_temperature != other.driver_temperature) {
      return false;
    }
    if (this->driver_fault != other.driver_fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveMotorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveMotorStatus_

// alias to use template instance with default allocator
using DriveMotorStatus =
  masc_chassis_msgs::msg::DriveMotorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS__STRUCT_HPP_
