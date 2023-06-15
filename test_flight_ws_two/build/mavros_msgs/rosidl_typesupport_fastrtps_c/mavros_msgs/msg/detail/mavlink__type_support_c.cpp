// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mavros_msgs:msg/Mavlink.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/mavlink__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mavros_msgs/msg/detail/mavlink__struct.h"
#include "mavros_msgs/msg/detail/mavlink__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // payload64, signature
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // payload64, signature
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mavros_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mavros_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mavros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Mavlink__ros_msg_type = mavros_msgs__msg__Mavlink;

static bool _Mavlink__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Mavlink__ros_msg_type * ros_message = static_cast<const _Mavlink__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: framing_status
  {
    cdr << ros_message->framing_status;
  }

  // Field name: magic
  {
    cdr << ros_message->magic;
  }

  // Field name: len
  {
    cdr << ros_message->len;
  }

  // Field name: incompat_flags
  {
    cdr << ros_message->incompat_flags;
  }

  // Field name: compat_flags
  {
    cdr << ros_message->compat_flags;
  }

  // Field name: seq
  {
    cdr << ros_message->seq;
  }

  // Field name: sysid
  {
    cdr << ros_message->sysid;
  }

  // Field name: compid
  {
    cdr << ros_message->compid;
  }

  // Field name: msgid
  {
    cdr << ros_message->msgid;
  }

  // Field name: checksum
  {
    cdr << ros_message->checksum;
  }

  // Field name: payload64
  {
    size_t size = ros_message->payload64.size;
    auto array_ptr = ros_message->payload64.data;
    if (size > 33) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: signature
  {
    size_t size = ros_message->signature.size;
    auto array_ptr = ros_message->signature.data;
    if (size > 13) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Mavlink__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Mavlink__ros_msg_type * ros_message = static_cast<_Mavlink__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: framing_status
  {
    cdr >> ros_message->framing_status;
  }

  // Field name: magic
  {
    cdr >> ros_message->magic;
  }

  // Field name: len
  {
    cdr >> ros_message->len;
  }

  // Field name: incompat_flags
  {
    cdr >> ros_message->incompat_flags;
  }

  // Field name: compat_flags
  {
    cdr >> ros_message->compat_flags;
  }

  // Field name: seq
  {
    cdr >> ros_message->seq;
  }

  // Field name: sysid
  {
    cdr >> ros_message->sysid;
  }

  // Field name: compid
  {
    cdr >> ros_message->compid;
  }

  // Field name: msgid
  {
    cdr >> ros_message->msgid;
  }

  // Field name: checksum
  {
    cdr >> ros_message->checksum;
  }

  // Field name: payload64
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->payload64.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->payload64);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->payload64, size)) {
      return "failed to create array for field 'payload64'";
    }
    auto array_ptr = ros_message->payload64.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: signature
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->signature.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->signature);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->signature, size)) {
      return "failed to create array for field 'signature'";
    }
    auto array_ptr = ros_message->signature.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t get_serialized_size_mavros_msgs__msg__Mavlink(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Mavlink__ros_msg_type * ros_message = static_cast<const _Mavlink__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name framing_status
  {
    size_t item_size = sizeof(ros_message->framing_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name magic
  {
    size_t item_size = sizeof(ros_message->magic);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name len
  {
    size_t item_size = sizeof(ros_message->len);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name incompat_flags
  {
    size_t item_size = sizeof(ros_message->incompat_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name compat_flags
  {
    size_t item_size = sizeof(ros_message->compat_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seq
  {
    size_t item_size = sizeof(ros_message->seq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sysid
  {
    size_t item_size = sizeof(ros_message->sysid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name compid
  {
    size_t item_size = sizeof(ros_message->compid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name msgid
  {
    size_t item_size = sizeof(ros_message->msgid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name checksum
  {
    size_t item_size = sizeof(ros_message->checksum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name payload64
  {
    size_t array_size = ros_message->payload64.size;
    auto array_ptr = ros_message->payload64.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signature
  {
    size_t array_size = ros_message->signature.size;
    auto array_ptr = ros_message->signature.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Mavlink__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mavros_msgs__msg__Mavlink(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t max_serialized_size_mavros_msgs__msg__Mavlink(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: framing_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: magic
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: len
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: incompat_flags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: compat_flags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sysid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: compid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: msgid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: checksum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: payload64
  {
    size_t array_size = 33;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: signature
  {
    size_t array_size = 13;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Mavlink__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mavros_msgs__msg__Mavlink(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Mavlink = {
  "mavros_msgs::msg",
  "Mavlink",
  _Mavlink__cdr_serialize,
  _Mavlink__cdr_deserialize,
  _Mavlink__get_serialized_size,
  _Mavlink__max_serialized_size
};

static rosidl_message_type_support_t _Mavlink__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Mavlink,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, msg, Mavlink)() {
  return &_Mavlink__type_support;
}

#if defined(__cplusplus)
}
#endif
