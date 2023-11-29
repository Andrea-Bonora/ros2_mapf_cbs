// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cbs_interfaces:action/ComputePathToPoseCBS.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_TO_POSE_CBS__FUNCTIONS_H_
#define CBS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_TO_POSE_CBS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cbs_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.h"

/// Initialize action/ComputePathToPoseCBS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cbs_interfaces__action__ComputePathToPoseCBS_Goal
 * )) before or use
 * cbs_interfaces__action__ComputePathToPoseCBS_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_Goal__init(cbs_interfaces__action__ComputePathToPoseCBS_Goal * msg);

/// Finalize action/ComputePathToPoseCBS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_Goal__fini(cbs_interfaces__action__ComputePathToPoseCBS_Goal * msg);

/// Create action/ComputePathToPoseCBS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__action__ComputePathToPoseCBS_Goal *
cbs_interfaces__action__ComputePathToPoseCBS_Goal__create();

/// Destroy action/ComputePathToPoseCBS message.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_Goal__destroy(cbs_interfaces__action__ComputePathToPoseCBS_Goal * msg);

/// Check for action/ComputePathToPoseCBS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_Goal__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_Goal * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_Goal * rhs);

/// Copy a action/ComputePathToPoseCBS message.
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
cbs_interfaces__action__ComputePathToPoseCBS_Goal__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_Goal * input,
  cbs_interfaces__action__ComputePathToPoseCBS_Goal * output);

