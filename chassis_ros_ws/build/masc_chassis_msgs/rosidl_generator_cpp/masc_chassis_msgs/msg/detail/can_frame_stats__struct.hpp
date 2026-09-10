// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from masc_chassis_msgs:msg/CanFrameStats.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/can_frame_stats.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS__STRUCT_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__masc_chassis_msgs__msg__CanFrameStats __attribute__((deprecated))
#else
# define DEPRECATED__masc_chassis_msgs__msg__CanFrameStats __declspec(deprecated)
#endif

namespace masc_chassis_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CanFrameStats_
{
  using Type = CanFrameStats_<ContainerAllocator>;

  explicit CanFrameStats_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = "";
      this->rx_count = 0ull;
      this->parse_error_count = 0ull;
      this->drop_count = 0ull;
      this->frequency = 0.0;
      this->last_rx_age_ms = 0ull;
    }
  }

  explicit CanFrameStats_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : can_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = "";
      this->rx_count = 0ull;
      this->parse_error_count = 0ull;
      this->drop_count = 0ull;
      this->frequency = 0.0;
      this->last_rx_age_ms = 0ull;
    }
  }

  // field types and members
  using _can_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _can_id_type can_id;
  using _rx_count_type =
    uint64_t;
  _rx_count_type rx_count;
  using _parse_error_count_type =
    uint64_t;
  _parse_error_count_type parse_error_count;
  using _drop_count_type =
    uint64_t;
  _drop_count_type drop_count;
  using _frequency_type =
    double;
  _frequency_type frequency;
  using _last_rx_age_ms_type =
    uint64_t;
  _last_rx_age_ms_type last_rx_age_ms;

  // setters for named parameter idiom
  Type & set__can_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->can_id = _arg;
    return *this;
  }
  Type & set__rx_count(
    const uint64_t & _arg)
  {
    this->rx_count = _arg;
    return *this;
  }
  Type & set__parse_error_count(
    const uint64_t & _arg)
  {
    this->parse_error_count = _arg;
    return *this;
  }
  Type & set__drop_count(
    const uint64_t & _arg)
  {
    this->drop_count = _arg;
    return *this;
  }
  Type & set__frequency(
    const double & _arg)
  {
    this->frequency = _arg;
    return *this;
  }
  Type & set__last_rx_age_ms(
    const uint64_t & _arg)
  {
    this->last_rx_age_ms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    masc_chassis_msgs::msg::CanFrameStats_<ContainerAllocator> *;
  using ConstRawPtr =
    const masc_chassis_msgs::msg::CanFrameStats_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::CanFrameStats_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::CanFrameStats_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::CanFrameStats_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::CanFrameStats_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::CanFrameStats_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::CanFrameStats_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::CanFrameStats_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::CanFrameStats_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__masc_chassis_msgs__msg__CanFrameStats
    std::shared_ptr<masc_chassis_msgs::msg::CanFrameStats_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__masc_chassis_msgs__msg__CanFrameStats
    std::shared_ptr<masc_chassis_msgs::msg::CanFrameStats_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanFrameStats_ & other) const
  {
    if (this->can_id != other.can_id) {
      return false;
    }
    if (this->rx_count != other.rx_count) {
      return false;
    }
    if (this->parse_error_count != other.parse_error_count) {
      return false;
    }
    if (this->drop_count != other.drop_count) {
      return false;
    }
    if (this->frequency != other.frequency) {
      return false;
    }
    if (this->last_rx_age_ms != other.last_rx_age_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanFrameStats_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanFrameStats_

// alias to use template instance with default allocator
using CanFrameStats =
  masc_chassis_msgs::msg::CanFrameStats_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS__STRUCT_HPP_
