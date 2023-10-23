// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_intermediate_interfaces:srv/StartGoalPositions.idl
// generated code does not contain a copyright notice
#include "my_intermediate_interfaces/srv/detail/start_goal_positions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_intermediate_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_intermediate_interfaces/srv/detail/start_goal_positions__struct.h"
#include "my_intermediate_interfaces/srv/detail/start_goal_positions__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // end_x, end_y, end_z, start_x, start_y, start_z
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // end_x, end_y, end_z, start_x, start_y, start_z

// forward declare type support functions


using _StartGoalPositions_Request__ros_msg_type = my_intermediate_interfaces__srv__StartGoalPositions_Request;

static bool _StartGoalPositions_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StartGoalPositions_Request__ros_msg_type * ros_message = static_cast<const _StartGoalPositions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: start_x
  {
    size_t size = ros_message->start_x.size;
    auto array_ptr = ros_message->start_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: start_y
  {
    size_t size = ros_message->start_y.size;
    auto array_ptr = ros_message->start_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: start_z
  {
    size_t size = ros_message->start_z.size;
    auto array_ptr = ros_message->start_z.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: end_x
  {
    size_t size = ros_message->end_x.size;
    auto array_ptr = ros_message->end_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: end_y
  {
    size_t size = ros_message->end_y.size;
    auto array_ptr = ros_message->end_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: end_z
  {
    size_t size = ros_message->end_z.size;
    auto array_ptr = ros_message->end_z.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _StartGoalPositions_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StartGoalPositions_Request__ros_msg_type * ros_message = static_cast<_StartGoalPositions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: start_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->start_x.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->start_x);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->start_x, size)) {
      fprintf(stderr, "failed to create array for field 'start_x'");
      return false;
    }
    auto array_ptr = ros_message->start_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: start_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->start_y.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->start_y);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->start_y, size)) {
      fprintf(stderr, "failed to create array for field 'start_y'");
      return false;
    }
    auto array_ptr = ros_message->start_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: start_z
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->start_z.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->start_z);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->start_z, size)) {
      fprintf(stderr, "failed to create array for field 'start_z'");
      return false;
    }
    auto array_ptr = ros_message->start_z.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: end_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->end_x.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->end_x);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->end_x, size)) {
      fprintf(stderr, "failed to create array for field 'end_x'");
      return false;
    }
    auto array_ptr = ros_message->end_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: end_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->end_y.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->end_y);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->end_y, size)) {
      fprintf(stderr, "failed to create array for field 'end_y'");
      return false;
    }
    auto array_ptr = ros_message->end_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: end_z
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->end_z.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->end_z);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->end_z, size)) {
      fprintf(stderr, "failed to create array for field 'end_z'");
      return false;
    }
    auto array_ptr = ros_message->end_z.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_intermediate_interfaces
