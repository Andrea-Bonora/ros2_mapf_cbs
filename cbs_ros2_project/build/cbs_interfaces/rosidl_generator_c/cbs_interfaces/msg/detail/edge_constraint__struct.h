// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cbs_interfaces:msg/EdgeConstraint.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__STRUCT_H_
#define CBS_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EdgeConstraint in the package cbs_interfaces.
typedef struct cbs_interfaces__msg__EdgeConstraint
{
  int64_t cell_from_index;
  int64_t cell_to_index;
  int64_t time_step;
} cbs_interfaces__msg__EdgeConstraint;

// Struct for a sequence of cbs_interfaces__msg__EdgeConstraint.
typedef struct cbs_interfaces__msg__EdgeConstraint__Sequence
{
  cbs_interfaces__msg__EdgeConstraint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cbs_interfaces__msg__EdgeConstraint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CBS_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__STRUCT_H_
