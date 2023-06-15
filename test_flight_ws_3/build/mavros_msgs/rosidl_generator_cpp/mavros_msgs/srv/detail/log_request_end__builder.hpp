// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mavros_msgs:srv/LogRequestEnd.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_END__BUILDER_HPP_
#define MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_END__BUILDER_HPP_

#include "mavros_msgs/srv/detail/log_request_end__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mavros_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mavros_msgs::srv::LogRequestEnd_Request>()
{
  return ::mavros_msgs::srv::LogRequestEnd_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mavros_msgs


namespace mavros_msgs
{

namespace srv
{

namespace builder
{

class Init_LogRequestEnd_Response_success
{
public:
  Init_LogRequestEnd_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mavros_msgs::srv::LogRequestEnd_Response success(::mavros_msgs::srv::LogRequestEnd_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mavros_msgs::srv::LogRequestEnd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mavros_msgs::srv::LogRequestEnd_Response>()
{
  return mavros_msgs::srv::builder::Init_LogRequestEnd_Response_success();
}

}  // namespace mavros_msgs

#endif  // MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_END__BUILDER_HPP_
