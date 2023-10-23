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
// Member `requests`
#include "my_intermediate_interfaces/msg/agent_path_request.h"
// Member `requests`
#include "my_intermediate_interfaces/msg/detail/agent_path_request__rosidl_typesupport_introspection_c.h"

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

size_t my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPoseStamped_Request__requests(
  const void * untyped_member)
{
  const my_intermediate_interfaces__msg__AgentPathRequest__Sequence * member =
    (const my_intermediate_interfaces__msg__AgentPathRequest__Sequence *)(untyped_member);
  return member->size;
}

const void * my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPoseStamped_Request__requests(
  const void * untyped_member, size_t index)
{
  const my_intermediate_interfaces__msg__AgentPathRequest__Sequence * member =
    (const my_intermediate_interfaces__msg__AgentPathRequest__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPoseStamped_Request__requests(
  void * untyped_member, size_t index)
{
  my_intermediate_interfaces__msg__AgentPathRequest__Sequence * member =
    (my_intermediate_interfaces__msg__AgentPathRequest__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPoseStamped_Request__requests(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const my_intermediate_interfaces__msg__AgentPathRequest * item =
    ((const my_intermediate_interfaces__msg__AgentPathRequest *)
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPoseStamped_Request__requests(untyped_member, index));
  my_intermediate_interfaces__msg__AgentPathRequest * value =
    (my_intermediate_interfaces__msg__AgentPathRequest *)(untyped_value);
  *value = *item;
}

void my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPoseStamped_Request__requests(
  void * untyped_member, size_t index, const void * untyped_value)
{
  my_intermediate_interfaces__msg__AgentPathRequest * item =
    ((my_intermediate_interfaces__msg__AgentPathRequest *)
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPoseStamped_Request__requests(untyped_member, index));
  const my_intermediate_interfaces__msg__AgentPathRequest * value =
    (const my_intermediate_interfaces__msg__AgentPathRequest *)(untyped_value);
  *item = *value;
}

bool my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPoseStamped_Request__requests(
  void * untyped_member, size_t size)
{
  my_intermediate_interfaces__msg__AgentPathRequest__Sequence * member =
    (my_intermediate_interfaces__msg__AgentPathRequest__Sequence *)(untyped_member);
  my_intermediate_interfaces__msg__AgentPathRequest__Sequence__fini(member);
  return my_intermediate_interfaces__msg__AgentPathRequest__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_message_member_array[1] = {
  {
    "requests",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__srv__StartGoalPoseStamped_Request, requests),  // bytes offset in struct
    NULL,  // default value
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPoseStamped_Request__requests,  // size() function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPoseStamped_Request__requests,  // get_const(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPoseStamped_Request__requests,  // get(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPoseStamped_Request__requests,  // fetch(index, &value) function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPoseStamped_Request__requests,  // assign(index, value) function pointer
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPoseStamped_Request__requests  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__rosidl_typesupport_introspection_c__StartGoalPoseStamped_Request_message_members = {
  "my_intermediate_interfaces__srv",  // message namespace
  "StartGoalPoseStamped_Request",  // message name
  1,  // number of fields
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
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, msg, AgentPathRequest)();
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
#include "my_intermediate_interfaces/msg/agent_path.h"
// Member `plans`
#include "my_intermediate_interfaces/msg/detail/agent_path__rosidl_typesupport_introspection_c.h"

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
  const my_intermediate_interfaces__msg__AgentPath__Sequence * member =
    (const my_intermediate_interfaces__msg__AgentPath__Sequence *)(untyped_member);
  return member->size;
}

const void * my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__get_const_function__StartGoalPoseStamped_Response__plans(
  const void * untyped_member, size_t index)
{
  const my_intermediate_interfaces__msg__AgentPath__Sequence * member =
    (const my_intermediate_interfaces__msg__AgentPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__get_function__StartGoalPoseStamped_Response__plans(
  void * untyped_member, size_t index)
{
  my_intermediate_interfaces__msg__AgentPath__Sequence * member =
    (my_intermediate_interfaces__msg__AgentPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__fetch_function__StartGoalPoseStamped_Response__plans(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const my_intermediate_interfaces__msg__AgentPath * item =
    ((const my_intermediate_interfaces__msg__AgentPath *)
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__get_const_function__StartGoalPoseStamped_Response__plans(untyped_member, index));
  my_intermediate_interfaces__msg__AgentPath * value =
    (my_intermediate_interfaces__msg__AgentPath *)(untyped_value);
  *value = *item;
}

void my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__assign_function__StartGoalPoseStamped_Response__plans(
  void * untyped_member, size_t index, const void * untyped_value)
{
  my_intermediate_interfaces__msg__AgentPath * item =
    ((my_intermediate_interfaces__msg__AgentPath *)
    my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__get_function__StartGoalPoseStamped_Response__plans(untyped_member, index));
  const my_intermediate_interfaces__msg__AgentPath * value =
    (const my_intermediate_interfaces__msg__AgentPath *)(untyped_value);
  *item = *value;
}

bool my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__rosidl_typesupport_introspection_c__resize_function__StartGoalPoseStamped_Response__plans(
  void * untyped_member, size_t size)
{
  my_intermediate_interfaces__msg__AgentPath__Sequence * member =
    (my_intermediate_interfaces__msg__AgentPath__Sequence *)(untyped_member);
  my_intermediate_interfaces__msg__AgentPath__Sequence__fini(member);
  return my_intermediate_interfaces__msg__AgentPath__Sequence__init(member, size);
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
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, msg, AgentPath)();
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
