// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mavros_msgs:srv/SetMode.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/srv/detail/set_mode__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mavros_msgs/srv/detail/set_mode__struct.h"
#include "mavros_msgs/srv/detail/set_mode__functions.h"
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

#include "rosidl_runtime_c/string.h"  // custom_mode
#include "rosidl_runtime_c/string_functions.h"  // custom_mode

// forward declare type support functions


using _SetMode_Request__ros_msg_type = mavros_msgs__srv__SetMode_Request;

static bool _SetMode_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetMode_Request__ros_msg_type * ros_message = static_cast<const _SetMode_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: base_mode
  {
    cdr << ros_message->base_mode;
  }

  // Field name: custom_mode
  {
    const rosidl_runtime_c__String * str = &ros_message->custom_mode;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SetMode_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetMode_Request__ros_msg_type * ros_message = static_cast<_SetMode_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: base_mode
  {
    cdr >> ros_message->base_mode;
  }

  // Field name: custom_mode
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->custom_mode.data) {
      rosidl_runtime_c__String__init(&ros_message->custom_mode);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->custom_mode,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'custom_mode'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t get_serialized_size_mavros_msgs__srv__SetMode_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMode_Request__ros_msg_type * ros_message = static_cast<const _SetMode_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name base_mode
  {
    size_t item_size = sizeof(ros_message->base_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name custom_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->custom_mode.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetMode_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mavros_msgs__srv__SetMode_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t max_serialized_size_mavros_msgs__srv__SetMode_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: base_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: custom_mode
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

static size_t _SetMode_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mavros_msgs__srv__SetMode_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetMode_Request = {
  "mavros_msgs::srv",
  "SetMode_Request",
  _SetMode_Request__cdr_serialize,
  _SetMode_Request__cdr_deserialize,
  _SetMode_Request__get_serialized_size,
  _SetMode_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetMode_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetMode_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, SetMode_Request)() {
  return &_SetMode_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mavros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mavros_msgs/srv/detail/set_mode__struct.h"
// already included above
// #include "mavros_msgs/srv/detail/set_mode__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _SetMode_Response__ros_msg_type = mavros_msgs__srv__SetMode_Response;

static bool _SetMode_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetMode_Response__ros_msg_type * ros_message = static_cast<const _SetMode_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: mode_sent
  {
    cdr << (ros_message->mode_sent ? true : false);
  }

  return true;
}

static bool _SetMode_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetMode_Response__ros_msg_type * ros_message = static_cast<_SetMode_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: mode_sent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mode_sent = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t get_serialized_size_mavros_msgs__srv__SetMode_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMode_Response__ros_msg_type * ros_message = static_cast<const _SetMode_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mode_sent
  {
    size_t item_size = sizeof(ros_message->mode_sent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetMode_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mavros_msgs__srv__SetMode_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t max_serialized_size_mavros_msgs__srv__SetMode_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: mode_sent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetMode_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mavros_msgs__srv__SetMode_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetMode_Response = {
  "mavros_msgs::srv",
  "SetMode_Response",
  _SetMode_Response__cdr_serialize,
  _SetMode_Response__cdr_deserialize,
  _SetMode_Response__get_serialized_size,
  _SetMode_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetMode_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetMode_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, SetMode_Response)() {
  return &_SetMode_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mavros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mavros_msgs/srv/set_mode.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetMode__callbacks = {
  "mavros_msgs::srv",
  "SetMode",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, SetMode_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, SetMode_Response)(),
};

static rosidl_service_type_support_t SetMode__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetMode__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, SetMode)() {
  return &SetMode__handle;
}

#if defined(__cplusplus)
}
#endif
