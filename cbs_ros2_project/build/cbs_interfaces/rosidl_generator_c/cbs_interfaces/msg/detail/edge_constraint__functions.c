// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cbs_interfaces:msg/EdgeConstraint.idl
// generated code does not contain a copyright notice
#include "cbs_interfaces/msg/detail/edge_constraint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
cbs_interfaces__msg__EdgeConstraint__init(cbs_interfaces__msg__EdgeConstraint * msg)
{
  if (!msg) {
    return false;
  }
  // cell_from_index
  // cell_to_index
  // time_step
  return true;
}

void
cbs_interfaces__msg__EdgeConstraint__fini(cbs_interfaces__msg__EdgeConstraint * msg)
{
  if (!msg) {
    return;
  }
  // cell_from_index
  // cell_to_index
  // time_step
}

bool
cbs_interfaces__msg__EdgeConstraint__are_equal(const cbs_interfaces__msg__EdgeConstraint * lhs, const cbs_interfaces__msg__EdgeConstraint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cell_from_index
  if (lhs->cell_from_index != rhs->cell_from_index) {
    return false;
  }
  // cell_to_index
  if (lhs->cell_to_index != rhs->cell_to_index) {
    return false;
  }
  // time_step
  if (lhs->time_step != rhs->time_step) {
    return false;
  }
  return true;
}

bool
cbs_interfaces__msg__EdgeConstraint__copy(
  const cbs_interfaces__msg__EdgeConstraint * input,
  cbs_interfaces__msg__EdgeConstraint * output)
{
  if (!input || !output) {
    return false;
  }
  // cell_from_index
  output->cell_from_index = input->cell_from_index;
  // cell_to_index
  output->cell_to_index = input->cell_to_index;
  // time_step
  output->time_step = input->time_step;
  return true;
}

cbs_interfaces__msg__EdgeConstraint *
cbs_interfaces__msg__EdgeConstraint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__msg__EdgeConstraint * msg = (cbs_interfaces__msg__EdgeConstraint *)allocator.allocate(sizeof(cbs_interfaces__msg__EdgeConstraint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cbs_interfaces__msg__EdgeConstraint));
  bool success = cbs_interfaces__msg__EdgeConstraint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cbs_interfaces__msg__EdgeConstraint__destroy(cbs_interfaces__msg__EdgeConstraint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cbs_interfaces__msg__EdgeConstraint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cbs_interfaces__msg__EdgeConstraint__Sequence__init(cbs_interfaces__msg__EdgeConstraint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__msg__EdgeConstraint * data = NULL;

  if (size) {
    data = (cbs_interfaces__msg__EdgeConstraint *)allocator.zero_allocate(size, sizeof(cbs_interfaces__msg__EdgeConstraint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cbs_interfaces__msg__EdgeConstraint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cbs_interfaces__msg__EdgeConstraint__fini(&data[i - 1]);
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
cbs_interfaces__msg__EdgeConstraint__Sequence__fini(cbs_interfaces__msg__EdgeConstraint__Sequence * array)
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
      cbs_interfaces__msg__EdgeConstraint__fini(&array->data[i]);
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

cbs_interfaces__msg__EdgeConstraint__Sequence *
cbs_interfaces__msg__EdgeConstraint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__msg__EdgeConstraint__Sequence * array = (cbs_interfaces__msg__EdgeConstraint__Sequence *)allocator.allocate(sizeof(cbs_interfaces__msg__EdgeConstraint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cbs_interfaces__msg__EdgeConstraint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cbs_interfaces__msg__EdgeConstraint__Sequence__destroy(cbs_interfaces__msg__EdgeConstraint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cbs_interfaces__msg__EdgeConstraint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cbs_interfaces__msg__EdgeConstraint__Sequence__are_equal(const cbs_interfaces__msg__EdgeConstraint__Sequence * lhs, const cbs_interfaces__msg__EdgeConstraint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cbs_interfaces__msg__EdgeConstraint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cbs_interfaces__msg__EdgeConstraint__Sequence__copy(
  const cbs_interfaces__msg__EdgeConstraint__Sequence * input,
  cbs_interfaces__msg__EdgeConstraint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cbs_interfaces__msg__EdgeConstraint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cbs_interfaces__msg__EdgeConstraint * data =
      (cbs_interfaces__msg__EdgeConstraint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cbs_interfaces__msg__EdgeConstraint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cbs_interfaces__msg__EdgeConstraint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cbs_interfaces__msg__EdgeConstraint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
