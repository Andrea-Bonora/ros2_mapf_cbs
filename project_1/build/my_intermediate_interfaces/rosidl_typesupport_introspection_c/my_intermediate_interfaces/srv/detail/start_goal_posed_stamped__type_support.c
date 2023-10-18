// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_intermediate_interfaces:srv/StartGoalPosedStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_intermediate_interfaces/srv/detail/start_goal_posed_stamped__rosidl_typesupport_introspection_c.h"
#include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_intermediate_interfaces/srv/detail/start_goal_posed_stamped__functions.h"
#include "my_intermediate_interfaces/srv/detail/start_goal_posed_stamped__struct.h"


// Include directives for member types
// Member `plans`
#include "nav_msgs/msg/path.h"
// Member `plans`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__init(message_memory);
}

void my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Request_fini_function(void * message_memory)
{
  my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__fini(message_memory);
}

size_t my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPosedStamped_Request__plans(
  const void * untyped_member)
{
  const nav_msgs__msg__Path__Sequence * member =
    (const nav_msgs__msg__Path__Sequence *)(untyped_member);
  return member->size;
}

const void * my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPosedStamped_Request__plans(
  const void * untyped_member, size_t index)
{
  const nav_msgs__msg__Path__Sequence * member =
    (const nav_msgs__msg__Path__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPosedStamped_Request__plans(
  void * untyped_member, size_t index)
{
  nav_msgs__msg__Path__Sequence * member =
    (nav_msgs__msg__Path__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPosedStamped_Request__plans(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const nav_msgs__msg__Path * item =
    ((const nav_msgs__msg__Path *)
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPosedStamped_Request__plans(untyped_member, index));
  nav_msgs__msg__Path * value =
    (nav_msgs__msg__Path *)(untyped_value);
  *value = *item;
}

void my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPosedStamped_Request__plans(
  void * untyped_member, size_t index, const void * untyped_value)
{
  nav_msgs__msg__Path * item =
    ((nav_msgs__msg__Path *)
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPosedStamped_Request__plans(untyped_member, index));
  const nav_msgs__msg__Path * value =
    (const nav_msgs__msg__Path *)(untyped_value);
  *item = *value;
}

bool my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPosedStamped_Request__plans(
  void * untyped_member, size_t size)
{
  nav_msgs__msg__Path__Sequence * member =
    (nav_msgs__msg__Path__Sequence *)(untyped_member);
  nav_msgs__msg__Path__Sequence__fini(member);
  return nav_msgs__msg__Path__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Request_message_member_array[1] = {
  {
    "plans",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__srv__StartGoalPosedStamped_Request, plans),  // bytes offset in struct
    NULL,  // default value
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPosedStamped_Request__plans,  // size() function pointer
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPosedStamped_Request__plans,  // get_const(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPosedStamped_Request__plans,  // get(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPosedStamped_Request__plans,  // fetch(index, &value) function pointer
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPosedStamped_Request__plans,  // assign(index, value) function pointer
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPosedStamped_Request__plans  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Request_message_members = {
  "my_intermediate_interfaces__srv",  // message namespace
  "StartGoalPosedStamped_Request",  // message name
  1,  // number of fields
  sizeof(my_intermediate_interfaces__srv__StartGoalPosedStamped_Request),
  my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Request_message_member_array,  // message members
  my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Request_message_type_support_handle = {
  0,
  &my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPosedStamped_Request)() {
  my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  if (!my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Request_message_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_intermediate_interfaces__srv__StartGoalPosedStamped_Request__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_intermediate_interfaces/srv/detail/start_goal_posed_stamped__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_intermediate_interfaces/srv/detail/start_goal_posed_stamped__functions.h"
// already included above
// #include "my_intermediate_interfaces/srv/detail/start_goal_posed_stamped__struct.h"


// Include directives for member types
// Member `collision_free_plans`
// already included above
// #include "nav_msgs/msg/path.h"
// Member `collision_free_plans`
// already included above
// #include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__init(message_memory);
}

void my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Response_fini_function(void * message_memory)
{
  my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__fini(message_memory);
}

size_t my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__size_function__StartGoalPosedStamped_Response__collision_free_plans(
  const void * untyped_member)
{
  const nav_msgs__msg__Path__Sequence * member =
    (const nav_msgs__msg__Path__Sequence *)(untyped_member);
  return member->size;
}

const void * my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__get_const_function__StartGoalPosedStamped_Response__collision_free_plans(
  const void * untyped_member, size_t index)
{
  const nav_msgs__msg__Path__Sequence * member =
    (const nav_msgs__msg__Path__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__get_function__StartGoalPosedStamped_Response__collision_free_plans(
  void * untyped_member, size_t index)
{
  nav_msgs__msg__Path__Sequence * member =
    (nav_msgs__msg__Path__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__fetch_function__StartGoalPosedStamped_Response__collision_free_plans(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const nav_msgs__msg__Path * item =
    ((const nav_msgs__msg__Path *)
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__get_const_function__StartGoalPosedStamped_Response__collision_free_plans(untyped_member, index));
  nav_msgs__msg__Path * value =
    (nav_msgs__msg__Path *)(untyped_value);
  *value = *item;
}

void my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__assign_function__StartGoalPosedStamped_Response__collision_free_plans(
  void * untyped_member, size_t index, const void * untyped_value)
{
  nav_msgs__msg__Path * item =
    ((nav_msgs__msg__Path *)
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__get_function__StartGoalPosedStamped_Response__collision_free_plans(untyped_member, index));
  const nav_msgs__msg__Path * value =
    (const nav_msgs__msg__Path *)(untyped_value);
  *item = *value;
}

bool my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__resize_function__StartGoalPosedStamped_Response__collision_free_plans(
  void * untyped_member, size_t size)
{
  nav_msgs__msg__Path__Sequence * member =
    (nav_msgs__msg__Path__Sequence *)(untyped_member);
  nav_msgs__msg__Path__Sequence__fini(member);
  return nav_msgs__msg__Path__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Response_message_member_array[1] = {
  {
    "collision_free_plans",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__srv__StartGoalPosedStamped_Response, collision_free_plans),  // bytes offset in struct
    NULL,  // default value
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__size_function__StartGoalPosedStamped_Response__collision_free_plans,  // size() function pointer
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__get_const_function__StartGoalPosedStamped_Response__collision_free_plans,  // get_const(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__get_function__StartGoalPosedStamped_Response__collision_free_plans,  // get(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__fetch_function__StartGoalPosedStamped_Response__collision_free_plans,  // fetch(index, &value) function pointer
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__assign_function__StartGoalPosedStamped_Response__collision_free_plans,  // assign(index, value) function pointer
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__resize_function__StartGoalPosedStamped_Response__collision_free_plans  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Response_message_members = {
  "my_intermediate_interfaces__srv",  // message namespace
  "StartGoalPosedStamped_Response",  // message name
  1,  // number of fields
  sizeof(my_intermediate_interfaces__srv__StartGoalPosedStamped_Response),
  my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Response_message_member_array,  // message members
  my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Response_message_type_support_handle = {
  0,
  &my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPosedStamped_Response)() {
  my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  if (!my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Response_message_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_intermediate_interfaces__srv__StartGoalPosedStamped_Response__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_intermediate_interfaces/srv/detail/start_goal_posed_stamped__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_intermediate_interfaces__srv__detail__start_goal_posed_stamped__rosidl_typesupport_introspection_c__StartGoalPosedStamped_service_members = {
  "my_intermediate_interfaces__srv",  // service namespace
  "StartGoalPosedStamped",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_intermediate_interfaces__srv__detail__start_goal_posed_stamped__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Request_message_type_support_handle,
  NULL  // response message
  // my_intermediate_interfaces__srv__detail__start_goal_posed_stamped__rosidl_typesupport_introspection_c__StartGoalPosedStamped_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_intermediate_interfaces__srv__detail__start_goal_posed_stamped__rosidl_typesupport_introspection_c__StartGoalPosedStamped_service_type_support_handle = {
  0,
  &my_intermediate_interfaces__srv__detail__start_goal_posed_stamped__rosidl_typesupport_introspection_c__StartGoalPosedStamped_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPosedStamped_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPosedStamped_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPosedStamped)() {
  if (!my_intermediate_interfaces__srv__detail__start_goal_posed_stamped__rosidl_typesupport_introspection_c__StartGoalPosedStamped_service_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__srv__detail__start_goal_posed_stamped__rosidl_typesupport_introspection_c__StartGoalPosedStamped_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_intermediate_interfaces__srv__detail__start_goal_posed_stamped__rosidl_typesupport_introspection_c__StartGoalPosedStamped_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPosedStamped_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPosedStamped_Response)()->data;
  }

  return &my_intermediate_interfaces__srv__detail__start_goal_posed_stamped__rosidl_typesupport_introspection_c__StartGoalPosedStamped_service_type_support_handle;
}
