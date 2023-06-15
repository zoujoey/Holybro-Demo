// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mavros_msgs:srv/WaypointPull.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__SRV__DETAIL__WAYPOINT_PULL__BUILDER_HPP_
#define MAVROS_MSGS__SRV__DETAIL__WAYPOINT_PULL__BUILDER_HPP_

#include "mavros_msgs/srv/detail/waypoint_pull__struct.hpp"
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
auto build<::mavros_msgs::srv::WaypointPull_Request>()
{
  return ::mavros_msgs::srv::WaypointPull_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mavros_msgs


namespace mavros_msgs
{

namespace srv
{

namespace builder
{

class Init_WaypointPull_Response_wp_received
{
public:
  explicit Init_WaypointPull_Response_wp_received(::mavros_msgs::srv::WaypointPull_Response & msg)
  : msg_(msg)
  {}
  ::mavros_msgs::srv::WaypointPull_Response wp_received(::mavros_msgs::srv::WaypointPull_Response::_wp_received_type arg)
  {
    msg_.wp_received = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mavros_msgs::srv::WaypointPull_Response msg_;
};

class Init_WaypointPull_Response_success
{
public:
  Init_WaypointPull_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointPull_Response_wp_received success(::mavros_msgs::srv::WaypointPull_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_WaypointPull_Response_wp_received(msg_);
  }

private:
  ::mavros_msgs::srv::WaypointPull_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mavros_msgs::srv::WaypointPull_Response>()
{
  return mavros_msgs::srv::builder::Init_WaypointPull_Response_success();
}

}  // namespace mavros_msgs

#endif  // MAVROS_MSGS__SRV__DETAIL__WAYPOINT_PULL__BUILDER_HPP_
