// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_intermediate_interfaces:msg/VertexConstraint.idl
// generated code does not contain a copyright notice
#include "my_intermediate_interfaces/msg/detail/vertex_constraint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cell`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
my_intermediate_interfaces__msg__VertexConstraint__init(my_intermediate_interfaces__msg__VertexConstraint * msg)
{
  if (!msg) {
    return false;
  }
  // cell
  if (!geometry_msgs__msg__PoseStamped__init(&msg->cell)) {
    my_intermediate_interfaces__msg__VertexConstraint__fini(msg);
    return false;
  }
  // time_step
  return true;
}

void
my_intermediate_interfaces__msg__VertexConstraint__fini(my_intermediate_interfaces__msg__VertexConstraint * msg)
{
  if (!msg) {
    return;
  }
  // cell
  geometry_msgs__msg__PoseStamped__fini(&msg->cell);
  // time_step
}

bool
my_intermediate_interfaces__msg__VertexConstraint__are_equal(const my_intermediate_interfaces__msg__VertexConstraint * lhs, const my_intermediate_interfaces__msg__VertexConstraint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cell
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->cell), &(rhs->cell)))
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
my_intermediate_interfaces__msg__VertexConstraint__copy(
  const my_intermediate_interfaces__msg__VertexConstraint * input,
  my_intermediate_interfaces__msg__VertexConstraint * output)
{
  if (!input || !output) {
    return false;
  }
  // cell
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->cell), &(output->cell)))
  {
    return false;
  }
  // time_step
  output->time_step = input->time_step;
  return true;
}

my_intermediate_interfaces__msg__VertexConstraint *
my_intermediate_interfaces__msg__VertexConstraint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_intermediate_interfaces__msg__VertexConstraint * msg = (my_intermediate_interfaces__msg__VertexConstraint *)allocator.allocate(sizeof(my_intermediate_interfaces__msg__VertexConstraint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_intermediate_interfaces__msg__VertexConstraint));
  bool success = my_intermediate_interfaces__msg__VertexConstraint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_intermediate_interfaces__msg__VertexConstraint__destroy(my_intermediate_interfaces__msg__VertexConstraint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_intermediate_interfaces__msg__VertexConstraint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_intermediate_interfaces__msg__VertexConstraint__Sequence__init(my_intermediate_interfaces__msg__VertexConstraint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_intermediate_interfaces__msg__VertexConstraint * data = NULL;

  if (size) {
    data = (my_intermediate_interfaces__msg__VertexConstraint *)allocator.zero_allocate(size, sizeof(my_intermediate_interfaces__msg__VertexConstraint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_intermediate_interfaces__msg__VertexConstraint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_intermediate_interfaces__msg__VertexConstraint__fini(&data[i - 1]);
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
my_intermediate_interfaces__msg__VertexConstraint__Sequence__fini(my_intermediate_interfaces__msg__VertexConstraint__Sequence * array)
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
      my_intermediate_interfaces__msg__VertexConstraint__fini(&array->data[i]);
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

my_intermediate_interfaces__msg__VertexConstraint__Sequence *
my_intermediate_interfaces__msg__VertexConstraint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_intermediate_interfaces__msg__VertexConstraint__Sequence * array = (my_intermediate_interfaces__msg__VertexConstraint__Sequence *)allocator.allocate(sizeof(my_intermediate_interfaces__msg__VertexConstraint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_intermediate_interfaces__msg__VertexConstraint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_intermediate_interfaces__msg__VertexConstraint__Sequence__destroy(my_intermediate_interfaces__msg__VertexConstraint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_intermediate_interfaces__msg__VertexConstraint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_intermediate_interfaces__msg__VertexConstraint__Sequence__are_equal(const my_intermediate_interfaces__msg__VertexConstraint__Sequence * lhs, const my_intermediate_interfaces__msg__VertexConstraint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_intermediate_interfaces__msg__VertexConstraint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_intermediate_interfaces__msg__VertexConstraint__Sequence__copy(
  const my_intermediate_interfaces__msg__VertexConstraint__Sequence * input,
  my_intermediate_interfaces__msg__VertexConstraint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_intermediate_interfaces__msg__VertexConstraint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_intermediate_interfaces__msg__VertexConstraint * data =
      (my_intermediate_interfaces__msg__VertexConstraint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_intermediate_interfaces__msg__VertexConstraint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_intermediate_interfaces__msg__VertexConstraint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_intermediate_interfaces__msg__VertexConstraint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
