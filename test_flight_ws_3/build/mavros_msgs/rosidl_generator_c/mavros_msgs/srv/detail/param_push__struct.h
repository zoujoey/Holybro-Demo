// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:srv/ParamPush.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__SRV__DETAIL__PARAM_PUSH__STRUCT_H_
#define MAVROS_MSGS__SRV__DETAIL__PARAM_PUSH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ParamPush in the package mavros_msgs.
typedef struct mavros_msgs__srv__ParamPush_Request
{
  uint8_t structure_needs_at_least_one_member;
} mavros_msgs__srv__ParamPush_Request;

// Struct for a sequence of mavros_msgs__srv__ParamPush_Request.
typedef struct mavros_msgs__srv__ParamPush_Request__Sequence
{
  mavros_msgs__srv__ParamPush_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__srv__ParamPush_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ParamPush in the package mavros_msgs.
typedef struct mavros_msgs__srv__ParamPush_Response
{
  bool success;
  uint32_t param_transfered;
} mavros_msgs__srv__ParamPush_Response;

// Struct for a sequence of mavros_msgs__srv__ParamPush_Response.
typedef struct mavros_msgs__srv__ParamPush_Response__Sequence
{
  mavros_msgs__srv__ParamPush_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__srv__ParamPush_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__SRV__DETAIL__PARAM_PUSH__STRUCT_H_
