// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cbs_interfaces:msg/VertexConstraint.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__MSG__DETAIL__VERTEX_CONSTRAINT__STRUCT_H_
#define CBS_INTERFACES__MSG__DETAIL__VERTEX_CONSTRAINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VertexConstraint in the package cbs_interfaces.
typedef struct cbs_interfaces__msg__VertexConstraint
{
  int64_t cell_index;
  int64_t time_step;
} cbs_interfaces__msg__VertexConstraint;

// Struct for a sequence of cbs_interfaces__msg__VertexConstraint.
typedef struct cbs_interfaces__msg__VertexConstraint__Sequence
{
  cbs_interfaces__msg__VertexConstraint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cbs_interfaces__msg__VertexConstraint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CBS_INTERFACES__MSG__DETAIL__VERTEX_CONSTRAINT__STRUCT_H_
