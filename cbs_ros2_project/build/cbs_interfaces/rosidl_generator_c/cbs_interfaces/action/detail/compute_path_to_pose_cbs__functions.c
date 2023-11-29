// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cbs_interfaces:action/ComputePathToPoseCBS.idl
// generated code does not contain a copyright notice
#include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `goal`
// Member `start`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `vertex_constraints`
#include "cbs_interfaces/msg/detail/vertex_constraint__functions.h"
// Member `edge_constraints`
#include "cbs_interfaces/msg/detail/edge_constraint__functions.h"
// Member `planner_id`
#include "rosidl_runtime_c/string_functions.h"

bool
cbs_interfaces__action__ComputePathToPoseCBS_Goal__init(cbs_interfaces__action__ComputePathToPoseCBS_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__PoseStamped__init(&msg->goal)) {
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__fini(msg);
    return false;
  }
  // start
  if (!geometry_msgs__msg__PoseStamped__init(&msg->start)) {
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__fini(msg);
    return false;
  }
  // vertex_constraints
  if (!cbs_interfaces__msg__VertexConstraint__Sequence__init(&msg->vertex_constraints, 0)) {
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__fini(msg);
    return false;
  }
  // edge_constraints
  if (!cbs_interfaces__msg__EdgeConstraint__Sequence__init(&msg->edge_constraints, 0)) {
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__fini(msg);
    return false;
  }
  // planner_id
  if (!rosidl_runtime_c__String__init(&msg->planner_id)) {
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__fini(msg);
    return false;
  }
  // use_start
  return true;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_Goal__fini(cbs_interfaces__action__ComputePathToPoseCBS_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal
  geometry_msgs__msg__PoseStamped__fini(&msg->goal);
  // start
  geometry_msgs__msg__PoseStamped__fini(&msg->start);
  // vertex_constraints
  cbs_interfaces__msg__VertexConstraint__Sequence__fini(&msg->vertex_constraints);
  // edge_constraints
  cbs_interfaces__msg__EdgeConstraint__Sequence__fini(&msg->edge_constraints);
  // planner_id
  rosidl_runtime_c__String__fini(&msg->planner_id);
  // use_start
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_Goal__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_Goal * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  // start
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->start), &(rhs->start)))
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
  // planner_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->planner_id), &(rhs->planner_id)))
  {
    return false;
  }
  // use_start
  if (lhs->use_start != rhs->use_start) {
    return false;
  }
  return true;
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_Goal__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_Goal * input,
  cbs_interfaces__action__ComputePathToPoseCBS_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  // start
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->start), &(output->start)))
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
  // planner_id
  if (!rosidl_runtime_c__String__copy(
      &(input->planner_id), &(output->planner_id)))
  {
    return false;
  }
  // use_start
  output->use_start = input->use_start;
  return true;
}

