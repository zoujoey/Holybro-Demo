// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mavros_msgs:srv/WaypointPull.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mavros_msgs/srv/detail/waypoint_pull__rosidl_typesupport_introspection_c.h"
#include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mavros_msgs/srv/detail/waypoint_pull__functions.h"
#include "mavros_msgs/srv/detail/waypoint_pull__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void WaypointPull_Request__rosidl_typesupport_introspection_c__WaypointPull_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mavros_msgs__srv__WaypointPull_Request__init(message_memory);
}

void WaypointPull_Request__rosidl_typesupport_introspection_c__WaypointPull_Request_fini_function(void * message_memory)
{
  mavros_msgs__srv__WaypointPull_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WaypointPull_Request__rosidl_typesupport_introspection_c__WaypointPull_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__srv__WaypointPull_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WaypointPull_Request__rosidl_typesupport_introspection_c__WaypointPull_Request_message_members = {
  "mavros_msgs__srv",  // message namespace
  "WaypointPull_Request",  // message name
  1,  // number of fields
  sizeof(mavros_msgs__srv__WaypointPull_Request),
  WaypointPull_Request__rosidl_typesupport_introspection_c__WaypointPull_Request_message_member_array,  // message members
  WaypointPull_Request__rosidl_typesupport_introspection_c__WaypointPull_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointPull_Request__rosidl_typesupport_introspection_c__WaypointPull_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WaypointPull_Request__rosidl_typesupport_introspection_c__WaypointPull_Request_message_type_support_handle = {
  0,
  &WaypointPull_Request__rosidl_typesupport_introspection_c__WaypointPull_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, WaypointPull_Request)() {
  if (!WaypointPull_Request__rosidl_typesupport_introspection_c__WaypointPull_Request_message_type_support_handle.typesupport_identifier) {
    WaypointPull_Request__rosidl_typesupport_introspection_c__WaypointPull_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WaypointPull_Request__rosidl_typesupport_introspection_c__WaypointPull_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mavros_msgs/srv/detail/waypoint_pull__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mavros_msgs/srv/detail/waypoint_pull__functions.h"
// already included above
// #include "mavros_msgs/srv/detail/waypoint_pull__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void WaypointPull_Response__rosidl_typesupport_introspection_c__WaypointPull_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mavros_msgs__srv__WaypointPull_Response__init(message_memory);
}

void WaypointPull_Response__rosidl_typesupport_introspection_c__WaypointPull_Response_fini_function(void * message_memory)
{
  mavros_msgs__srv__WaypointPull_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WaypointPull_Response__rosidl_typesupport_introspection_c__WaypointPull_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__srv__WaypointPull_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wp_received",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__srv__WaypointPull_Response, wp_received),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WaypointPull_Response__rosidl_typesupport_introspection_c__WaypointPull_Response_message_members = {
  "mavros_msgs__srv",  // message namespace
  "WaypointPull_Response",  // message name
  2,  // number of fields
  sizeof(mavros_msgs__srv__WaypointPull_Response),
  WaypointPull_Response__rosidl_typesupport_introspection_c__WaypointPull_Response_message_member_array,  // message members
  WaypointPull_Response__rosidl_typesupport_introspection_c__WaypointPull_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointPull_Response__rosidl_typesupport_introspection_c__WaypointPull_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WaypointPull_Response__rosidl_typesupport_introspection_c__WaypointPull_Response_message_type_support_handle = {
  0,
  &WaypointPull_Response__rosidl_typesupport_introspection_c__WaypointPull_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, WaypointPull_Response)() {
  if (!WaypointPull_Response__rosidl_typesupport_introspection_c__WaypointPull_Response_message_type_support_handle.typesupport_identifier) {
    WaypointPull_Response__rosidl_typesupport_introspection_c__WaypointPull_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WaypointPull_Response__rosidl_typesupport_introspection_c__WaypointPull_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mavros_msgs/srv/detail/waypoint_pull__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mavros_msgs__srv__detail__waypoint_pull__rosidl_typesupport_introspection_c__WaypointPull_service_members = {
  "mavros_msgs__srv",  // service namespace
  "WaypointPull",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mavros_msgs__srv__detail__waypoint_pull__rosidl_typesupport_introspection_c__WaypointPull_Request_message_type_support_handle,
  NULL  // response message
  // mavros_msgs__srv__detail__waypoint_pull__rosidl_typesupport_introspection_c__WaypointPull_Response_message_type_support_handle
};

static rosidl_service_type_support_t mavros_msgs__srv__detail__waypoint_pull__rosidl_typesupport_introspection_c__WaypointPull_service_type_support_handle = {
  0,
  &mavros_msgs__srv__detail__waypoint_pull__rosidl_typesupport_introspection_c__WaypointPull_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, WaypointPull_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, WaypointPull_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, WaypointPull)() {
  if (!mavros_msgs__srv__detail__waypoint_pull__rosidl_typesupport_introspection_c__WaypointPull_service_type_support_handle.typesupport_identifier) {
    mavros_msgs__srv__detail__waypoint_pull__rosidl_typesupport_introspection_c__WaypointPull_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mavros_msgs__srv__detail__waypoint_pull__rosidl_typesupport_introspection_c__WaypointPull_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, WaypointPull_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, WaypointPull_Response)()->data;
  }

  return &mavros_msgs__srv__detail__waypoint_pull__rosidl_typesupport_introspection_c__WaypointPull_service_type_support_handle;
}
