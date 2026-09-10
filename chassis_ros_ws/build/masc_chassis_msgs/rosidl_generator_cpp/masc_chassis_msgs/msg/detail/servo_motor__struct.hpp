// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from masc_chassis_msgs:msg/ServoMotor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/servo_motor.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR__STRUCT_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR__STRUCT_HPP_

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
# define DEPRECATED__masc_chassis_msgs__msg__ServoMotor __attribute__((deprecated))
#else
# define DEPRECATED__masc_chassis_msgs__msg__ServoMotor __declspec(deprecated)
#endif

namespace masc_chassis_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServoMotor_
{
  using Type = ServoMotor_<ContainerAllocator>;

  explicit ServoMotor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
      this->calibration_state = 0;
      this->angle = 0.0;
      this->current = 0.0;
    }
  }

  explicit ServoMotor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
      this->calibration_state = 0;
      this->angle = 0.0;
      this->current = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _index_type =
    uint8_t;
  _index_type index;
  using _calibration_state_type =
    uint8_t;
  _calibration_state_type calibration_state;
  using _angle_type =
    double;
  _angle_type angle;
  using _current_type =
    double;
  _current_type current;

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
  Type & set__calibration_state(
    const uint8_t & _arg)
  {
    this->calibration_state = _arg;
    return *this;
  }
  Type & set__angle(
    const double & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__current(
    const double & _arg)
  {
    this->current = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SERVO_CALIBRATION_NOT_CALIBRATED =
    0u;
  static constexpr uint8_t SERVO_CALIBRATION_CALIBRATING =
    1u;
  static constexpr uint8_t SERVO_CALIBRATION_CALIBRATED =
    2u;

  // pointer types
  using RawPtr =
    masc_chassis_msgs::msg::ServoMotor_<ContainerAllocator> *;
  using ConstRawPtr =
    const masc_chassis_msgs::msg::ServoMotor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::ServoMotor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::ServoMotor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::ServoMotor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::ServoMotor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::ServoMotor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::ServoMotor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::ServoMotor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::ServoMotor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__masc_chassis_msgs__msg__ServoMotor
    std::shared_ptr<masc_chassis_msgs::msg::ServoMotor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__masc_chassis_msgs__msg__ServoMotor
    std::shared_ptr<masc_chassis_msgs::msg::ServoMotor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoMotor_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    if (this->calibration_state != other.calibration_state) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoMotor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoMotor_

// alias to use template instance with default allocator
using ServoMotor =
  masc_chassis_msgs::msg::ServoMotor_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ServoMotor_<ContainerAllocator>::SERVO_CALIBRATION_NOT_CALIBRATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ServoMotor_<ContainerAllocator>::SERVO_CALIBRATION_CALIBRATING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ServoMotor_<ContainerAllocator>::SERVO_CALIBRATION_CALIBRATED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR__STRUCT_HPP_
