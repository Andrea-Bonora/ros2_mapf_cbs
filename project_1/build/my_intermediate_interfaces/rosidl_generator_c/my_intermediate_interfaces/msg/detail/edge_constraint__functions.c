// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_intermediate_interfaces:msg/EdgeConstraint.idl
// generated code does not contain a copyright notice
#include "my_intermediate_interfaces/msg/detail/edge_constraint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cell_from`
// Member `cell_to`
#include "my_intermediate_interfaces/msg/detail/coordinates3_d__functions.h"

bool
my_intermediate_interfaces__msg__EdgeConstraint__init(my_intermediate_interfaces__msg__EdgeConstraint * msg)
{
  if (!msg) {
    return false;
  }
  // cell_from
  if (!my_intermediate_interfaces__msg__Coordinates3D__init(&msg->cell_from)) {
    my_intermediate_interfaces__msg__EdgeConstraint__fini(msg);
    return false;
  }
  // cell_to
  if (!my_intermediate_interfaces__msg__Coordinates3D__init(&msg->cell_to)) {
    my_intermediate_interfaces__msg__EdgeConstraint__fini(msg);
    return false;
  }
  // time_step
  return true;
}

void
my_intermediate_interfaces__msg__EdgeConstraint__fini(my_intermediate_interfaces__msg__EdgeConstraint * msg)
{
  if (!msg) {
    return;
  }
  // cell_from
  my_intermediate_interfaces__msg__Coordinates3D__fini(&msg->cell_from);
  // cell_to
  my_intermediate_interfaces__msg__Coordinates3D__fini(&msg->cell_to);
  // time_step
}

bool
my_intermediate_interfaces__msg__EdgeConstraint__are_equal(const my_intermediate_interfaces__msg__EdgeConstraint * lhs, const my_intermediate_interfaces__msg__EdgeConstraint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cell_from
  if (!my_intermediate_interfaces__msg__Coordinates3D__are_equal(
      &(lhs->cell_from), &(rhs->cell_from)))
  {
    return false;
  }
  // cell_to
  if (!my_intermediate_interfaces__msg__Coordinates3D__are_equal(
      &(lhs->cell_to), &(rhs->cell_to)))
  {
    return false;
  }
  // time_step
  if (lhs->time_step != rhs->time_step) {
    return false;
  }
  return true;
}

bool
my_intermediate_interfaces__msg__EdgeConstraint__copy(
  const my_intermediate_interfaces__msg__EdgeConstraint * input,
  my_intermediate_interfaces__msg__EdgeConstraint * output)
{
  if (!input || !output) {
    return false;
  }
  // cell_from
  if (!my_intermediate_interfaces__msg__Coordinates3D__copy(
      &(input->cell_from), &(output->cell_from)))
  {
    return false;
  }
  // cell_to
  if (!my_intermediate_interfaces__msg__Coordinates3D__copy(
      &(input->cell_to), &(output->cell_to)))
  {
    return false;
  }
  // time_step
  output->time_step = input->time_step;
  return true;
}

my_intermediate_interfaces__msg__EdgeConstraint *
my_intermediate_interfaces__msg__EdgeConstraint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_intermediate_interfaces__msg__EdgeConstraint * msg = (my_intermediate_interfaces__msg__EdgeConstraint *)allocator.allocate(sizeof(my_intermediate_interfaces__msg__EdgeConstraint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_intermediate_interfaces__msg__EdgeConstraint));
  bool success = my_intermediate_interfaces__msg__EdgeConstraint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_intermediate_interfaces__msg__EdgeConstraint__destroy(my_intermediate_interfaces__msg__EdgeConstraint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_intermediate_interfaces__msg__EdgeConstraint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_intermediate_interfaces__msg__EdgeConstraint__Sequence__init(my_intermediate_interfaces__msg__EdgeConstraint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_intermediate_interfaces__msg__EdgeConstraint * data = NULL;

  if (size) {
    data = (my_intermediate_interfaces__msg__EdgeConstraint *)allocator.zero_allocate(size, sizeof(my_intermediate_interfaces__msg__EdgeConstraint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_intermediate_interfaces__msg__EdgeConstraint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_intermediate_interfaces__msg__EdgeConstraint__fini(&data[i - 1]);
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
my_intermediate_interfaces__msg__EdgeConstraint__Sequence__fini(my_intermediate_interfaces__msg__EdgeConstraint__Sequence * array)
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
      my_intermediate_interfaces__msg__EdgeConstraint__fini(&array->data[i]);
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

my_intermediate_interfaces__msg__EdgeConstraint__Sequence *
my_intermediate_interfaces__msg__EdgeConstraint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_intermediate_interfaces__msg__EdgeConstraint__Sequence * array = (my_intermediate_interfaces__msg__EdgeConstraint__Sequence *)allocator.allocate(sizeof(my_intermediate_interfaces__msg__EdgeConstraint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_intermediate_interfaces__msg__EdgeConstraint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_intermediate_interfaces__msg__EdgeConstraint__Sequence__destroy(my_intermediate_interfaces__msg__EdgeConstraint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_intermediate_interfaces__msg__EdgeConstraint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_intermediate_interfaces__msg__EdgeConstraint__Sequence__are_equal(const my_intermediate_interfaces__msg__EdgeConstraint__Sequence * lhs, const my_intermediate_interfaces__msg__EdgeConstraint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_intermediate_interfaces__msg__EdgeConstraint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_intermediate_interfaces__msg__EdgeConstraint__Sequence__copy(
  const my_intermediate_interfaces__msg__EdgeConstraint__Sequence * input,
  my_intermediate_interfaces__msg__EdgeConstraint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_intermediate_interfaces__msg__EdgeConstraint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_intermediate_interfaces__msg__EdgeConstraint * data =
      (my_intermediate_interfaces__msg__EdgeConstraint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_intermediate_interfaces__msg__EdgeConstraint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_intermediate_interfaces__msg__EdgeConstraint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_intermediate_interfaces__msg__EdgeConstraint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