cbs_interfaces__action__ComputePathToPoseCBS_Goal *
cbs_interfaces__action__ComputePathToPoseCBS_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_Goal * msg = (cbs_interfaces__action__ComputePathToPoseCBS_Goal *)allocator.allocate(sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Goal));
  bool success = cbs_interfaces__action__ComputePathToPoseCBS_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_Goal__destroy(cbs_interfaces__action__ComputePathToPoseCBS_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence__init(cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_Goal * data = NULL;

  if (size) {
    data = (cbs_interfaces__action__ComputePathToPoseCBS_Goal *)allocator.zero_allocate(size, sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cbs_interfaces__action__ComputePathToPoseCBS_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cbs_interfaces__action__ComputePathToPoseCBS_Goal__fini(&data[i - 1]);
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
cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence__fini(cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence * array)
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
      cbs_interfaces__action__ComputePathToPoseCBS_Goal__fini(&array->data[i]);
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

cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence *
cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence * array = (cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence *)allocator.allocate(sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence__destroy(cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cbs_interfaces__action__ComputePathToPoseCBS_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence * input,
  cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cbs_interfaces__action__ComputePathToPoseCBS_Goal * data =
      (cbs_interfaces__action__ComputePathToPoseCBS_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cbs_interfaces__action__ComputePathToPoseCBS_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cbs_interfaces__action__ComputePathToPoseCBS_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cbs_interfaces__action__ComputePathToPoseCBS_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `path`
#include "nav_msgs/msg/detail/path__functions.h"
// Member `planning_time`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
cbs_interfaces__action__ComputePathToPoseCBS_Result__init(cbs_interfaces__action__ComputePathToPoseCBS_Result * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__init(&msg->path)) {
    cbs_interfaces__action__ComputePathToPoseCBS_Result__fini(msg);
    return false;
  }
  // planning_time
  if (!builtin_interfaces__msg__Duration__init(&msg->planning_time)) {
    cbs_interfaces__action__ComputePathToPoseCBS_Result__fini(msg);
    return false;
  }
  // error_code
  return true;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_Result__fini(cbs_interfaces__action__ComputePathToPoseCBS_Result * msg)
{
  if (!msg) {
    return;
  }
  // path
  nav_msgs__msg__Path__fini(&msg->path);
  // planning_time
  builtin_interfaces__msg__Duration__fini(&msg->planning_time);
  // error_code
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_Result__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_Result * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // planning_time
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->planning_time), &(rhs->planning_time)))
  {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  return true;
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_Result__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_Result * input,
  cbs_interfaces__action__ComputePathToPoseCBS_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // planning_time
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->planning_time), &(output->planning_time)))
  {
    return false;
  }
  // error_code
  output->error_code = input->error_code;
  return true;
}

cbs_interfaces__action__ComputePathToPoseCBS_Result *
cbs_interfaces__action__ComputePathToPoseCBS_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_Result * msg = (cbs_interfaces__action__ComputePathToPoseCBS_Result *)allocator.allocate(sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Result));
  bool success = cbs_interfaces__action__ComputePathToPoseCBS_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_Result__destroy(cbs_interfaces__action__ComputePathToPoseCBS_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cbs_interfaces__action__ComputePathToPoseCBS_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence__init(cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_Result * data = NULL;

  if (size) {
    data = (cbs_interfaces__action__ComputePathToPoseCBS_Result *)allocator.zero_allocate(size, sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cbs_interfaces__action__ComputePathToPoseCBS_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cbs_interfaces__action__ComputePathToPoseCBS_Result__fini(&data[i - 1]);
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
cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence__fini(cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence * array)
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
      cbs_interfaces__action__ComputePathToPoseCBS_Result__fini(&array->data[i]);
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

cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence *
cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence * array = (cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence *)allocator.allocate(sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence__destroy(cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cbs_interfaces__action__ComputePathToPoseCBS_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence * input,
  cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cbs_interfaces__action__ComputePathToPoseCBS_Result * data =
      (cbs_interfaces__action__ComputePathToPoseCBS_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cbs_interfaces__action__ComputePathToPoseCBS_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cbs_interfaces__action__ComputePathToPoseCBS_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cbs_interfaces__action__ComputePathToPoseCBS_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__init(cbs_interfaces__action__ComputePathToPoseCBS_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__fini(cbs_interfaces__action__ComputePathToPoseCBS_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_Feedback * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_Feedback * rhs)
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
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_Feedback * input,
  cbs_interfaces__action__ComputePathToPoseCBS_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

cbs_interfaces__action__ComputePathToPoseCBS_Feedback *
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_Feedback * msg = (cbs_interfaces__action__ComputePathToPoseCBS_Feedback *)allocator.allocate(sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Feedback));
  bool success = cbs_interfaces__action__ComputePathToPoseCBS_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__destroy(cbs_interfaces__action__ComputePathToPoseCBS_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cbs_interfaces__action__ComputePathToPoseCBS_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence__init(cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_Feedback * data = NULL;

  if (size) {
    data = (cbs_interfaces__action__ComputePathToPoseCBS_Feedback *)allocator.zero_allocate(size, sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cbs_interfaces__action__ComputePathToPoseCBS_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cbs_interfaces__action__ComputePathToPoseCBS_Feedback__fini(&data[i - 1]);
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
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence__fini(cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence * array)
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
      cbs_interfaces__action__ComputePathToPoseCBS_Feedback__fini(&array->data[i]);
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

cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence *
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence * array = (cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence *)allocator.allocate(sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence__destroy(cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cbs_interfaces__action__ComputePathToPoseCBS_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence * input,
  cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cbs_interfaces__action__ComputePathToPoseCBS_Feedback * data =
      (cbs_interfaces__action__ComputePathToPoseCBS_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cbs_interfaces__action__ComputePathToPoseCBS_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cbs_interfaces__action__ComputePathToPoseCBS_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cbs_interfaces__action__ComputePathToPoseCBS_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__functions.h"

bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__init(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!cbs_interfaces__action__ComputePathToPoseCBS_Goal__init(&msg->goal)) {
    cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__fini(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  cbs_interfaces__action__ComputePathToPoseCBS_Goal__fini(&msg->goal);
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!cbs_interfaces__action__ComputePathToPoseCBS_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * input,
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!cbs_interfaces__action__ComputePathToPoseCBS_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request *
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * msg = (cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request *)allocator.allocate(sizeof(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request));
  bool success = cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__destroy(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence__init(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * data = NULL;

  if (size) {
    data = (cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request *)allocator.zero_allocate(size, sizeof(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__fini(&data[i - 1]);
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
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence__fini(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence * array)
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
      cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__fini(&array->data[i]);
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

cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence *
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence * array = (cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence *)allocator.allocate(sizeof(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence__destroy(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence * input,
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * data =
      (cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__init(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__fini(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * input,
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response *
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * msg = (cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response *)allocator.allocate(sizeof(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response));
  bool success = cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__destroy(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence__init(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * data = NULL;

  if (size) {
    data = (cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response *)allocator.zero_allocate(size, sizeof(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__fini(&data[i - 1]);
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
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence__fini(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence * array)
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
      cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__fini(&array->data[i]);
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

cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence *
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence * array = (cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence *)allocator.allocate(sizeof(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence__destroy(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence * input,
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * data =
      (cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__init(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__fini(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * input,
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request *
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * msg = (cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request *)allocator.allocate(sizeof(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request));
  bool success = cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__destroy(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence__init(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * data = NULL;

  if (size) {
    data = (cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request *)allocator.zero_allocate(size, sizeof(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__fini(&data[i - 1]);
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
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence__fini(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence * array)
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
      cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__fini(&array->data[i]);
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

cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence *
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence * array = (cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence *)allocator.allocate(sizeof(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence__destroy(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence * input,
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * data =
      (cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__functions.h"

bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__init(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!cbs_interfaces__action__ComputePathToPoseCBS_Result__init(&msg->result)) {
    cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__fini(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  cbs_interfaces__action__ComputePathToPoseCBS_Result__fini(&msg->result);
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!cbs_interfaces__action__ComputePathToPoseCBS_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * input,
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!cbs_interfaces__action__ComputePathToPoseCBS_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response *
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * msg = (cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response *)allocator.allocate(sizeof(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response));
  bool success = cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__destroy(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence__init(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * data = NULL;

  if (size) {
    data = (cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response *)allocator.zero_allocate(size, sizeof(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__fini(&data[i - 1]);
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
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence__fini(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence * array)
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
      cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__fini(&array->data[i]);
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

cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence *
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence * array = (cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence *)allocator.allocate(sizeof(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence__destroy(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence * input,
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * data =
      (cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__functions.h"

bool
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__init(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!cbs_interfaces__action__ComputePathToPoseCBS_Feedback__init(&msg->feedback)) {
    cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__fini(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  cbs_interfaces__action__ComputePathToPoseCBS_Feedback__fini(&msg->feedback);
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!cbs_interfaces__action__ComputePathToPoseCBS_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * input,
  cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!cbs_interfaces__action__ComputePathToPoseCBS_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage *
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * msg = (cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage *)allocator.allocate(sizeof(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage));
  bool success = cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__destroy(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence__init(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * data = NULL;

  if (size) {
    data = (cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage *)allocator.zero_allocate(size, sizeof(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__fini(&data[i - 1]);
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
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence__fini(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence * array)
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
      cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__fini(&array->data[i]);
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

cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence *
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence * array = (cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence *)allocator.allocate(sizeof(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence__destroy(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence * input,
  cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * data =
      (cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
