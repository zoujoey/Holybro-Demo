// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mavros_msgs:srv/ParamGet.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/srv/detail/param_get__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mavros_msgs/srv/detail/param_get__struct.h"
#include "mavros_msgs/srv/detail/param_get__functions.h"
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

#include "rosidl_runtime_c/string.h"  // param_id
#include "rosidl_runtime_c/string_functions.h"  // param_id

// forward declare type support functions


using _ParamGet_Request__ros_msg_type = mavros_msgs__srv__ParamGet_Request;

static bool _ParamGet_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ParamGet_Request__ros_msg_type * ros_message = static_cast<const _ParamGet_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: param_id
  {
    const rosidl_runtime_c__String * str = &ros_message->param_id;
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

static bool _ParamGet_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ParamGet_Request__ros_msg_type * ros_message = static_cast<_ParamGet_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: param_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->param_id.data) {
      rosidl_runtime_c__String__init(&ros_message->param_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->param_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'param_id'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t get_serialized_size_mavros_msgs__srv__ParamGet_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ParamGet_Request__ros_msg_type * ros_message = static_cast<const _ParamGet_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name param_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->param_id.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ParamGet_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mavros_msgs__srv__ParamGet_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t max_serialized_size_mavros_msgs__srv__ParamGet_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: param_id
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

static size_t _ParamGet_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mavros_msgs__srv__ParamGet_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ParamGet_Request = {
  "mavros_msgs::srv",
  "ParamGet_Request",
  _ParamGet_Request__cdr_serialize,
  _ParamGet_Request__cdr_deserialize,
  _ParamGet_Request__get_serialized_size,
  _ParamGet_Request__max_serialized_size
};

static rosidl_message_type_support_t _ParamGet_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ParamGet_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, ParamGet_Request)() {
  return &_ParamGet_Request__type_support;
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
// #include "mavros_msgs/srv/detail/param_get__struct.h"
// already included above
// #include "mavros_msgs/srv/detail/param_get__functions.h"
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

#include "mavros_msgs/msg/detail/param_value__functions.h"  // value

// forward declare type support functions
size_t get_serialized_size_mavros_msgs__msg__ParamValue(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mavros_msgs__msg__ParamValue(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, msg, ParamValue)();


using _ParamGet_Response__ros_msg_type = mavros_msgs__srv__ParamGet_Response;

static bool _ParamGet_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ParamGet_Response__ros_msg_type * ros_message = static_cast<const _ParamGet_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: value
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mavros_msgs, msg, ParamValue
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->value, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ParamGet_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ParamGet_Response__ros_msg_type * ros_message = static_cast<_ParamGet_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: value
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mavros_msgs, msg, ParamValue
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->value))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t get_serialized_size_mavros_msgs__srv__ParamGet_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ParamGet_Response__ros_msg_type * ros_message = static_cast<const _ParamGet_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name value

  current_alignment += get_serialized_size_mavros_msgs__msg__ParamValue(
    &(ros_message->value), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ParamGet_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mavros_msgs__srv__ParamGet_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t max_serialized_size_mavros_msgs__srv__ParamGet_Response(
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
  // member: value
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_mavros_msgs__msg__ParamValue(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ParamGet_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mavros_msgs__srv__ParamGet_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ParamGet_Response = {
  "mavros_msgs::srv",
  "ParamGet_Response",
  _ParamGet_Response__cdr_serialize,
  _ParamGet_Response__cdr_deserialize,
  _ParamGet_Response__get_serialized_size,
  _ParamGet_Response__max_serialized_size
};

static rosidl_message_type_support_t _ParamGet_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ParamGet_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, ParamGet_Response)() {
  return &_ParamGet_Response__type_support;
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
#include "mavros_msgs/srv/param_get.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ParamGet__callbacks = {
  "mavros_msgs::srv",
  "ParamGet",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, ParamGet_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, ParamGet_Response)(),
};

static rosidl_service_type_support_t ParamGet__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ParamGet__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, ParamGet)() {
  return &ParamGet__handle;
}

#if defined(__cplusplus)
}
#endif
