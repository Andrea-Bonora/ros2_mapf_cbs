// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cbs_interfaces:msg/Coordinates3D.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__MSG__DETAIL__COORDINATES3_D__FUNCTIONS_H_
#define CBS_INTERFACES__MSG__DETAIL__COORDINATES3_D__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cbs_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "cbs_interfaces/msg/detail/coordinates3_d__struct.h"

/// Initialize msg/Coordinates3D message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cbs_interfaces__msg__Coordinates3D
 * )) before or use
 * cbs_interfaces__msg__Coordinates3D__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__msg__Coordinates3D__init(cbs_interfaces__msg__Coordinates3D * msg);

/// Finalize msg/Coordinates3D message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__msg__Coordinates3D__fini(cbs_interfaces__msg__Coordinates3D * msg);

/// Create msg/Coordinates3D message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cbs_interfaces__msg__Coordinates3D__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__msg__Coordinates3D *
cbs_interfaces__msg__Coordinates3D__create();

/// Destroy msg/Coordinates3D message.
/**
 * It calls
 * cbs_interfaces__msg__Coordinates3D__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__msg__Coordinates3D__destroy(cbs_interfaces__msg__Coordinates3D * msg);

/// Check for msg/Coordinates3D message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__msg__Coordinates3D__are_equal(const cbs_interfaces__msg__Coordinates3D * lhs, const cbs_interfaces__msg__Coordinates3D * rhs);

/// Copy a msg/Coordinates3D message.
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
cbs_interfaces__msg__Coordinates3D__copy(
  const cbs_interfaces__msg__Coordinates3D * input,
  cbs_interfaces__msg__Coordinates3D * output);

/// Initialize array of msg/Coordinates3D messages.
/**
 * It allocates the memory for the number of elements and calls
 * cbs_interfaces__msg__Coordinates3D__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__msg__Coordinates3D__Sequence__init(cbs_interfaces__msg__Coordinates3D__Sequence * array, size_t size);

/// Finalize array of msg/Coordinates3D messages.
/**
 * It calls
 * cbs_interfaces__msg__Coordinates3D__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__msg__Coordinates3D__Sequence__fini(cbs_interfaces__msg__Coordinates3D__Sequence * array);

/// Create array of msg/Coordinates3D messages.
/**
 * It allocates the memory for the array and calls
 * cbs_interfaces__msg__Coordinates3D__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__msg__Coordinates3D__Sequence *
cbs_interfaces__msg__Coordinates3D__Sequence__create(size_t size);

/// Destroy array of msg/Coordinates3D messages.
/**
 * It calls
 * cbs_interfaces__msg__Coordinates3D__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__msg__Coordinates3D__Sequence__destroy(cbs_interfaces__msg__Coordinates3D__Sequence * array);

/// Check for msg/Coordinates3D message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__msg__Coordinates3D__Sequence__are_equal(const cbs_interfaces__msg__Coordinates3D__Sequence * lhs, const cbs_interfaces__msg__Coordinates3D__Sequence * rhs);

/// Copy an array of msg/Coordinates3D messages.
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
cbs_interfaces__msg__Coordinates3D__Sequence__copy(
  const cbs_interfaces__msg__Coordinates3D__Sequence * input,
  cbs_interfaces__msg__Coordinates3D__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CBS_INTERFACES__MSG__DETAIL__COORDINATES3_D__FUNCTIONS_H_
