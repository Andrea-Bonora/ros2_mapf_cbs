// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_intermediate_interfaces:action/MyComputePathToPose.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__ACTION__DETAIL__MY_COMPUTE_PATH_TO_POSE__BUILDER_HPP_
#define MY_INTERMEDIATE_INTERFACES__ACTION__DETAIL__MY_COMPUTE_PATH_TO_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_intermediate_interfaces
{

namespace action
{

namespace builder
{

class Init_MyComputePathToPose_Goal_use_start
{
public:
  explicit Init_MyComputePathToPose_Goal_use_start(::my_intermediate_interfaces::action::MyComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  ::my_intermediate_interfaces::action::MyComputePathToPose_Goal use_start(::my_intermediate_interfaces::action::MyComputePathToPose_Goal::_use_start_type arg)
  {
    msg_.use_start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_Goal msg_;
};

class Init_MyComputePathToPose_Goal_planner_id
{
public:
  explicit Init_MyComputePathToPose_Goal_planner_id(::my_intermediate_interfaces::action::MyComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  Init_MyComputePathToPose_Goal_use_start planner_id(::my_intermediate_interfaces::action::MyComputePathToPose_Goal::_planner_id_type arg)
  {
    msg_.planner_id = std::move(arg);
    return Init_MyComputePathToPose_Goal_use_start(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_Goal msg_;
};

class Init_MyComputePathToPose_Goal_edge_constraints
{
public:
  explicit Init_MyComputePathToPose_Goal_edge_constraints(::my_intermediate_interfaces::action::MyComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  Init_MyComputePathToPose_Goal_planner_id edge_constraints(::my_intermediate_interfaces::action::MyComputePathToPose_Goal::_edge_constraints_type arg)
  {
    msg_.edge_constraints = std::move(arg);
    return Init_MyComputePathToPose_Goal_planner_id(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_Goal msg_;
};

class Init_MyComputePathToPose_Goal_vertex_constraints
{
public:
  explicit Init_MyComputePathToPose_Goal_vertex_constraints(::my_intermediate_interfaces::action::MyComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  Init_MyComputePathToPose_Goal_edge_constraints vertex_constraints(::my_intermediate_interfaces::action::MyComputePathToPose_Goal::_vertex_constraints_type arg)
  {
    msg_.vertex_constraints = std::move(arg);
    return Init_MyComputePathToPose_Goal_edge_constraints(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_Goal msg_;
};

class Init_MyComputePathToPose_Goal_start
{
public:
  explicit Init_MyComputePathToPose_Goal_start(::my_intermediate_interfaces::action::MyComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  Init_MyComputePathToPose_Goal_vertex_constraints start(::my_intermediate_interfaces::action::MyComputePathToPose_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_MyComputePathToPose_Goal_vertex_constraints(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_Goal msg_;
};

class Init_MyComputePathToPose_Goal_goal
{
public:
  Init_MyComputePathToPose_Goal_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyComputePathToPose_Goal_start goal(::my_intermediate_interfaces::action::MyComputePathToPose_Goal::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_MyComputePathToPose_Goal_start(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::action::MyComputePathToPose_Goal>()
{
  return my_intermediate_interfaces::action::builder::Init_MyComputePathToPose_Goal_goal();
}

}  // namespace my_intermediate_interfaces


namespace my_intermediate_interfaces
{

namespace action
{

namespace builder
{

class Init_MyComputePathToPose_Result_error_code
{
public:
  explicit Init_MyComputePathToPose_Result_error_code(::my_intermediate_interfaces::action::MyComputePathToPose_Result & msg)
  : msg_(msg)
  {}
  ::my_intermediate_interfaces::action::MyComputePathToPose_Result error_code(::my_intermediate_interfaces::action::MyComputePathToPose_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_Result msg_;
};

class Init_MyComputePathToPose_Result_planning_time
{
public:
  explicit Init_MyComputePathToPose_Result_planning_time(::my_intermediate_interfaces::action::MyComputePathToPose_Result & msg)
  : msg_(msg)
  {}
  Init_MyComputePathToPose_Result_error_code planning_time(::my_intermediate_interfaces::action::MyComputePathToPose_Result::_planning_time_type arg)
  {
    msg_.planning_time = std::move(arg);
    return Init_MyComputePathToPose_Result_error_code(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_Result msg_;
};

class Init_MyComputePathToPose_Result_path
{
public:
  Init_MyComputePathToPose_Result_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyComputePathToPose_Result_planning_time path(::my_intermediate_interfaces::action::MyComputePathToPose_Result::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_MyComputePathToPose_Result_planning_time(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::action::MyComputePathToPose_Result>()
{
  return my_intermediate_interfaces::action::builder::Init_MyComputePathToPose_Result_path();
}

}  // namespace my_intermediate_interfaces


namespace my_intermediate_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::action::MyComputePathToPose_Feedback>()
{
  return ::my_intermediate_interfaces::action::MyComputePathToPose_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace my_intermediate_interfaces


namespace my_intermediate_interfaces
{

namespace action
{

namespace builder
{

class Init_MyComputePathToPose_SendGoal_Request_goal
{
public:
  explicit Init_MyComputePathToPose_SendGoal_Request_goal(::my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request goal(::my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request msg_;
};

class Init_MyComputePathToPose_SendGoal_Request_goal_id
{
public:
  Init_MyComputePathToPose_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyComputePathToPose_SendGoal_Request_goal goal_id(::my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MyComputePathToPose_SendGoal_Request_goal(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request>()
{
  return my_intermediate_interfaces::action::builder::Init_MyComputePathToPose_SendGoal_Request_goal_id();
}

}  // namespace my_intermediate_interfaces


namespace my_intermediate_interfaces
{

namespace action
{

namespace builder
{

class Init_MyComputePathToPose_SendGoal_Response_stamp
{
public:
  explicit Init_MyComputePathToPose_SendGoal_Response_stamp(::my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response stamp(::my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response msg_;
};

class Init_MyComputePathToPose_SendGoal_Response_accepted
{
public:
  Init_MyComputePathToPose_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyComputePathToPose_SendGoal_Response_stamp accepted(::my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MyComputePathToPose_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response>()
{
  return my_intermediate_interfaces::action::builder::Init_MyComputePathToPose_SendGoal_Response_accepted();
}

}  // namespace my_intermediate_interfaces


namespace my_intermediate_interfaces
{

namespace action
{

namespace builder
{

class Init_MyComputePathToPose_GetResult_Request_goal_id
{
public:
  Init_MyComputePathToPose_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request goal_id(::my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request>()
{
  return my_intermediate_interfaces::action::builder::Init_MyComputePathToPose_GetResult_Request_goal_id();
}

}  // namespace my_intermediate_interfaces


namespace my_intermediate_interfaces
{

namespace action
{

namespace builder
{

class Init_MyComputePathToPose_GetResult_Response_result
{
public:
  explicit Init_MyComputePathToPose_GetResult_Response_result(::my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response result(::my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response msg_;
};

class Init_MyComputePathToPose_GetResult_Response_status
{
public:
  Init_MyComputePathToPose_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyComputePathToPose_GetResult_Response_result status(::my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MyComputePathToPose_GetResult_Response_result(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response>()
{
  return my_intermediate_interfaces::action::builder::Init_MyComputePathToPose_GetResult_Response_status();
}

}  // namespace my_intermediate_interfaces


namespace my_intermediate_interfaces
{

namespace action
{

namespace builder
{

class Init_MyComputePathToPose_FeedbackMessage_feedback
{
public:
  explicit Init_MyComputePathToPose_FeedbackMessage_feedback(::my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage feedback(::my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage msg_;
};

class Init_MyComputePathToPose_FeedbackMessage_goal_id
{
public:
  Init_MyComputePathToPose_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyComputePathToPose_FeedbackMessage_feedback goal_id(::my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MyComputePathToPose_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage>()
{
  return my_intermediate_interfaces::action::builder::Init_MyComputePathToPose_FeedbackMessage_goal_id();
}

}  // namespace my_intermediate_interfaces

#endif  // MY_INTERMEDIATE_INTERFACES__ACTION__DETAIL__MY_COMPUTE_PATH_TO_POSE__BUILDER_HPP_