size_t get_serialized_size_my_intermediate_interfaces__srv__StartGoalPositions_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StartGoalPositions_Request__ros_msg_type * ros_message = static_cast<const _StartGoalPositions_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name start_x
  {
    size_t array_size = ros_message->start_x.size;
    auto array_ptr = ros_message->start_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_y
  {
    size_t array_size = ros_message->start_y.size;
    auto array_ptr = ros_message->start_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_z
  {
    size_t array_size = ros_message->start_z.size;
    auto array_ptr = ros_message->start_z.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_x
  {
    size_t array_size = ros_message->end_x.size;
    auto array_ptr = ros_message->end_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_y
  {
    size_t array_size = ros_message->end_y.size;
    auto array_ptr = ros_message->end_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_z
  {
    size_t array_size = ros_message->end_z.size;
    auto array_ptr = ros_message->end_z.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StartGoalPositions_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_intermediate_interfaces__srv__StartGoalPositions_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_intermediate_interfaces
size_t max_serialized_size_my_intermediate_interfaces__srv__StartGoalPositions_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: start_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: start_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: start_z
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: end_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: end_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: end_z
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _StartGoalPositions_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_intermediate_interfaces__srv__StartGoalPositions_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StartGoalPositions_Request = {
  "my_intermediate_interfaces::srv",
  "StartGoalPositions_Request",
  _StartGoalPositions_Request__cdr_serialize,
  _StartGoalPositions_Request__cdr_deserialize,
  _StartGoalPositions_Request__get_serialized_size,
  _StartGoalPositions_Request__max_serialized_size
};

static rosidl_message_type_support_t _StartGoalPositions_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StartGoalPositions_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_intermediate_interfaces, srv, StartGoalPositions_Request)() {
  return &_StartGoalPositions_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "my_intermediate_interfaces/srv/detail/start_goal_positions__struct.h"
// already included above
// #include "my_intermediate_interfaces/srv/detail/start_goal_positions__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "my_intermediate_interfaces/msg/detail/agent_path__functions.h"  // plans

// forward declare type support functions
size_t get_serialized_size_my_intermediate_interfaces__msg__AgentPath(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_my_intermediate_interfaces__msg__AgentPath(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_intermediate_interfaces, msg, AgentPath)();


using _StartGoalPositions_Response__ros_msg_type = my_intermediate_interfaces__srv__StartGoalPositions_Response;

static bool _StartGoalPositions_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StartGoalPositions_Response__ros_msg_type * ros_message = static_cast<const _StartGoalPositions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: plans
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, my_intermediate_interfaces, msg, AgentPath
      )()->data);
    size_t size = ros_message->plans.size;
    auto array_ptr = ros_message->plans.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _StartGoalPositions_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StartGoalPositions_Response__ros_msg_type * ros_message = static_cast<_StartGoalPositions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: plans
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, my_intermediate_interfaces, msg, AgentPath
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->plans.data) {
      my_intermediate_interfaces__msg__AgentPath__Sequence__fini(&ros_message->plans);
    }
    if (!my_intermediate_interfaces__msg__AgentPath__Sequence__init(&ros_message->plans, size)) {
      fprintf(stderr, "failed to create array for field 'plans'");
      return false;
    }
    auto array_ptr = ros_message->plans.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_intermediate_interfaces
size_t get_serialized_size_my_intermediate_interfaces__srv__StartGoalPositions_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StartGoalPositions_Response__ros_msg_type * ros_message = static_cast<const _StartGoalPositions_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name plans
  {
    size_t array_size = ros_message->plans.size;
    auto array_ptr = ros_message->plans.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_my_intermediate_interfaces__msg__AgentPath(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StartGoalPositions_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_intermediate_interfaces__srv__StartGoalPositions_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_intermediate_interfaces
size_t max_serialized_size_my_intermediate_interfaces__srv__StartGoalPositions_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: plans
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_my_intermediate_interfaces__msg__AgentPath(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _StartGoalPositions_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_intermediate_interfaces__srv__StartGoalPositions_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StartGoalPositions_Response = {
  "my_intermediate_interfaces::srv",
  "StartGoalPositions_Response",
  _StartGoalPositions_Response__cdr_serialize,
  _StartGoalPositions_Response__cdr_deserialize,
  _StartGoalPositions_Response__get_serialized_size,
  _StartGoalPositions_Response__max_serialized_size
};

static rosidl_message_type_support_t _StartGoalPositions_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StartGoalPositions_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_intermediate_interfaces, srv, StartGoalPositions_Response)() {
  return &_StartGoalPositions_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_intermediate_interfaces/srv/start_goal_positions.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t StartGoalPositions__callbacks = {
  "my_intermediate_interfaces::srv",
  "StartGoalPositions",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_intermediate_interfaces, srv, StartGoalPositions_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_intermediate_interfaces, srv, StartGoalPositions_Response)(),
};

static rosidl_service_type_support_t StartGoalPositions__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &StartGoalPositions__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_intermediate_interfaces, srv, StartGoalPositions)() {
  return &StartGoalPositions__handle;
}

#if defined(__cplusplus)
}
#endif
