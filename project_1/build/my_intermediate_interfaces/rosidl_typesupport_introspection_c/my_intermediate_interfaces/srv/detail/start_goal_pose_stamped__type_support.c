// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_intermediate_interfaces:srv/StartGoalPoseStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_intermediate_interfaces/srv/detail/start_goal_pose_stamped__rosidl_typesupport_introspection_c.h"
#include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_intermediate_interfaces/srv/detail/start_goal_pose_stamped__functions.h"
#include "my_intermediate_interfaces/srv/detail/start_goal_pose_stamped__struct.h"


// Include directives for member types
// Member `starts`
// Member `goals`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `starts`
// Member `goals`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__init(message_memory);
}

void my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_fini_function(void * message_memory)
{
  my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__fini(message_memory);
}

size_t my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPoseStamped_Request__starts(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPoseStamped_Request__starts(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPoseStamped_Request__starts(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPoseStamped_Request__starts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__PoseStamped * item =
    ((const geometry_msgs__msg__PoseStamped *)
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPoseStamped_Request__starts(untyped_member, index));
  geometry_msgs__msg__PoseStamped * value =
    (geometry_msgs__msg__PoseStamped *)(untyped_value);
  *value = *item;
}

void my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPoseStamped_Request__starts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__PoseStamped * item =
    ((geometry_msgs__msg__PoseStamped *)
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPoseStamped_Request__starts(untyped_member, index));
  const geometry_msgs__msg__PoseStamped * value =
    (const geometry_msgs__msg__PoseStamped *)(untyped_value);
  *item = *value;
}

bool my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPoseStamped_Request__starts(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

size_t my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPoseStamped_Request__goals(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPoseStamped_Request__goals(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPoseStamped_Request__goals(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPoseStamped_Request__goals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__PoseStamped * item =
    ((const geometry_msgs__msg__PoseStamped *)
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPoseStamped_Request__goals(untyped_member, index));
  geometry_msgs__msg__PoseStamped * value =
    (geometry_msgs__msg__PoseStamped *)(untyped_value);
  *value = *item;
}

void my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPoseStamped_Request__goals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__PoseStamped * item =
    ((geometry_msgs__msg__PoseStamped *)
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPoseStamped_Request__goals(untyped_member, index));
  const geometry_msgs__msg__PoseStamped * value =
    (const geometry_msgs__msg__PoseStamped *)(untyped_value);
  *item = *value;
}

bool my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPoseStamped_Request__goals(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_message_member_array[2] = {
  {
    "starts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__srv__StartGoalPoseStamped_Request, starts),  // bytes offset in struct
    NULL,  // default value
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPoseStamped_Request__starts,  // size() function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPoseStamped_Request__starts,  // get_const(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPoseStamped_Request__starts,  // get(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPoseStamped_Request__starts,  // fetch(index, &value) function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPoseStamped_Request__starts,  // assign(index, value) function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPoseStamped_Request__starts  // resize(index) function pointer
  },
  {
    "goals",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__srv__StartGoalPoseStamped_Request, goals),  // bytes offset in struct
    NULL,  // default value
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPoseStamped_Request__goals,  // size() function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPoseStamped_Request__goals,  // get_const(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPoseStamped_Request__goals,  // get(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPoseStamped_Request__goals,  // fetch(index, &value) function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPoseStamped_Request__goals,  // assign(index, value) function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPoseStamped_Request__goals  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_message_members = {
  "my_intermediate_interfaces__srv",  // message namespace
  "StartGoalPoseStamped_Request",  // message name
  2,  // number of fields
  sizeof(my_intermediate_interfaces__srv__StartGoalPoseStamped_Request),
  my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_message_member_array,  // message members
  my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_message_type_support_handle = {
  0,
  &my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPoseStamped_Request)() {
  my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_message_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_intermediate_interfaces/srv/detail/start_goal_pose_stamped__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_intermediate_interfaces/srv/detail/start_goal_pose_stamped__functions.h"
// already included above
// #include "my_intermediate_interfaces/srv/detail/start_goal_pose_stamped__struct.h"


// Include directives for member types
// Member `plans`
#include "nav_msgs/msg/path.h"
// Member `plans`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__init(message_memory);
}

void my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Response_fini_function(void * message_memory)
{
  my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__fini(message_memory);
}

size_t my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__size_function__StartGoalPoseStamped_Response__plans(
  const void * untyped_member)
{
  const nav_msgs__msg__Path__Sequence * member =
    (const nav_msgs__msg__Path__Sequence *)(untyped_member);
  return member->size;
}

const void * my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__get_const_function__StartGoalPoseStamped_Response__plans(
  const void * untyped_member, size_t index)
{
  const nav_msgs__msg__Path__Sequence * member =
    (const nav_msgs__msg__Path__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__get_function__StartGoalPoseStamped_Response__plans(
  void * untyped_member, size_t index)
{
  nav_msgs__msg__Path__Sequence * member =
    (nav_msgs__msg__Path__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__fetch_function__StartGoalPoseStamped_Response__plans(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const nav_msgs__msg__Path * item =
    ((const nav_msgs__msg__Path *)
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__get_const_function__StartGoalPoseStamped_Response__plans(untyped_member, index));
  nav_msgs__msg__Path * value =
    (nav_msgs__msg__Path *)(untyped_value);
  *value = *item;
}

void my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__assign_function__StartGoalPoseStamped_Response__plans(
  void * untyped_member, size_t index, const void * untyped_value)
{
  nav_msgs__msg__Path * item =
    ((nav_msgs__msg__Path *)
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__get_function__StartGoalPoseStamped_Response__plans(untyped_member, index));
  const nav_msgs__msg__Path * value =
    (const nav_msgs__msg__Path *)(untyped_value);
  *item = *value;
}

bool my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__resize_function__StartGoalPoseStamped_Response__plans(
  void * untyped_member, size_t size)
{
  nav_msgs__msg__Path__Sequence * member =
    (nav_msgs__msg__Path__Sequence *)(untyped_member);
  nav_msgs__msg__Path__Sequence__fini(member);
  return nav_msgs__msg__Path__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Response_message_member_array[1] = {
  {
    "plans",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__srv__StartGoalPoseStamped_Response, plans),  // bytes offset in struct
    NULL,  // default value
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__size_function__StartGoalPoseStamped_Response__plans,  // size() function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__get_const_function__StartGoalPoseStamped_Response__plans,  // get_const(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__get_function__StartGoalPoseStamped_Response__plans,  // get(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__fetch_function__StartGoalPoseStamped_Response__plans,  // fetch(index, &value) function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__assign_function__StartGoalPoseStamped_Response__plans,  // assign(index, value) function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__resize_function__StartGoalPoseStamped_Response__plans  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Response_message_members = {
  "my_intermediate_interfaces__srv",  // message namespace
  "StartGoalPoseStamped_Response",  // message name
  1,  // number of fields
  sizeof(my_intermediate_interfaces__srv__StartGoalPoseStamped_Response),
  my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Response_message_member_array,  // message members
  my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Response_message_type_support_handle = {
  0,
  &my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPoseStamped_Response)() {
  my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  if (!my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Response_message_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_intermediate_interfaces/srv/detail/start_goal_pose_stamped__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_intermediate_interfaces__srv__detail__start_goal_pose_stamped__rosidl_typesupport_introspection_c__StartGoalPoseStamped_service_members = {
  "my_intermediate_interfaces__srv",  // service namespace
  "StartGoalPoseStamped",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_intermediate_interfaces__srv__detail__start_goal_pose_stamped__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_message_type_support_handle,
  NULL  // response message
  // my_intermediate_interfaces__srv__detail__start_goal_pose_stamped__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_intermediate_interfaces__srv__detail__start_goal_pose_stamped__rosidl_typesupport_introspection_c__StartGoalPoseStamped_service_type_support_handle = {
  0,
  &my_intermediate_interfaces__srv__detail__start_goal_pose_stamped__rosidl_typesupport_introspection_c__StartGoalPoseStamped_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPoseStamped_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPoseStamped_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPoseStamped)() {
  if (!my_intermediate_interfaces__srv__detail__start_goal_pose_stamped__rosidl_typesupport_introspection_c__StartGoalPoseStamped_service_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__srv__detail__start_goal_pose_stamped__rosidl_typesupport_introspection_c__StartGoalPoseStamped_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_intermediate_interfaces__srv__detail__start_goal_pose_stamped__rosidl_typesupport_introspection_c__StartGoalPoseStamped_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPoseStamped_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPoseStamped_Response)()->data;
  }

  return &my_intermediate_interfaces__srv__detail__start_goal_pose_stamped__rosidl_typesupport_introspection_c__StartGoalPoseStamped_service_type_support_handle;
}