/// Initialize array of action/ComputePathToPoseCBS messages.
/**
 * It allocates the memory for the number of elements and calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence__init(cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence * array, size_t size);

/// Finalize array of action/ComputePathToPoseCBS messages.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence__fini(cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence * array);

/// Create array of action/ComputePathToPoseCBS messages.
/**
 * It allocates the memory for the array and calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence *
cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence__create(size_t size);

/// Destroy array of action/ComputePathToPoseCBS messages.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence__destroy(cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence * array);

/// Check for action/ComputePathToPoseCBS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence * rhs);

/// Copy an array of action/ComputePathToPoseCBS messages.
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
cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence * input,
  cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence * output);

/// Initialize action/ComputePathToPoseCBS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cbs_interfaces__action__ComputePathToPoseCBS_Result
 * )) before or use
 * cbs_interfaces__action__ComputePathToPoseCBS_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_Result__init(cbs_interfaces__action__ComputePathToPoseCBS_Result * msg);

/// Finalize action/ComputePathToPoseCBS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_Result__fini(cbs_interfaces__action__ComputePathToPoseCBS_Result * msg);

/// Create action/ComputePathToPoseCBS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__action__ComputePathToPoseCBS_Result *
cbs_interfaces__action__ComputePathToPoseCBS_Result__create();

/// Destroy action/ComputePathToPoseCBS message.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_Result__destroy(cbs_interfaces__action__ComputePathToPoseCBS_Result * msg);

/// Check for action/ComputePathToPoseCBS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_Result__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_Result * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_Result * rhs);

/// Copy a action/ComputePathToPoseCBS message.
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
cbs_interfaces__action__ComputePathToPoseCBS_Result__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_Result * input,
  cbs_interfaces__action__ComputePathToPoseCBS_Result * output);

/// Initialize array of action/ComputePathToPoseCBS messages.
/**
 * It allocates the memory for the number of elements and calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence__init(cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence * array, size_t size);

/// Finalize array of action/ComputePathToPoseCBS messages.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence__fini(cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence * array);

/// Create array of action/ComputePathToPoseCBS messages.
/**
 * It allocates the memory for the array and calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence *
cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence__create(size_t size);

/// Destroy array of action/ComputePathToPoseCBS messages.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence__destroy(cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence * array);

/// Check for action/ComputePathToPoseCBS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence * rhs);

/// Copy an array of action/ComputePathToPoseCBS messages.
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
cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence * input,
  cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence * output);

/// Initialize action/ComputePathToPoseCBS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cbs_interfaces__action__ComputePathToPoseCBS_Feedback
 * )) before or use
 * cbs_interfaces__action__ComputePathToPoseCBS_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__init(cbs_interfaces__action__ComputePathToPoseCBS_Feedback * msg);

/// Finalize action/ComputePathToPoseCBS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__fini(cbs_interfaces__action__ComputePathToPoseCBS_Feedback * msg);

/// Create action/ComputePathToPoseCBS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__action__ComputePathToPoseCBS_Feedback *
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__create();

/// Destroy action/ComputePathToPoseCBS message.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__destroy(cbs_interfaces__action__ComputePathToPoseCBS_Feedback * msg);

/// Check for action/ComputePathToPoseCBS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_Feedback * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_Feedback * rhs);

/// Copy a action/ComputePathToPoseCBS message.
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
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_Feedback * input,
  cbs_interfaces__action__ComputePathToPoseCBS_Feedback * output);

/// Initialize array of action/ComputePathToPoseCBS messages.
/**
 * It allocates the memory for the number of elements and calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence__init(cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ComputePathToPoseCBS messages.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence__fini(cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence * array);

/// Create array of action/ComputePathToPoseCBS messages.
/**
 * It allocates the memory for the array and calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence *
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ComputePathToPoseCBS messages.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence__destroy(cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence * array);

/// Check for action/ComputePathToPoseCBS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence * rhs);

/// Copy an array of action/ComputePathToPoseCBS messages.
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
cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence * input,
  cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence * output);

/// Initialize action/ComputePathToPoseCBS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request
 * )) before or use
 * cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__init(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * msg);

/// Finalize action/ComputePathToPoseCBS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__fini(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * msg);

/// Create action/ComputePathToPoseCBS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request *
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__create();

/// Destroy action/ComputePathToPoseCBS message.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__destroy(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * msg);

/// Check for action/ComputePathToPoseCBS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * rhs);

/// Copy a action/ComputePathToPoseCBS message.
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
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * input,
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * output);

/// Initialize array of action/ComputePathToPoseCBS messages.
/**
 * It allocates the memory for the number of elements and calls
 * cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence__init(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ComputePathToPoseCBS messages.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence__fini(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence * array);

/// Create array of action/ComputePathToPoseCBS messages.
/**
 * It allocates the memory for the array and calls
 * cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence *
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ComputePathToPoseCBS messages.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence__destroy(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence * array);

/// Check for action/ComputePathToPoseCBS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/ComputePathToPoseCBS messages.
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
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence * input,
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence * output);

/// Initialize action/ComputePathToPoseCBS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response
 * )) before or use
 * cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__init(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * msg);

/// Finalize action/ComputePathToPoseCBS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__fini(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * msg);

/// Create action/ComputePathToPoseCBS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response *
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__create();

/// Destroy action/ComputePathToPoseCBS message.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__destroy(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * msg);

/// Check for action/ComputePathToPoseCBS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * rhs);

/// Copy a action/ComputePathToPoseCBS message.
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
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * input,
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * output);

/// Initialize array of action/ComputePathToPoseCBS messages.
/**
 * It allocates the memory for the number of elements and calls
 * cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence__init(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ComputePathToPoseCBS messages.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence__fini(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence * array);

/// Create array of action/ComputePathToPoseCBS messages.
/**
 * It allocates the memory for the array and calls
 * cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence *
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ComputePathToPoseCBS messages.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence__destroy(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence * array);

/// Check for action/ComputePathToPoseCBS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/ComputePathToPoseCBS messages.
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
cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence * input,
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence * output);

/// Initialize action/ComputePathToPoseCBS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request
 * )) before or use
 * cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__init(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * msg);

/// Finalize action/ComputePathToPoseCBS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__fini(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * msg);

/// Create action/ComputePathToPoseCBS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request *
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__create();

/// Destroy action/ComputePathToPoseCBS message.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__destroy(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * msg);

/// Check for action/ComputePathToPoseCBS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * rhs);

/// Copy a action/ComputePathToPoseCBS message.
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
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * input,
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * output);

/// Initialize array of action/ComputePathToPoseCBS messages.
/**
 * It allocates the memory for the number of elements and calls
 * cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence__init(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ComputePathToPoseCBS messages.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence__fini(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence * array);

/// Create array of action/ComputePathToPoseCBS messages.
/**
 * It allocates the memory for the array and calls
 * cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence *
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ComputePathToPoseCBS messages.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence__destroy(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence * array);

/// Check for action/ComputePathToPoseCBS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence * rhs);

/// Copy an array of action/ComputePathToPoseCBS messages.
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
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence * input,
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence * output);

/// Initialize action/ComputePathToPoseCBS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response
 * )) before or use
 * cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__init(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * msg);

/// Finalize action/ComputePathToPoseCBS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__fini(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * msg);

/// Create action/ComputePathToPoseCBS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response *
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__create();

/// Destroy action/ComputePathToPoseCBS message.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__destroy(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * msg);

/// Check for action/ComputePathToPoseCBS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * rhs);

/// Copy a action/ComputePathToPoseCBS message.
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
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * input,
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * output);

/// Initialize array of action/ComputePathToPoseCBS messages.
/**
 * It allocates the memory for the number of elements and calls
 * cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence__init(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ComputePathToPoseCBS messages.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence__fini(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence * array);

/// Create array of action/ComputePathToPoseCBS messages.
/**
 * It allocates the memory for the array and calls
 * cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence *
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ComputePathToPoseCBS messages.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence__destroy(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence * array);

/// Check for action/ComputePathToPoseCBS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence * rhs);

/// Copy an array of action/ComputePathToPoseCBS messages.
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
cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence * input,
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence * output);

/// Initialize action/ComputePathToPoseCBS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage
 * )) before or use
 * cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__init(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * msg);

/// Finalize action/ComputePathToPoseCBS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__fini(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * msg);

/// Create action/ComputePathToPoseCBS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage *
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__create();

/// Destroy action/ComputePathToPoseCBS message.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__destroy(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * msg);

/// Check for action/ComputePathToPoseCBS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * rhs);

/// Copy a action/ComputePathToPoseCBS message.
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
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * input,
  cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * output);

/// Initialize array of action/ComputePathToPoseCBS messages.
/**
 * It allocates the memory for the number of elements and calls
 * cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence__init(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ComputePathToPoseCBS messages.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence__fini(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence * array);

/// Create array of action/ComputePathToPoseCBS messages.
/**
 * It allocates the memory for the array and calls
 * cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence *
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ComputePathToPoseCBS messages.
/**
 * It calls
 * cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
void
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence__destroy(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence * array);

/// Check for action/ComputePathToPoseCBS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cbs_interfaces
bool
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence__are_equal(const cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence * lhs, const cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/ComputePathToPoseCBS messages.
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
cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence__copy(
  const cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence * input,
  cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CBS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_TO_POSE_CBS__FUNCTIONS_H_
