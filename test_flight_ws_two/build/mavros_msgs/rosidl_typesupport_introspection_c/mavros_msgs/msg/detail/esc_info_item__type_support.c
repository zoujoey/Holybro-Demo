// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mavros_msgs:msg/ESCInfoItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mavros_msgs/msg/detail/esc_info_item__rosidl_typesupport_introspection_c.h"
#include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mavros_msgs/msg/detail/esc_info_item__functions.h"
#include "mavros_msgs/msg/detail/esc_info_item__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ESCInfoItem__rosidl_typesupport_introspection_c__ESCInfoItem_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mavros_msgs__msg__ESCInfoItem__init(message_memory);
}

void ESCInfoItem__rosidl_typesupport_introspection_c__ESCInfoItem_fini_function(void * message_memory)
{
  mavros_msgs__msg__ESCInfoItem__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ESCInfoItem__rosidl_typesupport_introspection_c__ESCInfoItem_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ESCInfoItem, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "failure_flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ESCInfoItem, failure_flags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ESCInfoItem, error_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ESCInfoItem, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ESCInfoItem__rosidl_typesupport_introspection_c__ESCInfoItem_message_members = {
  "mavros_msgs__msg",  // message namespace
  "ESCInfoItem",  // message name
  4,  // number of fields
  sizeof(mavros_msgs__msg__ESCInfoItem),
  ESCInfoItem__rosidl_typesupport_introspection_c__ESCInfoItem_message_member_array,  // message members
  ESCInfoItem__rosidl_typesupport_introspection_c__ESCInfoItem_init_function,  // function to initialize message memory (memory has to be allocated)
  ESCInfoItem__rosidl_typesupport_introspection_c__ESCInfoItem_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ESCInfoItem__rosidl_typesupport_introspection_c__ESCInfoItem_message_type_support_handle = {
  0,
  &ESCInfoItem__rosidl_typesupport_introspection_c__ESCInfoItem_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, msg, ESCInfoItem)() {
  ESCInfoItem__rosidl_typesupport_introspection_c__ESCInfoItem_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ESCInfoItem__rosidl_typesupport_introspection_c__ESCInfoItem_message_type_support_handle.typesupport_identifier) {
    ESCInfoItem__rosidl_typesupport_introspection_c__ESCInfoItem_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ESCInfoItem__rosidl_typesupport_introspection_c__ESCInfoItem_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
