// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from masc_chassis_msgs:msg/CanFrameStatsArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/can_frame_stats_array.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS_ARRAY__STRUCT_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS_ARRAY__STRUCT_HPP_

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
// Member 'stats'
#include "masc_chassis_msgs/msg/detail/can_frame_stats__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__masc_chassis_msgs__msg__CanFrameStatsArray __attribute__((deprecated))
#else
# define DEPRECATED__masc_chassis_msgs__msg__CanFrameStatsArray __declspec(deprecated)
#endif

namespace masc_chassis_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CanFrameStatsArray_
{
  using Type = CanFrameStatsArray_<ContainerAllocator>;

  explicit CanFrameStatsArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit CanFrameStatsArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _stats_type =
    std::vector<masc_chassis_msgs::msg::CanFrameStats_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<masc_chassis_msgs::msg::CanFrameStats_<ContainerAllocator>>>;
  _stats_type stats;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__stats(
    const std::vector<masc_chassis_msgs::msg::CanFrameStats_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<masc_chassis_msgs::msg::CanFrameStats_<ContainerAllocator>>> & _arg)
  {
    this->stats = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    masc_chassis_msgs::msg::CanFrameStatsArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const masc_chassis_msgs::msg::CanFrameStatsArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::CanFrameStatsArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::CanFrameStatsArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::CanFrameStatsArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::CanFrameStatsArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::CanFrameStatsArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::CanFrameStatsArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::CanFrameStatsArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::CanFrameStatsArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__masc_chassis_msgs__msg__CanFrameStatsArray
    std::shared_ptr<masc_chassis_msgs::msg::CanFrameStatsArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__masc_chassis_msgs__msg__CanFrameStatsArray
    std::shared_ptr<masc_chassis_msgs::msg::CanFrameStatsArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanFrameStatsArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->stats != other.stats) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanFrameStatsArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanFrameStatsArray_

// alias to use template instance with default allocator
using CanFrameStatsArray =
  masc_chassis_msgs::msg::CanFrameStatsArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS_ARRAY__STRUCT_HPP_
