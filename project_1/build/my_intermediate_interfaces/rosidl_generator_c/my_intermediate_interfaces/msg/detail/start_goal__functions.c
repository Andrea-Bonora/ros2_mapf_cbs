// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_intermediate_interfaces:msg/StartGoal.idl
// generated code does not contain a copyright notice
#include "my_intermediate_interfaces/msg/detail/start_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `start`
// Member `goal`
#include "my_intermediate_interfaces/msg/detail/coordinates3_d__functions.h"

bool
my_intermediate_interfaces__msg__StartGoal__init(my_intermediate_interfaces__msg__StartGoal * msg)
{
  if (!msg) {
    return false;
  }
  // start
  if (!my_intermediate_interfaces__msg__Coordinates3D__init(&msg->start)) {
    my_intermediate_interfaces__msg__StartGoal__fini(msg);
    return false;
  }
  // goal
  if (!my_intermediate_interfaces__msg__Coordinates3D__init(&msg->goal)) {
    my_intermediate_interfaces__msg__StartGoal__fini(msg);
    return false;
  }
  return true;
}

void
my_intermediate_interfaces__msg__StartGoal__fini(my_intermediate_interfaces__msg__StartGoal * msg)
{
  if (!msg) {
    return;
  }
  // start
  my_intermediate_interfaces__msg__Coordinates3D__fini(&msg->start);
  // goal
  my_intermediate_interfaces__msg__Coordinates3D__fini(&msg->goal);
}

bool
my_intermediate_interfaces__msg__StartGoal__are_equal(const my_intermediate_interfaces__msg__StartGoal * lhs, const my_intermediate_interfaces__msg__StartGoal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start
  if (!my_intermediate_interfaces__msg__Coordinates3D__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // goal
  if (!my_intermediate_interfaces__msg__Coordinates3D__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
my_intermediate_interfaces__msg__StartGoal__copy(
  const my_intermediate_interfaces__msg__StartGoal * input,
  my_intermediate_interfaces__msg__StartGoal * output)
{
  if (!input || !output) {
    return false;
  }
  // start
  if (!my_intermediate_interfaces__msg__Coordinates3D__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // goal
  if (!my_intermediate_interfaces__msg__Coordinates3D__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

my_intermediate_interfaces__msg__StartGoal *
my_intermediate_interfaces__msg__StartGoal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_intermediate_interfaces__msg__StartGoal * msg = (my_intermediate_interfaces__msg__StartGoal *)allocator.allocate(sizeof(my_intermediate_interfaces__msg__StartGoal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_intermediate_interfaces__msg__StartGoal));
  bool success = my_intermediate_interfaces__msg__StartGoal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_intermediate_interfaces__msg__StartGoal__destroy(my_intermediate_interfaces__msg__StartGoal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_intermediate_interfaces__msg__StartGoal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_intermediate_interfaces__msg__StartGoal__Sequence__init(my_intermediate_interfaces__msg__StartGoal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_intermediate_interfaces__msg__StartGoal * data = NULL;

  if (size) {
    data = (my_intermediate_interfaces__msg__StartGoal *)allocator.zero_allocate(size, sizeof(my_intermediate_interfaces__msg__StartGoal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_intermediate_interfaces__msg__StartGoal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_intermediate_interfaces__msg__StartGoal__fini(&data[i - 1]);
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
my_intermediate_interfaces__msg__StartGoal__Sequence__fini(my_intermediate_interfaces__msg__StartGoal__Sequence * array)
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
      my_intermediate_interfaces__msg__StartGoal__fini(&array->data[i]);
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

my_intermediate_interfaces__msg__StartGoal__Sequence *
my_intermediate_interfaces__msg__StartGoal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_intermediate_interfaces__msg__StartGoal__Sequence * array = (my_intermediate_interfaces__msg__StartGoal__Sequence *)allocator.allocate(sizeof(my_intermediate_interfaces__msg__StartGoal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_intermediate_interfaces__msg__StartGoal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_intermediate_interfaces__msg__StartGoal__Sequence__destroy(my_intermediate_interfaces__msg__StartGoal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_intermediate_interfaces__msg__StartGoal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_intermediate_interfaces__msg__StartGoal__Sequence__are_equal(const my_intermediate_interfaces__msg__StartGoal__Sequence * lhs, const my_intermediate_interfaces__msg__StartGoal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_intermediate_interfaces__msg__StartGoal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_intermediate_interfaces__msg__StartGoal__Sequence__copy(
  const my_intermediate_interfaces__msg__StartGoal__Sequence * input,
  my_intermediate_interfaces__msg__StartGoal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_intermediate_interfaces__msg__StartGoal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_intermediate_interfaces__msg__StartGoal * data =
      (my_intermediate_interfaces__msg__StartGoal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_intermediate_interfaces__msg__StartGoal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_intermediate_interfaces__msg__StartGoal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_intermediate_interfaces__msg__StartGoal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
