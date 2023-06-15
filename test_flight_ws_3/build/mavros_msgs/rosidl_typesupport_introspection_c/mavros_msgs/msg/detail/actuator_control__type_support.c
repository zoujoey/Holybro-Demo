// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mavros_msgs:msg/ActuatorControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mavros_msgs/msg/detail/actuator_control__rosidl_typesupport_introspection_c.h"
#include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mavros_msgs/msg/detail/actuator_control__functions.h"
#include "mavros_msgs/msg/detail/actuator_control__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActuatorControl__rosidl_typesupport_introspection_c__ActuatorControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mavros_msgs__msg__ActuatorControl__init(message_memory);
}

void ActuatorControl__rosidl_typesupport_introspection_c__ActuatorControl_fini_function(void * message_memory)
{
  mavros_msgs__msg__ActuatorControl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActuatorControl__rosidl_typesupport_introspection_c__ActuatorControl_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ActuatorControl, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "group_mix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ActuatorControl, group_mix),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "controls",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ActuatorControl, controls),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActuatorControl__rosidl_typesupport_introspection_c__ActuatorControl_message_members = {
  "mavros_msgs__msg",  // message namespace
  "ActuatorControl",  // message name
  3,  // number of fields
  sizeof(mavros_msgs__msg__ActuatorControl),
  ActuatorControl__rosidl_typesupport_introspection_c__ActuatorControl_message_member_array,  // message members
  ActuatorControl__rosidl_typesupport_introspection_c__ActuatorControl_init_function,  // function to initialize message memory (memory has to be allocated)
  ActuatorControl__rosidl_typesupport_introspection_c__ActuatorControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActuatorControl__rosidl_typesupport_introspection_c__ActuatorControl_message_type_support_handle = {
  0,
  &ActuatorControl__rosidl_typesupport_introspection_c__ActuatorControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, msg, ActuatorControl)() {
  ActuatorControl__rosidl_typesupport_introspection_c__ActuatorControl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ActuatorControl__rosidl_typesupport_introspection_c__ActuatorControl_message_type_support_handle.typesupport_identifier) {
    ActuatorControl__rosidl_typesupport_introspection_c__ActuatorControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActuatorControl__rosidl_typesupport_introspection_c__ActuatorControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
