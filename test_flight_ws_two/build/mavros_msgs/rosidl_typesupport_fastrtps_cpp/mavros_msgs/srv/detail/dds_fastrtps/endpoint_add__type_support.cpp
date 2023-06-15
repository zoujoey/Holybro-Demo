// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mavros_msgs:srv/EndpointAdd.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/srv/detail/endpoint_add__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mavros_msgs/srv/detail/endpoint_add__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
cdr_serialize(
  const mavros_msgs::srv::EndpointAdd_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: url
  cdr << ros_message.url;
  // Member: type
  cdr << ros_message.type;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mavros_msgs::srv::EndpointAdd_Request & ros_message)
{
  // Member: url
  cdr >> ros_message.url;

  // Member: type
  cdr >> ros_message.type;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
get_serialized_size(
  const mavros_msgs::srv::EndpointAdd_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: url
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.url.size() + 1);
  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
max_serialized_size_EndpointAdd_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: url
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _EndpointAdd_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mavros_msgs::srv::EndpointAdd_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EndpointAdd_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mavros_msgs::srv::EndpointAdd_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EndpointAdd_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mavros_msgs::srv::EndpointAdd_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EndpointAdd_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EndpointAdd_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _EndpointAdd_Request__callbacks = {
  "mavros_msgs::srv",
  "EndpointAdd_Request",
  _EndpointAdd_Request__cdr_serialize,
  _EndpointAdd_Request__cdr_deserialize,
  _EndpointAdd_Request__get_serialized_size,
  _EndpointAdd_Request__max_serialized_size
};

static rosidl_message_type_support_t _EndpointAdd_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EndpointAdd_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace mavros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mavros_msgs::srv::EndpointAdd_Request>()
{
  return &mavros_msgs::srv::typesupport_fastrtps_cpp::_EndpointAdd_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mavros_msgs, srv, EndpointAdd_Request)() {
  return &mavros_msgs::srv::typesupport_fastrtps_cpp::_EndpointAdd_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mavros_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
cdr_serialize(
  const mavros_msgs::srv::EndpointAdd_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: successful
  cdr << (ros_message.successful ? true : false);
  // Member: reason
  cdr << ros_message.reason;
  // Member: id
  cdr << ros_message.id;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mavros_msgs::srv::EndpointAdd_Response & ros_message)
{
  // Member: successful
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.successful = tmp ? true : false;
  }

  // Member: reason
  cdr >> ros_message.reason;

  // Member: id
  cdr >> ros_message.id;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
get_serialized_size(
  const mavros_msgs::srv::EndpointAdd_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: successful
  {
    size_t item_size = sizeof(ros_message.successful);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.reason.size() + 1);
  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
max_serialized_size_EndpointAdd_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: successful
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reason
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _EndpointAdd_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mavros_msgs::srv::EndpointAdd_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EndpointAdd_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mavros_msgs::srv::EndpointAdd_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EndpointAdd_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mavros_msgs::srv::EndpointAdd_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EndpointAdd_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EndpointAdd_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _EndpointAdd_Response__callbacks = {
  "mavros_msgs::srv",
  "EndpointAdd_Response",
  _EndpointAdd_Response__cdr_serialize,
  _EndpointAdd_Response__cdr_deserialize,
  _EndpointAdd_Response__get_serialized_size,
  _EndpointAdd_Response__max_serialized_size
};

static rosidl_message_type_support_t _EndpointAdd_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EndpointAdd_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace mavros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mavros_msgs::srv::EndpointAdd_Response>()
{
  return &mavros_msgs::srv::typesupport_fastrtps_cpp::_EndpointAdd_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mavros_msgs, srv, EndpointAdd_Response)() {
  return &mavros_msgs::srv::typesupport_fastrtps_cpp::_EndpointAdd_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace mavros_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _EndpointAdd__callbacks = {
  "mavros_msgs::srv",
  "EndpointAdd",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mavros_msgs, srv, EndpointAdd_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mavros_msgs, srv, EndpointAdd_Response)(),
};

static rosidl_service_type_support_t _EndpointAdd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EndpointAdd__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace mavros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mavros_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<mavros_msgs::srv::EndpointAdd>()
{
  return &mavros_msgs::srv::typesupport_fastrtps_cpp::_EndpointAdd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mavros_msgs, srv, EndpointAdd)() {
  return &mavros_msgs::srv::typesupport_fastrtps_cpp::_EndpointAdd__handle;
}

#ifdef __cplusplus
}
#endif
