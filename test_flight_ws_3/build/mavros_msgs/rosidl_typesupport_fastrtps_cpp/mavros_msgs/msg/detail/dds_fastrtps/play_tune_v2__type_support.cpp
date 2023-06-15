// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mavros_msgs:msg/PlayTuneV2.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/play_tune_v2__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mavros_msgs/msg/detail/play_tune_v2__struct.hpp"

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
  const mavros_msgs::msg::PlayTuneV2 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: format
  cdr << ros_message.format;
  // Member: tune
  cdr << ros_message.tune;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mavros_msgs::msg::PlayTuneV2 & ros_message)
{
  // Member: format
  cdr >> ros_message.format;

  // Member: tune
  cdr >> ros_message.tune;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
get_serialized_size(
  const mavros_msgs::msg::PlayTuneV2 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: format
  {
    size_t item_size = sizeof(ros_message.format);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tune
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.tune.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
max_serialized_size_PlayTuneV2(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: format
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tune
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PlayTuneV2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mavros_msgs::msg::PlayTuneV2 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlayTuneV2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mavros_msgs::msg::PlayTuneV2 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlayTuneV2__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mavros_msgs::msg::PlayTuneV2 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlayTuneV2__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PlayTuneV2(full_bounded, 0);
}

static message_type_support_callbacks_t _PlayTuneV2__callbacks = {
  "mavros_msgs::msg",
  "PlayTuneV2",
  _PlayTuneV2__cdr_serialize,
  _PlayTuneV2__cdr_deserialize,
  _PlayTuneV2__get_serialized_size,
  _PlayTuneV2__max_serialized_size
};

static rosidl_message_type_support_t _PlayTuneV2__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlayTuneV2__callbacks,
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
get_message_type_support_handle<mavros_msgs::msg::PlayTuneV2>()
{
  return &mavros_msgs::msg::typesupport_fastrtps_cpp::_PlayTuneV2__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mavros_msgs, msg, PlayTuneV2)() {
  return &mavros_msgs::msg::typesupport_fastrtps_cpp::_PlayTuneV2__handle;
}

#ifdef __cplusplus
}
#endif
