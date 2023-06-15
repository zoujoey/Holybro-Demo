// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mavros_msgs:msg/OverrideRCIn.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mavros_msgs/msg/detail/override_rc_in__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mavros_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OverrideRCIn_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mavros_msgs::msg::OverrideRCIn(_init);
}

void OverrideRCIn_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mavros_msgs::msg::OverrideRCIn *>(message_memory);
  typed_message->~OverrideRCIn();
}

size_t size_function__OverrideRCIn__channels(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__OverrideRCIn__channels(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__OverrideRCIn__channels(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 18> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OverrideRCIn_message_member_array[1] = {
  {
    "channels",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs::msg::OverrideRCIn, channels),  // bytes offset in struct
    nullptr,  // default value
    size_function__OverrideRCIn__channels,  // size() function pointer
    get_const_function__OverrideRCIn__channels,  // get_const(index) function pointer
    get_function__OverrideRCIn__channels,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OverrideRCIn_message_members = {
  "mavros_msgs::msg",  // message namespace
  "OverrideRCIn",  // message name
  1,  // number of fields
  sizeof(mavros_msgs::msg::OverrideRCIn),
  OverrideRCIn_message_member_array,  // message members
  OverrideRCIn_init_function,  // function to initialize message memory (memory has to be allocated)
  OverrideRCIn_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OverrideRCIn_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OverrideRCIn_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mavros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mavros_msgs::msg::OverrideRCIn>()
{
  return &::mavros_msgs::msg::rosidl_typesupport_introspection_cpp::OverrideRCIn_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mavros_msgs, msg, OverrideRCIn)() {
  return &::mavros_msgs::msg::rosidl_typesupport_introspection_cpp::OverrideRCIn_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
