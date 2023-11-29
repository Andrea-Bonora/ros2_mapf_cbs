// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cbs_interfaces:action/ComputePathToPoseCBS.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_TO_POSE_CBS__BUILDER_HPP_
#define CBS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_TO_POSE_CBS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cbs_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputePathToPoseCBS_Goal_use_start
{
public:
  explicit Init_ComputePathToPoseCBS_Goal_use_start(::cbs_interfaces::action::ComputePathToPoseCBS_Goal & msg)
  : msg_(msg)
  {}
  ::cbs_interfaces::action::ComputePathToPoseCBS_Goal use_start(::cbs_interfaces::action::ComputePathToPoseCBS_Goal::_use_start_type arg)
  {
    msg_.use_start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_Goal msg_;
};

class Init_ComputePathToPoseCBS_Goal_planner_id
{
public:
  explicit Init_ComputePathToPoseCBS_Goal_planner_id(::cbs_interfaces::action::ComputePathToPoseCBS_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPoseCBS_Goal_use_start planner_id(::cbs_interfaces::action::ComputePathToPoseCBS_Goal::_planner_id_type arg)
  {
    msg_.planner_id = std::move(arg);
    return Init_ComputePathToPoseCBS_Goal_use_start(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_Goal msg_;
};

class Init_ComputePathToPoseCBS_Goal_edge_constraints
{
public:
  explicit Init_ComputePathToPoseCBS_Goal_edge_constraints(::cbs_interfaces::action::ComputePathToPoseCBS_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPoseCBS_Goal_planner_id edge_constraints(::cbs_interfaces::action::ComputePathToPoseCBS_Goal::_edge_constraints_type arg)
  {
    msg_.edge_constraints = std::move(arg);
    return Init_ComputePathToPoseCBS_Goal_planner_id(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_Goal msg_;
};

class Init_ComputePathToPoseCBS_Goal_vertex_constraints
{
public:
  explicit Init_ComputePathToPoseCBS_Goal_vertex_constraints(::cbs_interfaces::action::ComputePathToPoseCBS_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPoseCBS_Goal_edge_constraints vertex_constraints(::cbs_interfaces::action::ComputePathToPoseCBS_Goal::_vertex_constraints_type arg)
  {
    msg_.vertex_constraints = std::move(arg);
    return Init_ComputePathToPoseCBS_Goal_edge_constraints(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_Goal msg_;
};

class Init_ComputePathToPoseCBS_Goal_start
{
public:
  explicit Init_ComputePathToPoseCBS_Goal_start(::cbs_interfaces::action::ComputePathToPoseCBS_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPoseCBS_Goal_vertex_constraints start(::cbs_interfaces::action::ComputePathToPoseCBS_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_ComputePathToPoseCBS_Goal_vertex_constraints(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_Goal msg_;
};

class Init_ComputePathToPoseCBS_Goal_goal
{
public:
  Init_ComputePathToPoseCBS_Goal_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPoseCBS_Goal_start goal(::cbs_interfaces::action::ComputePathToPoseCBS_Goal::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_ComputePathToPoseCBS_Goal_start(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cbs_interfaces::action::ComputePathToPoseCBS_Goal>()
{
  return cbs_interfaces::action::builder::Init_ComputePathToPoseCBS_Goal_goal();
}

}  // namespace cbs_interfaces


namespace cbs_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputePathToPoseCBS_Result_error_code
{
public:
  explicit Init_ComputePathToPoseCBS_Result_error_code(::cbs_interfaces::action::ComputePathToPoseCBS_Result & msg)
  : msg_(msg)
  {}
  ::cbs_interfaces::action::ComputePathToPoseCBS_Result error_code(::cbs_interfaces::action::ComputePathToPoseCBS_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_Result msg_;
};

class Init_ComputePathToPoseCBS_Result_planning_time
{
public:
  explicit Init_ComputePathToPoseCBS_Result_planning_time(::cbs_interfaces::action::ComputePathToPoseCBS_Result & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPoseCBS_Result_error_code planning_time(::cbs_interfaces::action::ComputePathToPoseCBS_Result::_planning_time_type arg)
  {
    msg_.planning_time = std::move(arg);
    return Init_ComputePathToPoseCBS_Result_error_code(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_Result msg_;
};

class Init_ComputePathToPoseCBS_Result_path
{
public:
  Init_ComputePathToPoseCBS_Result_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPoseCBS_Result_planning_time path(::cbs_interfaces::action::ComputePathToPoseCBS_Result::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_ComputePathToPoseCBS_Result_planning_time(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cbs_interfaces::action::ComputePathToPoseCBS_Result>()
{
  return cbs_interfaces::action::builder::Init_ComputePathToPoseCBS_Result_path();
}

}  // namespace cbs_interfaces


namespace cbs_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cbs_interfaces::action::ComputePathToPoseCBS_Feedback>()
{
  return ::cbs_interfaces::action::ComputePathToPoseCBS_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace cbs_interfaces


namespace cbs_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputePathToPoseCBS_SendGoal_Request_goal
{
public:
  explicit Init_ComputePathToPoseCBS_SendGoal_Request_goal(::cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Request goal(::cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Request msg_;
};

class Init_ComputePathToPoseCBS_SendGoal_Request_goal_id
{
public:
  Init_ComputePathToPoseCBS_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPoseCBS_SendGoal_Request_goal goal_id(::cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ComputePathToPoseCBS_SendGoal_Request_goal(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Request>()
{
  return cbs_interfaces::action::builder::Init_ComputePathToPoseCBS_SendGoal_Request_goal_id();
}

}  // namespace cbs_interfaces


namespace cbs_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputePathToPoseCBS_SendGoal_Response_stamp
{
public:
  explicit Init_ComputePathToPoseCBS_SendGoal_Response_stamp(::cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Response stamp(::cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Response msg_;
};

class Init_ComputePathToPoseCBS_SendGoal_Response_accepted
{
public:
  Init_ComputePathToPoseCBS_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPoseCBS_SendGoal_Response_stamp accepted(::cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ComputePathToPoseCBS_SendGoal_Response_stamp(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Response>()
{
  return cbs_interfaces::action::builder::Init_ComputePathToPoseCBS_SendGoal_Response_accepted();
}

}  // namespace cbs_interfaces


namespace cbs_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputePathToPoseCBS_GetResult_Request_goal_id
{
public:
  Init_ComputePathToPoseCBS_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Request goal_id(::cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Request>()
{
  return cbs_interfaces::action::builder::Init_ComputePathToPoseCBS_GetResult_Request_goal_id();
}

}  // namespace cbs_interfaces


namespace cbs_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputePathToPoseCBS_GetResult_Response_result
{
public:
  explicit Init_ComputePathToPoseCBS_GetResult_Response_result(::cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Response result(::cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Response msg_;
};

class Init_ComputePathToPoseCBS_GetResult_Response_status
{
public:
  Init_ComputePathToPoseCBS_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPoseCBS_GetResult_Response_result status(::cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ComputePathToPoseCBS_GetResult_Response_result(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Response>()
{
  return cbs_interfaces::action::builder::Init_ComputePathToPoseCBS_GetResult_Response_status();
}

}  // namespace cbs_interfaces


namespace cbs_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputePathToPoseCBS_FeedbackMessage_feedback
{
public:
  explicit Init_ComputePathToPoseCBS_FeedbackMessage_feedback(::cbs_interfaces::action::ComputePathToPoseCBS_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::cbs_interfaces::action::ComputePathToPoseCBS_FeedbackMessage feedback(::cbs_interfaces::action::ComputePathToPoseCBS_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_FeedbackMessage msg_;
};

class Init_ComputePathToPoseCBS_FeedbackMessage_goal_id
{
public:
  Init_ComputePathToPoseCBS_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPoseCBS_FeedbackMessage_feedback goal_id(::cbs_interfaces::action::ComputePathToPoseCBS_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ComputePathToPoseCBS_FeedbackMessage_feedback(msg_);
  }

private:
  ::cbs_interfaces::action::ComputePathToPoseCBS_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cbs_interfaces::action::ComputePathToPoseCBS_FeedbackMessage>()
{
  return cbs_interfaces::action::builder::Init_ComputePathToPoseCBS_FeedbackMessage_goal_id();
}

}  // namespace cbs_interfaces

#endif  // CBS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_TO_POSE_CBS__BUILDER_HPP_
