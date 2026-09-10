// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from masc_chassis_msgs:msg/DriveMotor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/drive_motor.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR__STRUCT_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR__STRUCT_HPP_

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
# define DEPRECATED__masc_chassis_msgs__msg__DriveMotor __attribute__((deprecated))
#else
# define DEPRECATED__masc_chassis_msgs__msg__DriveMotor __declspec(deprecated)
#endif

namespace masc_chassis_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DriveMotor_
{
  using Type = DriveMotor_<ContainerAllocator>;

  explicit DriveMotor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
      this->speed = 0.0;
      this->current = 0.0;
      this->position = 0.0;
    }
  }

  explicit DriveMotor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
      this->speed = 0.0;
      this->current = 0.0;
      this->position = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _index_type =
    uint8_t;
  _index_type index;
  using _speed_type =
    double;
  _speed_type speed;
  using _current_type =
    double;
  _current_type current;
  using _position_type =
    double;
  _position_type position;

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
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__current(
    const double & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    masc_chassis_msgs::msg::DriveMotor_<ContainerAllocator> *;
  using ConstRawPtr =
    const masc_chassis_msgs::msg::DriveMotor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::DriveMotor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::DriveMotor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::DriveMotor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::DriveMotor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::DriveMotor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::DriveMotor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::DriveMotor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::DriveMotor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__masc_chassis_msgs__msg__DriveMotor
    std::shared_ptr<masc_chassis_msgs::msg::DriveMotor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__masc_chassis_msgs__msg__DriveMotor
    std::shared_ptr<masc_chassis_msgs::msg::DriveMotor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveMotor_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveMotor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveMotor_

// alias to use template instance with default allocator
using DriveMotor =
  masc_chassis_msgs::msg::DriveMotor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR__STRUCT_HPP_
