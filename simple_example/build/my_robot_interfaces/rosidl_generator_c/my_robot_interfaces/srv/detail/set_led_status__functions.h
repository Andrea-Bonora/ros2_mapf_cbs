// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_robot_interfaces:srv/SetLedStatus.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_STATUS__FUNCTIONS_H_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_robot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "my_robot_interfaces/srv/detail/set_led_status__struct.h"

/// Initialize srv/SetLedStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_robot_interfaces__srv__SetLedStatus_Request
 * )) before or use
 * my_robot_interfaces__srv__SetLedStatus_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__srv__SetLedStatus_Request__init(my_robot_interfaces__srv__SetLedStatus_Request * msg);

/// Finalize srv/SetLedStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__srv__SetLedStatus_Request__fini(my_robot_interfaces__srv__SetLedStatus_Request * msg);

/// Create srv/SetLedStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_robot_interfaces__srv__SetLedStatus_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__srv__SetLedStatus_Request *
my_robot_interfaces__srv__SetLedStatus_Request__create();

/// Destroy srv/SetLedStatus message.
/**
 * It calls
 * my_robot_interfaces__srv__SetLedStatus_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__srv__SetLedStatus_Request__destroy(my_robot_interfaces__srv__SetLedStatus_Request * msg);

/// Check for srv/SetLedStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__srv__SetLedStatus_Request__are_equal(const my_robot_interfaces__srv__SetLedStatus_Request * lhs, const my_robot_interfaces__srv__SetLedStatus_Request * rhs);

/// Copy a srv/SetLedStatus message.
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
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__srv__SetLedStatus_Request__copy(
  const my_robot_interfaces__srv__SetLedStatus_Request * input,
  my_robot_interfaces__srv__SetLedStatus_Request * output);

/// Initialize array of srv/SetLedStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_robot_interfaces__srv__SetLedStatus_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__srv__SetLedStatus_Request__Sequence__init(my_robot_interfaces__srv__SetLedStatus_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetLedStatus messages.
/**
 * It calls
 * my_robot_interfaces__srv__SetLedStatus_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__srv__SetLedStatus_Request__Sequence__fini(my_robot_interfaces__srv__SetLedStatus_Request__Sequence * array);

/// Create array of srv/SetLedStatus messages.
/**
 * It allocates the memory for the array and calls
 * my_robot_interfaces__srv__SetLedStatus_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__srv__SetLedStatus_Request__Sequence *
my_robot_interfaces__srv__SetLedStatus_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetLedStatus messages.
/**
 * It calls
 * my_robot_interfaces__srv__SetLedStatus_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__srv__SetLedStatus_Request__Sequence__destroy(my_robot_interfaces__srv__SetLedStatus_Request__Sequence * array);

/// Check for srv/SetLedStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__srv__SetLedStatus_Request__Sequence__are_equal(const my_robot_interfaces__srv__SetLedStatus_Request__Sequence * lhs, const my_robot_interfaces__srv__SetLedStatus_Request__Sequence * rhs);

/// Copy an array of srv/SetLedStatus messages.
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
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__srv__SetLedStatus_Request__Sequence__copy(
  const my_robot_interfaces__srv__SetLedStatus_Request__Sequence * input,
  my_robot_interfaces__srv__SetLedStatus_Request__Sequence * output);

/// Initialize srv/SetLedStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_robot_interfaces__srv__SetLedStatus_Response
 * )) before or use
 * my_robot_interfaces__srv__SetLedStatus_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__srv__SetLedStatus_Response__init(my_robot_interfaces__srv__SetLedStatus_Response * msg);

/// Finalize srv/SetLedStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__srv__SetLedStatus_Response__fini(my_robot_interfaces__srv__SetLedStatus_Response * msg);

/// Create srv/SetLedStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_robot_interfaces__srv__SetLedStatus_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__srv__SetLedStatus_Response *
my_robot_interfaces__srv__SetLedStatus_Response__create();

/// Destroy srv/SetLedStatus message.
/**
 * It calls
 * my_robot_interfaces__srv__SetLedStatus_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__srv__SetLedStatus_Response__destroy(my_robot_interfaces__srv__SetLedStatus_Response * msg);

/// Check for srv/SetLedStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__srv__SetLedStatus_Response__are_equal(const my_robot_interfaces__srv__SetLedStatus_Response * lhs, const my_robot_interfaces__srv__SetLedStatus_Response * rhs);

/// Copy a srv/SetLedStatus message.
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
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__srv__SetLedStatus_Response__copy(
  const my_robot_interfaces__srv__SetLedStatus_Response * input,
  my_robot_interfaces__srv__SetLedStatus_Response * output);

/// Initialize array of srv/SetLedStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_robot_interfaces__srv__SetLedStatus_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__srv__SetLedStatus_Response__Sequence__init(my_robot_interfaces__srv__SetLedStatus_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetLedStatus messages.
/**
 * It calls
 * my_robot_interfaces__srv__SetLedStatus_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__srv__SetLedStatus_Response__Sequence__fini(my_robot_interfaces__srv__SetLedStatus_Response__Sequence * array);

/// Create array of srv/SetLedStatus messages.
/**
 * It allocates the memory for the array and calls
 * my_robot_interfaces__srv__SetLedStatus_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__srv__SetLedStatus_Response__Sequence *
my_robot_interfaces__srv__SetLedStatus_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetLedStatus messages.
/**
 * It calls
 * my_robot_interfaces__srv__SetLedStatus_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__srv__SetLedStatus_Response__Sequence__destroy(my_robot_interfaces__srv__SetLedStatus_Response__Sequence * array);

/// Check for srv/SetLedStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__srv__SetLedStatus_Response__Sequence__are_equal(const my_robot_interfaces__srv__SetLedStatus_Response__Sequence * lhs, const my_robot_interfaces__srv__SetLedStatus_Response__Sequence * rhs);

/// Copy an array of srv/SetLedStatus messages.
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
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__srv__SetLedStatus_Response__Sequence__copy(
  const my_robot_interfaces__srv__SetLedStatus_Response__Sequence * input,
  my_robot_interfaces__srv__SetLedStatus_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_STATUS__FUNCTIONS_H_
