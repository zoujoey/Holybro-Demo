// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mavros_msgs:msg/GPSRTK.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/gpsrtk__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mavros_msgs/msg/detail/gpsrtk__struct.h"
#include "mavros_msgs/msg/detail/gpsrtk__functions.h"
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


using _GPSRTK__ros_msg_type = mavros_msgs__msg__GPSRTK;

static bool _GPSRTK__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GPSRTK__ros_msg_type * ros_message = static_cast<const _GPSRTK__ros_msg_type *>(untyped_ros_message);
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

  // Field name: rtk_receiver_id
  {
    cdr << ros_message->rtk_receiver_id;
  }

  // Field name: wn
  {
    cdr << ros_message->wn;
  }

  // Field name: tow
  {
    cdr << ros_message->tow;
  }

  // Field name: rtk_health
  {
    cdr << ros_message->rtk_health;
  }

  // Field name: rtk_rate
  {
    cdr << ros_message->rtk_rate;
  }

  // Field name: nsats
  {
    cdr << ros_message->nsats;
  }

  // Field name: baseline_a
  {
    cdr << ros_message->baseline_a;
  }

  // Field name: baseline_b
  {
    cdr << ros_message->baseline_b;
  }

  // Field name: baseline_c
  {
    cdr << ros_message->baseline_c;
  }

  // Field name: accuracy
  {
    cdr << ros_message->accuracy;
  }

  // Field name: iar_num_hypotheses
  {
    cdr << ros_message->iar_num_hypotheses;
  }

  return true;
}

static bool _GPSRTK__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GPSRTK__ros_msg_type * ros_message = static_cast<_GPSRTK__ros_msg_type *>(untyped_ros_message);
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

  // Field name: rtk_receiver_id
  {
    cdr >> ros_message->rtk_receiver_id;
  }

  // Field name: wn
  {
    cdr >> ros_message->wn;
  }

  // Field name: tow
  {
    cdr >> ros_message->tow;
  }

  // Field name: rtk_health
  {
    cdr >> ros_message->rtk_health;
  }

  // Field name: rtk_rate
  {
    cdr >> ros_message->rtk_rate;
  }

  // Field name: nsats
  {
    cdr >> ros_message->nsats;
  }

  // Field name: baseline_a
  {
    cdr >> ros_message->baseline_a;
  }

  // Field name: baseline_b
  {
    cdr >> ros_message->baseline_b;
  }

  // Field name: baseline_c
  {
    cdr >> ros_message->baseline_c;
  }

  // Field name: accuracy
  {
    cdr >> ros_message->accuracy;
  }

  // Field name: iar_num_hypotheses
  {
    cdr >> ros_message->iar_num_hypotheses;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t get_serialized_size_mavros_msgs__msg__GPSRTK(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GPSRTK__ros_msg_type * ros_message = static_cast<const _GPSRTK__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name rtk_receiver_id
  {
    size_t item_size = sizeof(ros_message->rtk_receiver_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wn
  {
    size_t item_size = sizeof(ros_message->wn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tow
  {
    size_t item_size = sizeof(ros_message->tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rtk_health
  {
    size_t item_size = sizeof(ros_message->rtk_health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rtk_rate
  {
    size_t item_size = sizeof(ros_message->rtk_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nsats
  {
    size_t item_size = sizeof(ros_message->nsats);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baseline_a
  {
    size_t item_size = sizeof(ros_message->baseline_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baseline_b
  {
    size_t item_size = sizeof(ros_message->baseline_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baseline_c
  {
    size_t item_size = sizeof(ros_message->baseline_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accuracy
  {
    size_t item_size = sizeof(ros_message->accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name iar_num_hypotheses
  {
    size_t item_size = sizeof(ros_message->iar_num_hypotheses);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GPSRTK__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mavros_msgs__msg__GPSRTK(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t max_serialized_size_mavros_msgs__msg__GPSRTK(
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
  // member: rtk_receiver_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wn
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: tow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rtk_health
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rtk_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nsats
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: baseline_a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: baseline_b
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: baseline_c
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accuracy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: iar_num_hypotheses
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GPSRTK__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mavros_msgs__msg__GPSRTK(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GPSRTK = {
  "mavros_msgs::msg",
  "GPSRTK",
  _GPSRTK__cdr_serialize,
  _GPSRTK__cdr_deserialize,
  _GPSRTK__get_serialized_size,
  _GPSRTK__max_serialized_size
};

static rosidl_message_type_support_t _GPSRTK__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GPSRTK,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, msg, GPSRTK)() {
  return &_GPSRTK__type_support;
}

#if defined(__cplusplus)
}
#endif
