// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mavros_msgs:msg/RCOut.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__RC_OUT__BUILDER_HPP_
#define MAVROS_MSGS__MSG__DETAIL__RC_OUT__BUILDER_HPP_

#include "mavros_msgs/msg/detail/rc_out__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mavros_msgs
{

namespace msg
{

namespace builder
{

class Init_RCOut_channels
{
public:
  explicit Init_RCOut_channels(::mavros_msgs::msg::RCOut & msg)
  : msg_(msg)
  {}
  ::mavros_msgs::msg::RCOut channels(::mavros_msgs::msg::RCOut::_channels_type arg)
  {
    msg_.channels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mavros_msgs::msg::RCOut msg_;
};

class Init_RCOut_header
{
public:
  Init_RCOut_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RCOut_channels header(::mavros_msgs::msg::RCOut::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RCOut_channels(msg_);
  }

private:
  ::mavros_msgs::msg::RCOut msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mavros_msgs::msg::RCOut>()
{
  return mavros_msgs::msg::builder::Init_RCOut_header();
}

}  // namespace mavros_msgs

#endif  // MAVROS_MSGS__MSG__DETAIL__RC_OUT__BUILDER_HPP_
