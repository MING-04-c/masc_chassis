// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from masc_chassis_msgs:msg/ServoMotorArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/servo_motor_array.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_ARRAY__STRUCT_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_ARRAY__STRUCT_HPP_

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
// Member 'motors'
#include "masc_chassis_msgs/msg/detail/servo_motor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__masc_chassis_msgs__msg__ServoMotorArray __attribute__((deprecated))
#else
# define DEPRECATED__masc_chassis_msgs__msg__ServoMotorArray __declspec(deprecated)
#endif

namespace masc_chassis_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServoMotorArray_
{
  using Type = ServoMotorArray_<ContainerAllocator>;

  explicit ServoMotorArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ServoMotorArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _motors_type =
    std::vector<masc_chassis_msgs::msg::ServoMotor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<masc_chassis_msgs::msg::ServoMotor_<ContainerAllocator>>>;
  _motors_type motors;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__motors(
    const std::vector<masc_chassis_msgs::msg::ServoMotor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<masc_chassis_msgs::msg::ServoMotor_<ContainerAllocator>>> & _arg)
  {
    this->motors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    masc_chassis_msgs::msg::ServoMotorArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const masc_chassis_msgs::msg::ServoMotorArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::ServoMotorArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::ServoMotorArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::ServoMotorArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::ServoMotorArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::ServoMotorArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::ServoMotorArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::ServoMotorArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::ServoMotorArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__masc_chassis_msgs__msg__ServoMotorArray
    std::shared_ptr<masc_chassis_msgs::msg::ServoMotorArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__masc_chassis_msgs__msg__ServoMotorArray
    std::shared_ptr<masc_chassis_msgs::msg::ServoMotorArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoMotorArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->motors != other.motors) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoMotorArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoMotorArray_

// alias to use template instance with default allocator
using ServoMotorArray =
  masc_chassis_msgs::msg::ServoMotorArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_ARRAY__STRUCT_HPP_
