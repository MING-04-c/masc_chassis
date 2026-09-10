// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from masc_chassis_msgs:srv/ClearFault.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/srv/clear_fault.hpp"


#ifndef MASC_CHASSIS_MSGS__SRV__DETAIL__CLEAR_FAULT__BUILDER_HPP_
#define MASC_CHASSIS_MSGS__SRV__DETAIL__CLEAR_FAULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "masc_chassis_msgs/srv/detail/clear_fault__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace masc_chassis_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearFault_Request_fault_id
{
public:
  Init_ClearFault_Request_fault_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::masc_chassis_msgs::srv::ClearFault_Request fault_id(::masc_chassis_msgs::srv::ClearFault_Request::_fault_id_type arg)
  {
    msg_.fault_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::masc_chassis_msgs::srv::ClearFault_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::masc_chassis_msgs::srv::ClearFault_Request>()
{
  return masc_chassis_msgs::srv::builder::Init_ClearFault_Request_fault_id();
}

}  // namespace masc_chassis_msgs


namespace masc_chassis_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearFault_Response_message
{
public:
  explicit Init_ClearFault_Response_message(::masc_chassis_msgs::srv::ClearFault_Response & msg)
  : msg_(msg)
  {}
  ::masc_chassis_msgs::srv::ClearFault_Response message(::masc_chassis_msgs::srv::ClearFault_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::masc_chassis_msgs::srv::ClearFault_Response msg_;
};

class Init_ClearFault_Response_success
{
public:
  Init_ClearFault_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClearFault_Response_message success(::masc_chassis_msgs::srv::ClearFault_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ClearFault_Response_message(msg_);
  }

private:
  ::masc_chassis_msgs::srv::ClearFault_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::masc_chassis_msgs::srv::ClearFault_Response>()
{
  return masc_chassis_msgs::srv::builder::Init_ClearFault_Response_success();
}

}  // namespace masc_chassis_msgs


namespace masc_chassis_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearFault_Event_response
{
public:
  explicit Init_ClearFault_Event_response(::masc_chassis_msgs::srv::ClearFault_Event & msg)
  : msg_(msg)
  {}
  ::masc_chassis_msgs::srv::ClearFault_Event response(::masc_chassis_msgs::srv::ClearFault_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::masc_chassis_msgs::srv::ClearFault_Event msg_;
};

class Init_ClearFault_Event_request
{
public:
  explicit Init_ClearFault_Event_request(::masc_chassis_msgs::srv::ClearFault_Event & msg)
  : msg_(msg)
  {}
  Init_ClearFault_Event_response request(::masc_chassis_msgs::srv::ClearFault_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ClearFault_Event_response(msg_);
  }

private:
  ::masc_chassis_msgs::srv::ClearFault_Event msg_;
};

class Init_ClearFault_Event_info
{
public:
  Init_ClearFault_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClearFault_Event_request info(::masc_chassis_msgs::srv::ClearFault_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ClearFault_Event_request(msg_);
  }

private:
  ::masc_chassis_msgs::srv::ClearFault_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::masc_chassis_msgs::srv::ClearFault_Event>()
{
  return masc_chassis_msgs::srv::builder::Init_ClearFault_Event_info();
}

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__SRV__DETAIL__CLEAR_FAULT__BUILDER_HPP_
