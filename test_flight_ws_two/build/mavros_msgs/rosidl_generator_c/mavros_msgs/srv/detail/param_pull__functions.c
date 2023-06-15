// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:srv/ParamPull.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/srv/detail/param_pull__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
mavros_msgs__srv__ParamPull_Request__init(mavros_msgs__srv__ParamPull_Request * msg)
{
  if (!msg) {
    return false;
  }
  // force_pull
  return true;
}

void
mavros_msgs__srv__ParamPull_Request__fini(mavros_msgs__srv__ParamPull_Request * msg)
{
  if (!msg) {
    return;
  }
  // force_pull
}

bool
mavros_msgs__srv__ParamPull_Request__are_equal(const mavros_msgs__srv__ParamPull_Request * lhs, const mavros_msgs__srv__ParamPull_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // force_pull
  if (lhs->force_pull != rhs->force_pull) {
    return false;
  }
  return true;
}

bool
mavros_msgs__srv__ParamPull_Request__copy(
  const mavros_msgs__srv__ParamPull_Request * input,
  mavros_msgs__srv__ParamPull_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // force_pull
  output->force_pull = input->force_pull;
  return true;
}

mavros_msgs__srv__ParamPull_Request *
mavros_msgs__srv__ParamPull_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__ParamPull_Request * msg = (mavros_msgs__srv__ParamPull_Request *)allocator.allocate(sizeof(mavros_msgs__srv__ParamPull_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__srv__ParamPull_Request));
  bool success = mavros_msgs__srv__ParamPull_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__srv__ParamPull_Request__destroy(mavros_msgs__srv__ParamPull_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mavros_msgs__srv__ParamPull_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mavros_msgs__srv__ParamPull_Request__Sequence__init(mavros_msgs__srv__ParamPull_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__ParamPull_Request * data = NULL;

  if (size) {
    data = (mavros_msgs__srv__ParamPull_Request *)allocator.zero_allocate(size, sizeof(mavros_msgs__srv__ParamPull_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__srv__ParamPull_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__srv__ParamPull_Request__fini(&data[i - 1]);
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
mavros_msgs__srv__ParamPull_Request__Sequence__fini(mavros_msgs__srv__ParamPull_Request__Sequence * array)
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
      mavros_msgs__srv__ParamPull_Request__fini(&array->data[i]);
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

mavros_msgs__srv__ParamPull_Request__Sequence *
mavros_msgs__srv__ParamPull_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__ParamPull_Request__Sequence * array = (mavros_msgs__srv__ParamPull_Request__Sequence *)allocator.allocate(sizeof(mavros_msgs__srv__ParamPull_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__srv__ParamPull_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mavros_msgs__srv__ParamPull_Request__Sequence__destroy(mavros_msgs__srv__ParamPull_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mavros_msgs__srv__ParamPull_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mavros_msgs__srv__ParamPull_Request__Sequence__are_equal(const mavros_msgs__srv__ParamPull_Request__Sequence * lhs, const mavros_msgs__srv__ParamPull_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mavros_msgs__srv__ParamPull_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mavros_msgs__srv__ParamPull_Request__Sequence__copy(
  const mavros_msgs__srv__ParamPull_Request__Sequence * input,
  mavros_msgs__srv__ParamPull_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mavros_msgs__srv__ParamPull_Request);
    mavros_msgs__srv__ParamPull_Request * data =
      (mavros_msgs__srv__ParamPull_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mavros_msgs__srv__ParamPull_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mavros_msgs__srv__ParamPull_Request__fini(&data[i]);
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
    if (!mavros_msgs__srv__ParamPull_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mavros_msgs__srv__ParamPull_Response__init(mavros_msgs__srv__ParamPull_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // param_received
  return true;
}

void
mavros_msgs__srv__ParamPull_Response__fini(mavros_msgs__srv__ParamPull_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // param_received
}

bool
mavros_msgs__srv__ParamPull_Response__are_equal(const mavros_msgs__srv__ParamPull_Response * lhs, const mavros_msgs__srv__ParamPull_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // param_received
  if (lhs->param_received != rhs->param_received) {
    return false;
  }
  return true;
}

bool
mavros_msgs__srv__ParamPull_Response__copy(
  const mavros_msgs__srv__ParamPull_Response * input,
  mavros_msgs__srv__ParamPull_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // param_received
  output->param_received = input->param_received;
  return true;
}

mavros_msgs__srv__ParamPull_Response *
mavros_msgs__srv__ParamPull_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__ParamPull_Response * msg = (mavros_msgs__srv__ParamPull_Response *)allocator.allocate(sizeof(mavros_msgs__srv__ParamPull_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__srv__ParamPull_Response));
  bool success = mavros_msgs__srv__ParamPull_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__srv__ParamPull_Response__destroy(mavros_msgs__srv__ParamPull_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mavros_msgs__srv__ParamPull_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mavros_msgs__srv__ParamPull_Response__Sequence__init(mavros_msgs__srv__ParamPull_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__ParamPull_Response * data = NULL;

  if (size) {
    data = (mavros_msgs__srv__ParamPull_Response *)allocator.zero_allocate(size, sizeof(mavros_msgs__srv__ParamPull_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__srv__ParamPull_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__srv__ParamPull_Response__fini(&data[i - 1]);
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
mavros_msgs__srv__ParamPull_Response__Sequence__fini(mavros_msgs__srv__ParamPull_Response__Sequence * array)
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
      mavros_msgs__srv__ParamPull_Response__fini(&array->data[i]);
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

mavros_msgs__srv__ParamPull_Response__Sequence *
mavros_msgs__srv__ParamPull_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__ParamPull_Response__Sequence * array = (mavros_msgs__srv__ParamPull_Response__Sequence *)allocator.allocate(sizeof(mavros_msgs__srv__ParamPull_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__srv__ParamPull_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mavros_msgs__srv__ParamPull_Response__Sequence__destroy(mavros_msgs__srv__ParamPull_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mavros_msgs__srv__ParamPull_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mavros_msgs__srv__ParamPull_Response__Sequence__are_equal(const mavros_msgs__srv__ParamPull_Response__Sequence * lhs, const mavros_msgs__srv__ParamPull_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mavros_msgs__srv__ParamPull_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mavros_msgs__srv__ParamPull_Response__Sequence__copy(
  const mavros_msgs__srv__ParamPull_Response__Sequence * input,
  mavros_msgs__srv__ParamPull_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mavros_msgs__srv__ParamPull_Response);
    mavros_msgs__srv__ParamPull_Response * data =
      (mavros_msgs__srv__ParamPull_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mavros_msgs__srv__ParamPull_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mavros_msgs__srv__ParamPull_Response__fini(&data[i]);
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
    if (!mavros_msgs__srv__ParamPull_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
