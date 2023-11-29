// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cbs_interfaces:msg/VertexConstraint.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__MSG__DETAIL__VERTEX_CONSTRAINT__BUILDER_HPP_
#define CBS_INTERFACES__MSG__DETAIL__VERTEX_CONSTRAINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cbs_interfaces/msg/detail/vertex_constraint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cbs_interfaces
{

namespace msg
{

namespace builder
{

class Init_VertexConstraint_time_step
{
public:
  explicit Init_VertexConstraint_time_step(::cbs_interfaces::msg::VertexConstraint & msg)
  : msg_(msg)
  {}
  ::cbs_interfaces::msg::VertexConstraint time_step(::cbs_interfaces::msg::VertexConstraint::_time_step_type arg)
  {
    msg_.time_step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cbs_interfaces::msg::VertexConstraint msg_;
};

class Init_VertexConstraint_cell_index
{
public:
  Init_VertexConstraint_cell_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VertexConstraint_time_step cell_index(::cbs_interfaces::msg::VertexConstraint::_cell_index_type arg)
  {
    msg_.cell_index = std::move(arg);
    return Init_VertexConstraint_time_step(msg_);
  }

private:
  ::cbs_interfaces::msg::VertexConstraint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cbs_interfaces::msg::VertexConstraint>()
{
  return cbs_interfaces::msg::builder::Init_VertexConstraint_cell_index();
}

}  // namespace cbs_interfaces

#endif  // CBS_INTERFACES__MSG__DETAIL__VERTEX_CONSTRAINT__BUILDER_HPP_
