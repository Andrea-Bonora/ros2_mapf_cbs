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
// Member `agent_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `starting_cell`
// Member `goal_cell`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
my_intermediate_interfaces__msg__EdgeConstraint__init(my_intermediate_interfaces__msg__EdgeConstraint * msg)
{
  if (!msg) {
    return false;
  }
  // agent_name
  if (!rosidl_runtime_c__String__init(&msg->agent_name)) {
    my_intermediate_interfaces__msg__EdgeConstraint__fini(msg);
    return false;
  }
  // starting_cell
  if (!geometry_msgs__msg__PoseStamped__init(&msg->starting_cell)) {
    my_intermediate_interfaces__msg__EdgeConstraint__fini(msg);
    return false;
  }
  // goal_cell
  if (!geometry_msgs__msg__PoseStamped__init(&msg->goal_cell)) {
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
  // agent_name
  rosidl_runtime_c__String__fini(&msg->agent_name);
  // starting_cell
  geometry_msgs__msg__PoseStamped__fini(&msg->starting_cell);
  // goal_cell
  geometry_msgs__msg__PoseStamped__fini(&msg->goal_cell);
  // time_step
}

bool
my_intermediate_interfaces__msg__EdgeConstraint__are_equal(const my_intermediate_interfaces__msg__EdgeConstraint * lhs, const my_intermediate_interfaces__msg__EdgeConstraint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // agent_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->agent_name), &(rhs->agent_name)))
  {
    return false;
  }
  // starting_cell
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->starting_cell), &(rhs->starting_cell)))
  {
    return false;
  }
  // goal_cell
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->goal_cell), &(rhs->goal_cell)))
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
  // agent_name
  if (!rosidl_runtime_c__String__copy(
      &(input->agent_name), &(output->agent_name)))
  {
    return false;
  }
  // starting_cell
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->starting_cell), &(output->starting_cell)))
  {
    return false;
  }
  // goal_cell
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->goal_cell), &(output->goal_cell)))
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
