// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:srv/FileChecksum.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/srv/detail/file_checksum__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `file_path`
#include "rosidl_runtime_c/string_functions.h"

bool
mavros_msgs__srv__FileChecksum_Request__init(mavros_msgs__srv__FileChecksum_Request * msg)
{
  if (!msg) {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__init(&msg->file_path)) {
    mavros_msgs__srv__FileChecksum_Request__fini(msg);
    return false;
  }
  return true;
}

void
mavros_msgs__srv__FileChecksum_Request__fini(mavros_msgs__srv__FileChecksum_Request * msg)
{
  if (!msg) {
    return;
  }
  // file_path
  rosidl_runtime_c__String__fini(&msg->file_path);
}

bool
mavros_msgs__srv__FileChecksum_Request__are_equal(const mavros_msgs__srv__FileChecksum_Request * lhs, const mavros_msgs__srv__FileChecksum_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->file_path), &(rhs->file_path)))
  {
    return false;
  }
  return true;
}

bool
mavros_msgs__srv__FileChecksum_Request__copy(
  const mavros_msgs__srv__FileChecksum_Request * input,
  mavros_msgs__srv__FileChecksum_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__copy(
      &(input->file_path), &(output->file_path)))
  {
    return false;
  }
  return true;
}

mavros_msgs__srv__FileChecksum_Request *
mavros_msgs__srv__FileChecksum_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__FileChecksum_Request * msg = (mavros_msgs__srv__FileChecksum_Request *)allocator.allocate(sizeof(mavros_msgs__srv__FileChecksum_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__srv__FileChecksum_Request));
  bool success = mavros_msgs__srv__FileChecksum_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__srv__FileChecksum_Request__destroy(mavros_msgs__srv__FileChecksum_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mavros_msgs__srv__FileChecksum_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mavros_msgs__srv__FileChecksum_Request__Sequence__init(mavros_msgs__srv__FileChecksum_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__FileChecksum_Request * data = NULL;

  if (size) {
    data = (mavros_msgs__srv__FileChecksum_Request *)allocator.zero_allocate(size, sizeof(mavros_msgs__srv__FileChecksum_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__srv__FileChecksum_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__srv__FileChecksum_Request__fini(&data[i - 1]);
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
mavros_msgs__srv__FileChecksum_Request__Sequence__fini(mavros_msgs__srv__FileChecksum_Request__Sequence * array)
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
      mavros_msgs__srv__FileChecksum_Request__fini(&array->data[i]);
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

mavros_msgs__srv__FileChecksum_Request__Sequence *
mavros_msgs__srv__FileChecksum_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__FileChecksum_Request__Sequence * array = (mavros_msgs__srv__FileChecksum_Request__Sequence *)allocator.allocate(sizeof(mavros_msgs__srv__FileChecksum_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__srv__FileChecksum_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mavros_msgs__srv__FileChecksum_Request__Sequence__destroy(mavros_msgs__srv__FileChecksum_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mavros_msgs__srv__FileChecksum_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mavros_msgs__srv__FileChecksum_Request__Sequence__are_equal(const mavros_msgs__srv__FileChecksum_Request__Sequence * lhs, const mavros_msgs__srv__FileChecksum_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mavros_msgs__srv__FileChecksum_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mavros_msgs__srv__FileChecksum_Request__Sequence__copy(
  const mavros_msgs__srv__FileChecksum_Request__Sequence * input,
  mavros_msgs__srv__FileChecksum_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mavros_msgs__srv__FileChecksum_Request);
    mavros_msgs__srv__FileChecksum_Request * data =
      (mavros_msgs__srv__FileChecksum_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mavros_msgs__srv__FileChecksum_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mavros_msgs__srv__FileChecksum_Request__fini(&data[i]);
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
    if (!mavros_msgs__srv__FileChecksum_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mavros_msgs__srv__FileChecksum_Response__init(mavros_msgs__srv__FileChecksum_Response * msg)
{
  if (!msg) {
    return false;
  }
  // crc32
  // success
  // r_errno
  return true;
}

void
mavros_msgs__srv__FileChecksum_Response__fini(mavros_msgs__srv__FileChecksum_Response * msg)
{
  if (!msg) {
    return;
  }
  // crc32
  // success
  // r_errno
}

bool
mavros_msgs__srv__FileChecksum_Response__are_equal(const mavros_msgs__srv__FileChecksum_Response * lhs, const mavros_msgs__srv__FileChecksum_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // crc32
  if (lhs->crc32 != rhs->crc32) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // r_errno
  if (lhs->r_errno != rhs->r_errno) {
    return false;
  }
  return true;
}

bool
mavros_msgs__srv__FileChecksum_Response__copy(
  const mavros_msgs__srv__FileChecksum_Response * input,
  mavros_msgs__srv__FileChecksum_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // crc32
  output->crc32 = input->crc32;
  // success
  output->success = input->success;
  // r_errno
  output->r_errno = input->r_errno;
  return true;
}

mavros_msgs__srv__FileChecksum_Response *
mavros_msgs__srv__FileChecksum_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__FileChecksum_Response * msg = (mavros_msgs__srv__FileChecksum_Response *)allocator.allocate(sizeof(mavros_msgs__srv__FileChecksum_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__srv__FileChecksum_Response));
  bool success = mavros_msgs__srv__FileChecksum_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__srv__FileChecksum_Response__destroy(mavros_msgs__srv__FileChecksum_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mavros_msgs__srv__FileChecksum_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mavros_msgs__srv__FileChecksum_Response__Sequence__init(mavros_msgs__srv__FileChecksum_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__FileChecksum_Response * data = NULL;

  if (size) {
    data = (mavros_msgs__srv__FileChecksum_Response *)allocator.zero_allocate(size, sizeof(mavros_msgs__srv__FileChecksum_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__srv__FileChecksum_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__srv__FileChecksum_Response__fini(&data[i - 1]);
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
mavros_msgs__srv__FileChecksum_Response__Sequence__fini(mavros_msgs__srv__FileChecksum_Response__Sequence * array)
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
      mavros_msgs__srv__FileChecksum_Response__fini(&array->data[i]);
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

mavros_msgs__srv__FileChecksum_Response__Sequence *
mavros_msgs__srv__FileChecksum_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__FileChecksum_Response__Sequence * array = (mavros_msgs__srv__FileChecksum_Response__Sequence *)allocator.allocate(sizeof(mavros_msgs__srv__FileChecksum_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__srv__FileChecksum_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mavros_msgs__srv__FileChecksum_Response__Sequence__destroy(mavros_msgs__srv__FileChecksum_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mavros_msgs__srv__FileChecksum_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mavros_msgs__srv__FileChecksum_Response__Sequence__are_equal(const mavros_msgs__srv__FileChecksum_Response__Sequence * lhs, const mavros_msgs__srv__FileChecksum_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mavros_msgs__srv__FileChecksum_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mavros_msgs__srv__FileChecksum_Response__Sequence__copy(
  const mavros_msgs__srv__FileChecksum_Response__Sequence * input,
  mavros_msgs__srv__FileChecksum_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mavros_msgs__srv__FileChecksum_Response);
    mavros_msgs__srv__FileChecksum_Response * data =
      (mavros_msgs__srv__FileChecksum_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mavros_msgs__srv__FileChecksum_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mavros_msgs__srv__FileChecksum_Response__fini(&data[i]);
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
    if (!mavros_msgs__srv__FileChecksum_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
