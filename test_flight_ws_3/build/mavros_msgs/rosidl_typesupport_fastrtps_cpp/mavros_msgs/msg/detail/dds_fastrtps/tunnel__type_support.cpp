// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mavros_msgs:msg/Tunnel.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/tunnel__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mavros_msgs/msg/detail/tunnel__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mavros_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
cdr_serialize(
  const mavros_msgs::msg::Tunnel & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: target_system
  cdr << ros_message.target_system;
  // Member: target_component
  cdr << ros_message.target_component;
  // Member: payload_type
  cdr << ros_message.payload_type;
  // Member: payload_length
  cdr << ros_message.payload_length;
  // Member: payload
  {
    cdr << ros_message.payload;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mavros_msgs::msg::Tunnel & ros_message)
{
  // Member: target_system
  cdr >> ros_message.target_system;

  // Member: target_component
  cdr >> ros_message.target_component;

  // Member: payload_type
  cdr >> ros_message.payload_type;

  // Member: payload_length
  cdr >> ros_message.payload_length;

  // Member: payload
  {
    cdr >> ros_message.payload;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
get_serialized_size(
  const mavros_msgs::msg::Tunnel & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: target_system
  {
    size_t item_size = sizeof(ros_message.target_system);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_component
  {
    size_t item_size = sizeof(ros_message.target_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: payload_type
  {
    size_t item_size = sizeof(ros_message.payload_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: payload_length
  {
    size_t item_size = sizeof(ros_message.payload_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: payload
  {
    size_t array_size = 128;
    size_t item_size = sizeof(ros_message.payload[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
max_serialized_size_Tunnel(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: target_system
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: target_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: payload_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: payload_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: payload
  {
    size_t array_size = 128;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Tunnel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mavros_msgs::msg::Tunnel *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Tunnel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mavros_msgs::msg::Tunnel *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Tunnel__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mavros_msgs::msg::Tunnel *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Tunnel__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Tunnel(full_bounded, 0);
}

static message_type_support_callbacks_t _Tunnel__callbacks = {
  "mavros_msgs::msg",
  "Tunnel",
  _Tunnel__cdr_serialize,
  _Tunnel__cdr_deserialize,
  _Tunnel__get_serialized_size,
  _Tunnel__max_serialized_size
};

static rosidl_message_type_support_t _Tunnel__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tunnel__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mavros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mavros_msgs::msg::Tunnel>()
{
  return &mavros_msgs::msg::typesupport_fastrtps_cpp::_Tunnel__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mavros_msgs, msg, Tunnel)() {
  return &mavros_msgs::msg::typesupport_fastrtps_cpp::_Tunnel__handle;
}

#ifdef __cplusplus
}
#endif
