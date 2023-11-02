// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_intermediate_interfaces:msg/StartGoal.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__START_GOAL__FUNCTIONS_H_
#define MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__START_GOAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_intermediate_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "my_intermediate_interfaces/msg/detail/start_goal__struct.h"

/// Initialize msg/StartGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_intermediate_interfaces__msg__StartGoal
 * )) before or use
 * my_intermediate_interfaces__msg__StartGoal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
bool
my_intermediate_interfaces__msg__StartGoal__init(my_intermediate_interfaces__msg__StartGoal * msg);

/// Finalize msg/StartGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
void
my_intermediate_interfaces__msg__StartGoal__fini(my_intermediate_interfaces__msg__StartGoal * msg);

/// Create msg/StartGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_intermediate_interfaces__msg__StartGoal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
my_intermediate_interfaces__msg__StartGoal *
my_intermediate_interfaces__msg__StartGoal__create();

/// Destroy msg/StartGoal message.
/**
 * It calls
 * my_intermediate_interfaces__msg__StartGoal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
void
my_intermediate_interfaces__msg__StartGoal__destroy(my_intermediate_interfaces__msg__StartGoal * msg);

/// Check for msg/StartGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
bool
my_intermediate_interfaces__msg__StartGoal__are_equal(const my_intermediate_interfaces__msg__StartGoal * lhs, const my_intermediate_interfaces__msg__StartGoal * rhs);

/// Copy a msg/StartGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
bool
my_intermediate_interfaces__msg__StartGoal__copy(
  const my_intermediate_interfaces__msg__StartGoal * input,
  my_intermediate_interfaces__msg__StartGoal * output);

/// Initialize array of msg/StartGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_intermediate_interfaces__msg__StartGoal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
bool
my_intermediate_interfaces__msg__StartGoal__Sequence__init(my_intermediate_interfaces__msg__StartGoal__Sequence * array, size_t size);

/// Finalize array of msg/StartGoal messages.
/**
 * It calls
 * my_intermediate_interfaces__msg__StartGoal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
void
my_intermediate_interfaces__msg__StartGoal__Sequence__fini(my_intermediate_interfaces__msg__StartGoal__Sequence * array);

/// Create array of msg/StartGoal messages.
/**
 * It allocates the memory for the array and calls
 * my_intermediate_interfaces__msg__StartGoal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
my_intermediate_interfaces__msg__StartGoal__Sequence *
my_intermediate_interfaces__msg__StartGoal__Sequence__create(size_t size);

/// Destroy array of msg/StartGoal messages.
/**
 * It calls
 * my_intermediate_interfaces__msg__StartGoal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
void
my_intermediate_interfaces__msg__StartGoal__Sequence__destroy(my_intermediate_interfaces__msg__StartGoal__Sequence * array);

/// Check for msg/StartGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
bool
my_intermediate_interfaces__msg__StartGoal__Sequence__are_equal(const my_intermediate_interfaces__msg__StartGoal__Sequence * lhs, const my_intermediate_interfaces__msg__StartGoal__Sequence * rhs);

/// Copy an array of msg/StartGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
bool
my_intermediate_interfaces__msg__StartGoal__Sequence__copy(
  const my_intermediate_interfaces__msg__StartGoal__Sequence * input,
  my_intermediate_interfaces__msg__StartGoal__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__START_GOAL__FUNCTIONS_H_
