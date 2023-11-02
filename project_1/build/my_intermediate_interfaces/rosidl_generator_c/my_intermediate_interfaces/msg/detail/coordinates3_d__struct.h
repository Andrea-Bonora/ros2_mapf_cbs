// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_intermediate_interfaces:msg/Coordinates3D.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__COORDINATES3_D__STRUCT_H_
#define MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__COORDINATES3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Coordinates3D in the package my_intermediate_interfaces.
typedef struct my_intermediate_interfaces__msg__Coordinates3D
{
  double x;
  double y;
  double z;
} my_intermediate_interfaces__msg__Coordinates3D;

// Struct for a sequence of my_intermediate_interfaces__msg__Coordinates3D.
typedef struct my_intermediate_interfaces__msg__Coordinates3D__Sequence
{
  my_intermediate_interfaces__msg__Coordinates3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_intermediate_interfaces__msg__Coordinates3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__COORDINATES3_D__STRUCT_H_
