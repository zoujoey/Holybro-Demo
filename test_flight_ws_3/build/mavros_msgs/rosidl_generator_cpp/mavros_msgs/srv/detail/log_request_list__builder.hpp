// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mavros_msgs:srv/LogRequestList.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_LIST__BUILDER_HPP_
#define MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_LIST__BUILDER_HPP_

#include "mavros_msgs/srv/detail/log_request_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mavros_msgs
{

namespace srv
{

namespace builder
{

class Init_LogRequestList_Request_end
{
public:
  explicit Init_LogRequestList_Request_end(::mavros_msgs::srv::LogRequestList_Request & msg)
  : msg_(msg)
  {}
  ::mavros_msgs::srv::LogRequestList_Request end(::mavros_msgs::srv::LogRequestList_Request::_end_type arg)
  {
    msg_.end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mavros_msgs::srv::LogRequestList_Request msg_;
};

class Init_LogRequestList_Request_start
{
public:
  Init_LogRequestList_Request_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LogRequestList_Request_end start(::mavros_msgs::srv::LogRequestList_Request::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_LogRequestList_Request_end(msg_);
  }

private:
  ::mavros_msgs::srv::LogRequestList_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mavros_msgs::srv::LogRequestList_Request>()
{
  return mavros_msgs::srv::builder::Init_LogRequestList_Request_start();
}

}  // namespace mavros_msgs


namespace mavros_msgs
{

namespace srv
{

namespace builder
{

class Init_LogRequestList_Response_success
{
public:
  Init_LogRequestList_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mavros_msgs::srv::LogRequestList_Response success(::mavros_msgs::srv::LogRequestList_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mavros_msgs::srv::LogRequestList_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mavros_msgs::srv::LogRequestList_Response>()
{
  return mavros_msgs::srv::builder::Init_LogRequestList_Response_success();
}

}  // namespace mavros_msgs

#endif  // MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_LIST__BUILDER_HPP_
