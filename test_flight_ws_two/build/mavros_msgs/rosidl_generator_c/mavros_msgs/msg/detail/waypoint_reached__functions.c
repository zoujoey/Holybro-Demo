// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/WaypointReached.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/waypoint_reached__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mavros_msgs__msg__WaypointReached__init(mavros_msgs__msg__WaypointReached * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__WaypointReached__fini(msg);
    return false;
  }
  // wp_seq
  return true;
}

void
mavros_msgs__msg__WaypointReached__fini(mavros_msgs__msg__WaypointReached * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // wp_seq
}

bool
mavros_msgs__msg__WaypointReached__are_equal(const mavros_msgs__msg__WaypointReached * lhs, const mavros_msgs__msg__WaypointReached * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // wp_seq
  if (lhs->wp_seq != rhs->wp_seq) {
    return false;
  }
  return true;
}

bool
mavros_msgs__msg__WaypointReached__copy(
  const mavros_msgs__msg__WaypointReached * input,
  mavros_msgs__msg__WaypointReached * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // wp_seq
  output->wp_seq = input->wp_seq;
  return true;
}

mavros_msgs__msg__WaypointReached *
mavros_msgs__msg__WaypointReached__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__msg__WaypointReached * msg = (mavros_msgs__msg__WaypointReached *)allocator.allocate(sizeof(mavros_msgs__msg__WaypointReached), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__WaypointReached));
  bool success = mavros_msgs__msg__WaypointReached__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__WaypointReached__destroy(mavros_msgs__msg__WaypointReached * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mavros_msgs__msg__WaypointReached__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mavros_msgs__msg__WaypointReached__Sequence__init(mavros_msgs__msg__WaypointReached__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__msg__WaypointReached * data = NULL;

  if (size) {
    data = (mavros_msgs__msg__WaypointReached *)allocator.zero_allocate(size, sizeof(mavros_msgs__msg__WaypointReached), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__WaypointReached__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__WaypointReached__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mavros_msgs__msg__WaypointReached__Sequence__fini(mavros_msgs__msg__WaypointReached__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__WaypointReached__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mavros_msgs__msg__WaypointReached__Sequence *
mavros_msgs__msg__WaypointReached__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__msg__WaypointReached__Sequence * array = (mavros_msgs__msg__WaypointReached__Sequence *)allocator.allocate(sizeof(mavros_msgs__msg__WaypointReached__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__WaypointReached__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__WaypointReached__Sequence__destroy(mavros_msgs__msg__WaypointReached__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mavros_msgs__msg__WaypointReached__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mavros_msgs__msg__WaypointReached__Sequence__are_equal(const mavros_msgs__msg__WaypointReached__Sequence * lhs, const mavros_msgs__msg__WaypointReached__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mavros_msgs__msg__WaypointReached__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mavros_msgs__msg__WaypointReached__Sequence__copy(
  const mavros_msgs__msg__WaypointReached__Sequence * input,
  mavros_msgs__msg__WaypointReached__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mavros_msgs__msg__WaypointReached);
    mavros_msgs__msg__WaypointReached * data =
      (mavros_msgs__msg__WaypointReached *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mavros_msgs__msg__WaypointReached__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mavros_msgs__msg__WaypointReached__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mavros_msgs__msg__WaypointReached__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
