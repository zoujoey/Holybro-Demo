// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mavros_msgs:srv/VehicleInfoGet.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/srv/detail/vehicle_info_get__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mavros_msgs/srv/detail/vehicle_info_get__struct.hpp"

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
  const mavros_msgs::srv::VehicleInfoGet_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sysid
  cdr << ros_message.sysid;
  // Member: compid
  cdr << ros_message.compid;
  // Member: get_all
  cdr << (ros_message.get_all ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mavros_msgs::srv::VehicleInfoGet_Request & ros_message)
{
  // Member: sysid
  cdr >> ros_message.sysid;

  // Member: compid
  cdr >> ros_message.compid;

  // Member: get_all
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.get_all = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
get_serialized_size(
  const mavros_msgs::srv::VehicleInfoGet_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sysid
  {
    size_t item_size = sizeof(ros_message.sysid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: compid
  {
    size_t item_size = sizeof(ros_message.compid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: get_all
  {
    size_t item_size = sizeof(ros_message.get_all);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
max_serialized_size_VehicleInfoGet_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: sysid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: compid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: get_all
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleInfoGet_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mavros_msgs::srv::VehicleInfoGet_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleInfoGet_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mavros_msgs::srv::VehicleInfoGet_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleInfoGet_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mavros_msgs::srv::VehicleInfoGet_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleInfoGet_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleInfoGet_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleInfoGet_Request__callbacks = {
  "mavros_msgs::srv",
  "VehicleInfoGet_Request",
  _VehicleInfoGet_Request__cdr_serialize,
  _VehicleInfoGet_Request__cdr_deserialize,
  _VehicleInfoGet_Request__get_serialized_size,
  _VehicleInfoGet_Request__max_serialized_size
};

static rosidl_message_type_support_t _VehicleInfoGet_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleInfoGet_Request__callbacks,
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
get_message_type_support_handle<mavros_msgs::srv::VehicleInfoGet_Request>()
{
  return &mavros_msgs::srv::typesupport_fastrtps_cpp::_VehicleInfoGet_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mavros_msgs, srv, VehicleInfoGet_Request)() {
  return &mavros_msgs::srv::typesupport_fastrtps_cpp::_VehicleInfoGet_Request__handle;
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
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mavros_msgs::msg::VehicleInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mavros_msgs::msg::VehicleInfo &);
size_t get_serialized_size(
  const mavros_msgs::msg::VehicleInfo &,
  size_t current_alignment);
size_t
max_serialized_size_VehicleInfo(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mavros_msgs


namespace mavros_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
cdr_serialize(
  const mavros_msgs::srv::VehicleInfoGet_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: vehicles
  {
    size_t size = ros_message.vehicles.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      mavros_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.vehicles[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mavros_msgs::srv::VehicleInfoGet_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: vehicles
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.vehicles.resize(size);
    for (size_t i = 0; i < size; i++) {
      mavros_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.vehicles[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
get_serialized_size(
  const mavros_msgs::srv::VehicleInfoGet_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicles
  {
    size_t array_size = ros_message.vehicles.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mavros_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.vehicles[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mavros_msgs
max_serialized_size_VehicleInfoGet_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vehicles
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mavros_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_VehicleInfo(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleInfoGet_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mavros_msgs::srv::VehicleInfoGet_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleInfoGet_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mavros_msgs::srv::VehicleInfoGet_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleInfoGet_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mavros_msgs::srv::VehicleInfoGet_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleInfoGet_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleInfoGet_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleInfoGet_Response__callbacks = {
  "mavros_msgs::srv",
  "VehicleInfoGet_Response",
  _VehicleInfoGet_Response__cdr_serialize,
  _VehicleInfoGet_Response__cdr_deserialize,
  _VehicleInfoGet_Response__get_serialized_size,
  _VehicleInfoGet_Response__max_serialized_size
};

static rosidl_message_type_support_t _VehicleInfoGet_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleInfoGet_Response__callbacks,
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
get_message_type_support_handle<mavros_msgs::srv::VehicleInfoGet_Response>()
{
  return &mavros_msgs::srv::typesupport_fastrtps_cpp::_VehicleInfoGet_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mavros_msgs, srv, VehicleInfoGet_Response)() {
  return &mavros_msgs::srv::typesupport_fastrtps_cpp::_VehicleInfoGet_Response__handle;
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

static service_type_support_callbacks_t _VehicleInfoGet__callbacks = {
  "mavros_msgs::srv",
  "VehicleInfoGet",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mavros_msgs, srv, VehicleInfoGet_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mavros_msgs, srv, VehicleInfoGet_Response)(),
};

static rosidl_service_type_support_t _VehicleInfoGet__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleInfoGet__callbacks,
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
get_service_type_support_handle<mavros_msgs::srv::VehicleInfoGet>()
{
  return &mavros_msgs::srv::typesupport_fastrtps_cpp::_VehicleInfoGet__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mavros_msgs, srv, VehicleInfoGet)() {
  return &mavros_msgs::srv::typesupport_fastrtps_cpp::_VehicleInfoGet__handle;
}

#ifdef __cplusplus
}
#endif
