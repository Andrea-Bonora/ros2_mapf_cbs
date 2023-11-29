// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cbs_interfaces:msg/AgentPathRequest.idl
// generated code does not contain a copyright notice
#include "cbs_interfaces/msg/detail/agent_path_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `start`
// Member `goal`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `vertex_constraints`
#include "cbs_interfaces/msg/detail/vertex_constraint__functions.h"
// Member `edge_constraints`
#include "cbs_interfaces/msg/detail/edge_constraint__functions.h"

bool
cbs_interfaces__msg__AgentPathRequest__init(cbs_interfaces__msg__AgentPathRequest * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    cbs_interfaces__msg__AgentPathRequest__fini(msg);
    return false;
  }
  // start
  if (!geometry_msgs__msg__PoseStamped__init(&msg->start)) {
    cbs_interfaces__msg__AgentPathRequest__fini(msg);
    return false;
  }
  // goal
  if (!geometry_msgs__msg__PoseStamped__init(&msg->goal)) {
    cbs_interfaces__msg__AgentPathRequest__fini(msg);
    return false;
  }
  // vertex_constraints
  if (!cbs_interfaces__msg__VertexConstraint__Sequence__init(&msg->vertex_constraints, 0)) {
    cbs_interfaces__msg__AgentPathRequest__fini(msg);
    return false;
  }
  // edge_constraints
  if (!cbs_interfaces__msg__EdgeConstraint__Sequence__init(&msg->edge_constraints, 0)) {
    cbs_interfaces__msg__AgentPathRequest__fini(msg);
    return false;
  }
  return true;
}

void
cbs_interfaces__msg__AgentPathRequest__fini(cbs_interfaces__msg__AgentPathRequest * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // start
  geometry_msgs__msg__PoseStamped__fini(&msg->start);
  // goal
  geometry_msgs__msg__PoseStamped__fini(&msg->goal);
  // vertex_constraints
  cbs_interfaces__msg__VertexConstraint__Sequence__fini(&msg->vertex_constraints);
  // edge_constraints
  cbs_interfaces__msg__EdgeConstraint__Sequence__fini(&msg->edge_constraints);
}

bool
cbs_interfaces__msg__AgentPathRequest__are_equal(const cbs_interfaces__msg__AgentPathRequest * lhs, const cbs_interfaces__msg__AgentPathRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // start
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  // vertex_constraints
  if (!cbs_interfaces__msg__VertexConstraint__Sequence__are_equal(
      &(lhs->vertex_constraints), &(rhs->vertex_constraints)))
  {
    return false;
  }
  // edge_constraints
  if (!cbs_interfaces__msg__EdgeConstraint__Sequence__are_equal(
      &(lhs->edge_constraints), &(rhs->edge_constraints)))
  {
    return false;
  }
  return true;
}

bool
cbs_interfaces__msg__AgentPathRequest__copy(
  const cbs_interfaces__msg__AgentPathRequest * input,
  cbs_interfaces__msg__AgentPathRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // start
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  // vertex_constraints
  if (!cbs_interfaces__msg__VertexConstraint__Sequence__copy(
      &(input->vertex_constraints), &(output->vertex_constraints)))
  {
    return false;
  }
  // edge_constraints
  if (!cbs_interfaces__msg__EdgeConstraint__Sequence__copy(
      &(input->edge_constraints), &(output->edge_constraints)))
  {
    return false;
  }
  return true;
}

cbs_interfaces__msg__AgentPathRequest *
cbs_interfaces__msg__AgentPathRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__msg__AgentPathRequest * msg = (cbs_interfaces__msg__AgentPathRequest *)allocator.allocate(sizeof(cbs_interfaces__msg__AgentPathRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cbs_interfaces__msg__AgentPathRequest));
  bool success = cbs_interfaces__msg__AgentPathRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cbs_interfaces__msg__AgentPathRequest__destroy(cbs_interfaces__msg__AgentPathRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cbs_interfaces__msg__AgentPathRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cbs_interfaces__msg__AgentPathRequest__Sequence__init(cbs_interfaces__msg__AgentPathRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__msg__AgentPathRequest * data = NULL;

  if (size) {
    data = (cbs_interfaces__msg__AgentPathRequest *)allocator.zero_allocate(size, sizeof(cbs_interfaces__msg__AgentPathRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cbs_interfaces__msg__AgentPathRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cbs_interfaces__msg__AgentPathRequest__fini(&data[i - 1]);
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
cbs_interfaces__msg__AgentPathRequest__Sequence__fini(cbs_interfaces__msg__AgentPathRequest__Sequence * array)
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
      cbs_interfaces__msg__AgentPathRequest__fini(&array->data[i]);
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

cbs_interfaces__msg__AgentPathRequest__Sequence *
cbs_interfaces__msg__AgentPathRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__msg__AgentPathRequest__Sequence * array = (cbs_interfaces__msg__AgentPathRequest__Sequence *)allocator.allocate(sizeof(cbs_interfaces__msg__AgentPathRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cbs_interfaces__msg__AgentPathRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cbs_interfaces__msg__AgentPathRequest__Sequence__destroy(cbs_interfaces__msg__AgentPathRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cbs_interfaces__msg__AgentPathRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cbs_interfaces__msg__AgentPathRequest__Sequence__are_equal(const cbs_interfaces__msg__AgentPathRequest__Sequence * lhs, const cbs_interfaces__msg__AgentPathRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cbs_interfaces__msg__AgentPathRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cbs_interfaces__msg__AgentPathRequest__Sequence__copy(
  const cbs_interfaces__msg__AgentPathRequest__Sequence * input,
  cbs_interfaces__msg__AgentPathRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cbs_interfaces__msg__AgentPathRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cbs_interfaces__msg__AgentPathRequest * data =
      (cbs_interfaces__msg__AgentPathRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cbs_interfaces__msg__AgentPathRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cbs_interfaces__msg__AgentPathRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cbs_interfaces__msg__AgentPathRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
