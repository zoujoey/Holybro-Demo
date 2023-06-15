// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/CommandCode.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/command_code__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mavros_msgs__msg__CommandCode__init(mavros_msgs__msg__CommandCode * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
mavros_msgs__msg__CommandCode__fini(mavros_msgs__msg__CommandCode * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
mavros_msgs__msg__CommandCode__are_equal(const mavros_msgs__msg__CommandCode * lhs, const mavros_msgs__msg__CommandCode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
mavros_msgs__msg__CommandCode__copy(
  const mavros_msgs__msg__CommandCode * input,
  mavros_msgs__msg__CommandCode * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

mavros_msgs__msg__CommandCode *
mavros_msgs__msg__CommandCode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__msg__CommandCode * msg = (mavros_msgs__msg__CommandCode *)allocator.allocate(sizeof(mavros_msgs__msg__CommandCode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__CommandCode));
  bool success = mavros_msgs__msg__CommandCode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__CommandCode__destroy(mavros_msgs__msg__CommandCode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mavros_msgs__msg__CommandCode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mavros_msgs__msg__CommandCode__Sequence__init(mavros_msgs__msg__CommandCode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__msg__CommandCode * data = NULL;

  if (size) {
    data = (mavros_msgs__msg__CommandCode *)allocator.zero_allocate(size, sizeof(mavros_msgs__msg__CommandCode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__CommandCode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__CommandCode__fini(&data[i - 1]);
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
mavros_msgs__msg__CommandCode__Sequence__fini(mavros_msgs__msg__CommandCode__Sequence * array)
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
      mavros_msgs__msg__CommandCode__fini(&array->data[i]);
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

mavros_msgs__msg__CommandCode__Sequence *
mavros_msgs__msg__CommandCode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__msg__CommandCode__Sequence * array = (mavros_msgs__msg__CommandCode__Sequence *)allocator.allocate(sizeof(mavros_msgs__msg__CommandCode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__CommandCode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__CommandCode__Sequence__destroy(mavros_msgs__msg__CommandCode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mavros_msgs__msg__CommandCode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mavros_msgs__msg__CommandCode__Sequence__are_equal(const mavros_msgs__msg__CommandCode__Sequence * lhs, const mavros_msgs__msg__CommandCode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mavros_msgs__msg__CommandCode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mavros_msgs__msg__CommandCode__Sequence__copy(
  const mavros_msgs__msg__CommandCode__Sequence * input,
  mavros_msgs__msg__CommandCode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mavros_msgs__msg__CommandCode);
    mavros_msgs__msg__CommandCode * data =
      (mavros_msgs__msg__CommandCode *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mavros_msgs__msg__CommandCode__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mavros_msgs__msg__CommandCode__fini(&data[i]);
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
    if (!mavros_msgs__msg__CommandCode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
