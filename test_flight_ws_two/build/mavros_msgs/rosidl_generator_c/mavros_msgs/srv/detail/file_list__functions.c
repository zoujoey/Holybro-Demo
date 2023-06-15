// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:srv/FileList.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/srv/detail/file_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `dir_path`
#include "rosidl_runtime_c/string_functions.h"

bool
mavros_msgs__srv__FileList_Request__init(mavros_msgs__srv__FileList_Request * msg)
{
  if (!msg) {
    return false;
  }
  // dir_path
  if (!rosidl_runtime_c__String__init(&msg->dir_path)) {
    mavros_msgs__srv__FileList_Request__fini(msg);
    return false;
  }
  return true;
}

void
mavros_msgs__srv__FileList_Request__fini(mavros_msgs__srv__FileList_Request * msg)
{
  if (!msg) {
    return;
  }
  // dir_path
  rosidl_runtime_c__String__fini(&msg->dir_path);
}

bool
mavros_msgs__srv__FileList_Request__are_equal(const mavros_msgs__srv__FileList_Request * lhs, const mavros_msgs__srv__FileList_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dir_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->dir_path), &(rhs->dir_path)))
  {
    return false;
  }
  return true;
}

bool
mavros_msgs__srv__FileList_Request__copy(
  const mavros_msgs__srv__FileList_Request * input,
  mavros_msgs__srv__FileList_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // dir_path
  if (!rosidl_runtime_c__String__copy(
      &(input->dir_path), &(output->dir_path)))
  {
    return false;
  }
  return true;
}

mavros_msgs__srv__FileList_Request *
mavros_msgs__srv__FileList_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__FileList_Request * msg = (mavros_msgs__srv__FileList_Request *)allocator.allocate(sizeof(mavros_msgs__srv__FileList_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__srv__FileList_Request));
  bool success = mavros_msgs__srv__FileList_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__srv__FileList_Request__destroy(mavros_msgs__srv__FileList_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mavros_msgs__srv__FileList_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mavros_msgs__srv__FileList_Request__Sequence__init(mavros_msgs__srv__FileList_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__FileList_Request * data = NULL;

  if (size) {
    data = (mavros_msgs__srv__FileList_Request *)allocator.zero_allocate(size, sizeof(mavros_msgs__srv__FileList_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__srv__FileList_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__srv__FileList_Request__fini(&data[i - 1]);
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
mavros_msgs__srv__FileList_Request__Sequence__fini(mavros_msgs__srv__FileList_Request__Sequence * array)
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
      mavros_msgs__srv__FileList_Request__fini(&array->data[i]);
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

mavros_msgs__srv__FileList_Request__Sequence *
mavros_msgs__srv__FileList_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__FileList_Request__Sequence * array = (mavros_msgs__srv__FileList_Request__Sequence *)allocator.allocate(sizeof(mavros_msgs__srv__FileList_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__srv__FileList_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mavros_msgs__srv__FileList_Request__Sequence__destroy(mavros_msgs__srv__FileList_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mavros_msgs__srv__FileList_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mavros_msgs__srv__FileList_Request__Sequence__are_equal(const mavros_msgs__srv__FileList_Request__Sequence * lhs, const mavros_msgs__srv__FileList_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mavros_msgs__srv__FileList_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mavros_msgs__srv__FileList_Request__Sequence__copy(
  const mavros_msgs__srv__FileList_Request__Sequence * input,
  mavros_msgs__srv__FileList_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mavros_msgs__srv__FileList_Request);
    mavros_msgs__srv__FileList_Request * data =
      (mavros_msgs__srv__FileList_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mavros_msgs__srv__FileList_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mavros_msgs__srv__FileList_Request__fini(&data[i]);
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
    if (!mavros_msgs__srv__FileList_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `list`
#include "mavros_msgs/msg/detail/file_entry__functions.h"

bool
mavros_msgs__srv__FileList_Response__init(mavros_msgs__srv__FileList_Response * msg)
{
  if (!msg) {
    return false;
  }
  // list
  if (!mavros_msgs__msg__FileEntry__Sequence__init(&msg->list, 0)) {
    mavros_msgs__srv__FileList_Response__fini(msg);
    return false;
  }
  // success
  // r_errno
  return true;
}

void
mavros_msgs__srv__FileList_Response__fini(mavros_msgs__srv__FileList_Response * msg)
{
  if (!msg) {
    return;
  }
  // list
  mavros_msgs__msg__FileEntry__Sequence__fini(&msg->list);
  // success
  // r_errno
}

bool
mavros_msgs__srv__FileList_Response__are_equal(const mavros_msgs__srv__FileList_Response * lhs, const mavros_msgs__srv__FileList_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // list
  if (!mavros_msgs__msg__FileEntry__Sequence__are_equal(
      &(lhs->list), &(rhs->list)))
  {
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
mavros_msgs__srv__FileList_Response__copy(
  const mavros_msgs__srv__FileList_Response * input,
  mavros_msgs__srv__FileList_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // list
  if (!mavros_msgs__msg__FileEntry__Sequence__copy(
      &(input->list), &(output->list)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // r_errno
  output->r_errno = input->r_errno;
  return true;
}

mavros_msgs__srv__FileList_Response *
mavros_msgs__srv__FileList_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__FileList_Response * msg = (mavros_msgs__srv__FileList_Response *)allocator.allocate(sizeof(mavros_msgs__srv__FileList_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__srv__FileList_Response));
  bool success = mavros_msgs__srv__FileList_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__srv__FileList_Response__destroy(mavros_msgs__srv__FileList_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mavros_msgs__srv__FileList_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mavros_msgs__srv__FileList_Response__Sequence__init(mavros_msgs__srv__FileList_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__FileList_Response * data = NULL;

  if (size) {
    data = (mavros_msgs__srv__FileList_Response *)allocator.zero_allocate(size, sizeof(mavros_msgs__srv__FileList_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__srv__FileList_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__srv__FileList_Response__fini(&data[i - 1]);
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
mavros_msgs__srv__FileList_Response__Sequence__fini(mavros_msgs__srv__FileList_Response__Sequence * array)
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
      mavros_msgs__srv__FileList_Response__fini(&array->data[i]);
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

mavros_msgs__srv__FileList_Response__Sequence *
mavros_msgs__srv__FileList_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__srv__FileList_Response__Sequence * array = (mavros_msgs__srv__FileList_Response__Sequence *)allocator.allocate(sizeof(mavros_msgs__srv__FileList_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__srv__FileList_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mavros_msgs__srv__FileList_Response__Sequence__destroy(mavros_msgs__srv__FileList_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mavros_msgs__srv__FileList_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mavros_msgs__srv__FileList_Response__Sequence__are_equal(const mavros_msgs__srv__FileList_Response__Sequence * lhs, const mavros_msgs__srv__FileList_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mavros_msgs__srv__FileList_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mavros_msgs__srv__FileList_Response__Sequence__copy(
  const mavros_msgs__srv__FileList_Response__Sequence * input,
  mavros_msgs__srv__FileList_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mavros_msgs__srv__FileList_Response);
    mavros_msgs__srv__FileList_Response * data =
      (mavros_msgs__srv__FileList_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mavros_msgs__srv__FileList_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mavros_msgs__srv__FileList_Response__fini(&data[i]);
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
    if (!mavros_msgs__srv__FileList_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
