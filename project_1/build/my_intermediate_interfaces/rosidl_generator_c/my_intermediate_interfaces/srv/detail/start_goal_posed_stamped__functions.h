// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_intermediate_interfaces:srv/StartGoalPosedStamped.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSED_STAMPED__FUNCTIONS_H_
#define MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSED_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_intermediate_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "my_intermediate_interfaces/srv/detail/start_goal_posed_stamped__struct.h"

/// Initialize srv/StartGoalPosedStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_intermediate_interfaces__srv__StartGoalPosedStamped_Request
 * )) before or use
 * my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
bool
my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__init(my_intermediate_interfaces__srv__StartGoalPosedStamped_Request * msg);

/// Finalize srv/StartGoalPosedStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
void
my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__fini(my_intermediate_interfaces__srv__StartGoalPosedStamped_Request * msg);

/// Create srv/StartGoalPosedStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
my_intermediate_interfaces__srv__StartGoalPosedStamped_Request *
my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__create();

/// Destroy srv/StartGoalPosedStamped message.
/**
 * It calls
 * my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
void
my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__destroy(my_intermediate_interfaces__srv__StartGoalPosedStamped_Request * msg);

/// Check for srv/StartGoalPosedStamped message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
bool
my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__are_equal(const my_intermediate_interfaces__srv__StartGoalPosedStamped_Request * lhs, const my_intermediate_interfaces__srv__StartGoalPosedStamped_Request * rhs);

/// Copy a srv/StartGoalPosedStamped message.
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
my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__copy(
  const my_intermediate_interfaces__srv__StartGoalPosedStamped_Request * input,
  my_intermediate_interfaces__srv__StartGoalPosedStamped_Request * output);

/// Initialize array of srv/StartGoalPosedStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
bool
my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__Sequence__init(my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__Sequence * array, size_t size);

/// Finalize array of srv/StartGoalPosedStamped messages.
/**
 * It calls
 * my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
void
my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__Sequence__fini(my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__Sequence * array);

/// Create array of srv/StartGoalPosedStamped messages.
/**
 * It allocates the memory for the array and calls
 * my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__Sequence *
my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__Sequence__create(size_t size);

/// Destroy array of srv/StartGoalPosedStamped messages.
/**
 * It calls
 * my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
void
my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__Sequence__destroy(my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__Sequence * array);

/// Check for srv/StartGoalPosedStamped message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
bool
my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__Sequence__are_equal(const my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__Sequence * lhs, const my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__Sequence * rhs);

/// Copy an array of srv/StartGoalPosedStamped messages.
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
my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__Sequence__copy(
  const my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__Sequence * input,
  my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__Sequence * output);

/// Initialize srv/StartGoalPosedStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_intermediate_interfaces__srv__StartGoalPosedStamped_Response
 * )) before or use
 * my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
bool
my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__init(my_intermediate_interfaces__srv__StartGoalPosedStamped_Response * msg);

/// Finalize srv/StartGoalPosedStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
void
my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__fini(my_intermediate_interfaces__srv__StartGoalPosedStamped_Response * msg);

/// Create srv/StartGoalPosedStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
my_intermediate_interfaces__srv__StartGoalPosedStamped_Response *
my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__create();

/// Destroy srv/StartGoalPosedStamped message.
/**
 * It calls
 * my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
void
my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__destroy(my_intermediate_interfaces__srv__StartGoalPosedStamped_Response * msg);

/// Check for srv/StartGoalPosedStamped message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
bool
my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__are_equal(const my_intermediate_interfaces__srv__StartGoalPosedStamped_Response * lhs, const my_intermediate_interfaces__srv__StartGoalPosedStamped_Response * rhs);

/// Copy a srv/StartGoalPosedStamped message.
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
my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__copy(
  const my_intermediate_interfaces__srv__StartGoalPosedStamped_Response * input,
  my_intermediate_interfaces__srv__StartGoalPosedStamped_Response * output);

/// Initialize array of srv/StartGoalPosedStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
bool
my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__Sequence__init(my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__Sequence * array, size_t size);

/// Finalize array of srv/StartGoalPosedStamped messages.
/**
 * It calls
 * my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
void
my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__Sequence__fini(my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__Sequence * array);

/// Create array of srv/StartGoalPosedStamped messages.
/**
 * It allocates the memory for the array and calls
 * my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__Sequence *
my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__Sequence__create(size_t size);

/// Destroy array of srv/StartGoalPosedStamped messages.
/**
 * It calls
 * my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
void
my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__Sequence__destroy(my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__Sequence * array);

/// Check for srv/StartGoalPosedStamped message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_intermediate_interfaces
bool
my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__Sequence__are_equal(const my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__Sequence * lhs, const my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__Sequence * rhs);

/// Copy an array of srv/StartGoalPosedStamped messages.
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
my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__Sequence__copy(
  const my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__Sequence * input,
  my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSED_STAMPED__FUNCTIONS_H_
