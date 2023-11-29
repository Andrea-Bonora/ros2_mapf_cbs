// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cbs_interfaces:msg/EdgeConstraint.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__FUNCTIONS_H_
#define CBS_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cbs_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "cbs_interfaces/msg/detail/edge_constraint__struct.h"

/// Initialize msg/EdgeConstraint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cbs_interfaces__msg__EdgeConstraint
 * )) before or use
 * cbs_interfaces__msg__EdgeConstraint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__msg__EdgeConstraint__init(cbs_interfaces__msg__EdgeConstraint * msg);

/// Finalize msg/EdgeConstraint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__msg__EdgeConstraint__fini(cbs_interfaces__msg__EdgeConstraint * msg);

/// Create msg/EdgeConstraint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cbs_interfaces__msg__EdgeConstraint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__msg__EdgeConstraint *
cbs_interfaces__msg__EdgeConstraint__create();

/// Destroy msg/EdgeConstraint message.
/**
 * It calls
 * cbs_interfaces__msg__EdgeConstraint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__msg__EdgeConstraint__destroy(cbs_interfaces__msg__EdgeConstraint * msg);

/// Check for msg/EdgeConstraint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__msg__EdgeConstraint__are_equal(const cbs_interfaces__msg__EdgeConstraint * lhs, const cbs_interfaces__msg__EdgeConstraint * rhs);

/// Copy a msg/EdgeConstraint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__msg__EdgeConstraint__copy(
  const cbs_interfaces__msg__EdgeConstraint * input,
  cbs_interfaces__msg__EdgeConstraint * output);

/// Initialize array of msg/EdgeConstraint messages.
/**
 * It allocates the memory for the number of elements and calls
 * cbs_interfaces__msg__EdgeConstraint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__msg__EdgeConstraint__Sequence__init(cbs_interfaces__msg__EdgeConstraint__Sequence * array, size_t size);

/// Finalize array of msg/EdgeConstraint messages.
/**
 * It calls
 * cbs_interfaces__msg__EdgeConstraint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__msg__EdgeConstraint__Sequence__fini(cbs_interfaces__msg__EdgeConstraint__Sequence * array);

/// Create array of msg/EdgeConstraint messages.
/**
 * It allocates the memory for the array and calls
 * cbs_interfaces__msg__EdgeConstraint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__msg__EdgeConstraint__Sequence *
cbs_interfaces__msg__EdgeConstraint__Sequence__create(size_t size);

/// Destroy array of msg/EdgeConstraint messages.
/**
 * It calls
 * cbs_interfaces__msg__EdgeConstraint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__msg__EdgeConstraint__Sequence__destroy(cbs_interfaces__msg__EdgeConstraint__Sequence * array);

/// Check for msg/EdgeConstraint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__msg__EdgeConstraint__Sequence__are_equal(const cbs_interfaces__msg__EdgeConstraint__Sequence * lhs, const cbs_interfaces__msg__EdgeConstraint__Sequence * rhs);

/// Copy an array of msg/EdgeConstraint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__msg__EdgeConstraint__Sequence__copy(
  const cbs_interfaces__msg__EdgeConstraint__Sequence * input,
  cbs_interfaces__msg__EdgeConstraint__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CBS_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__FUNCTIONS_H_