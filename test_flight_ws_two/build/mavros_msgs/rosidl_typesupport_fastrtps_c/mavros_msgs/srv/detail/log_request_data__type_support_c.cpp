// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mavros_msgs:srv/LogRequestData.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/srv/detail/log_request_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mavros_msgs/srv/detail/log_request_data__struct.h"
#include "mavros_msgs/srv/detail/log_request_data__functions.h"
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


// forward declare type support functions


using _LogRequestData_Request__ros_msg_type = mavros_msgs__srv__LogRequestData_Request;

static bool _LogRequestData_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LogRequestData_Request__ros_msg_type * ros_message = static_cast<const _LogRequestData_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: offset
  {
    cdr << ros_message->offset;
  }

  // Field name: count
  {
    cdr << ros_message->count;
  }

  return true;
}

static bool _LogRequestData_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LogRequestData_Request__ros_msg_type * ros_message = static_cast<_LogRequestData_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: offset
  {
    cdr >> ros_message->offset;
  }

  // Field name: count
  {
    cdr >> ros_message->count;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t get_serialized_size_mavros_msgs__srv__LogRequestData_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LogRequestData_Request__ros_msg_type * ros_message = static_cast<const _LogRequestData_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset
  {
    size_t item_size = sizeof(ros_message->offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name count
  {
    size_t item_size = sizeof(ros_message->count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LogRequestData_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mavros_msgs__srv__LogRequestData_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t max_serialized_size_mavros_msgs__srv__LogRequestData_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LogRequestData_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mavros_msgs__srv__LogRequestData_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LogRequestData_Request = {
  "mavros_msgs::srv",
  "LogRequestData_Request",
  _LogRequestData_Request__cdr_serialize,
  _LogRequestData_Request__cdr_deserialize,
  _LogRequestData_Request__get_serialized_size,
  _LogRequestData_Request__max_serialized_size
};

static rosidl_message_type_support_t _LogRequestData_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LogRequestData_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, LogRequestData_Request)() {
  return &_LogRequestData_Request__type_support;
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
// #include "mavros_msgs/srv/detail/log_request_data__struct.h"
// already included above
// #include "mavros_msgs/srv/detail/log_request_data__functions.h"
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


using _LogRequestData_Response__ros_msg_type = mavros_msgs__srv__LogRequestData_Response;

static bool _LogRequestData_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LogRequestData_Response__ros_msg_type * ros_message = static_cast<const _LogRequestData_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _LogRequestData_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LogRequestData_Response__ros_msg_type * ros_message = static_cast<_LogRequestData_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t get_serialized_size_mavros_msgs__srv__LogRequestData_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LogRequestData_Response__ros_msg_type * ros_message = static_cast<const _LogRequestData_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LogRequestData_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mavros_msgs__srv__LogRequestData_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t max_serialized_size_mavros_msgs__srv__LogRequestData_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _LogRequestData_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mavros_msgs__srv__LogRequestData_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LogRequestData_Response = {
  "mavros_msgs::srv",
  "LogRequestData_Response",
  _LogRequestData_Response__cdr_serialize,
  _LogRequestData_Response__cdr_deserialize,
  _LogRequestData_Response__get_serialized_size,
  _LogRequestData_Response__max_serialized_size
};

static rosidl_message_type_support_t _LogRequestData_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LogRequestData_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, LogRequestData_Response)() {
  return &_LogRequestData_Response__type_support;
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
#include "mavros_msgs/srv/log_request_data.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t LogRequestData__callbacks = {
  "mavros_msgs::srv",
  "LogRequestData",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, LogRequestData_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, LogRequestData_Response)(),
};

static rosidl_service_type_support_t LogRequestData__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &LogRequestData__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, LogRequestData)() {
  return &LogRequestData__handle;
}

#if defined(__cplusplus)
}
#endif
