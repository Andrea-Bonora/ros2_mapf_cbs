// Copyright (c) 2018 Intel Corporation
// Copyright (c) 2018 Simbe Robotics
// Copyright (c) 2019 Samsung Research America
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Navigation Strategy based on:
// Brock, O. and Oussama K. (1999). High-Speed Navigation Using
// the Global Dynamic Window Approach. IEEE.
// https://cs.stanford.edu/group/manips/publications/pdfs/Brock_1999_ICRA.pdf

// #define BENCHMARK_TESTING

#include "my_nav2_navfn_planner/my_navfn_planner.hpp"

#include <chrono>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <memory>
#include <string>
#include <vector>

#include "builtin_interfaces/msg/duration.hpp"
#include "my_nav2_navfn_planner/my_navfn.hpp"
#include "nav2_util/costmap.hpp"
#include "nav2_util/node_utils.hpp"
#include "nav2_costmap_2d/cost_values.hpp"

using namespace std::chrono_literals;
using namespace std::chrono;  // NOLINT
using nav2_util::declare_parameter_if_not_declared;
using rcl_interfaces::msg::ParameterType;
using std::placeholders::_1;

namespace my_nav2_navfn_planner
{

MyNavfnPlanner::MyNavfnPlanner()
: tf_(nullptr), costmap_(nullptr)
{
}

MyNavfnPlanner::~MyNavfnPlanner()
{
  RCLCPP_INFO(
    logger_, "Destroying plugin %s of type NavfnPlanner",
    name_.c_str());
}

void
MyNavfnPlanner::configure(
  const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
  std::string name, std::shared_ptr<tf2_ros::Buffer> tf,
  std::shared_ptr<nav2_costmap_2d::Costmap2DROS> costmap_ros)
{
  tf_ = tf;
  name_ = name;
  costmap_ = costmap_ros->getCostmap();
  global_frame_ = costmap_ros->getGlobalFrameID();

  node_ = parent;
  auto node = parent.lock();
  clock_ = node->get_clock();
  logger_ = node->get_logger();

  RCLCPP_INFO(
    logger_, "Configuring plugin %s of type MyNavfnPlanner",
    name_.c_str());

  // Initialize parameters
  // Declare this plugin's parameters
  declare_parameter_if_not_declared(node, name + ".tolerance", rclcpp::ParameterValue(0.5));
  node->get_parameter(name + ".tolerance", tolerance_);
  declare_parameter_if_not_declared(node, name + ".use_astar", rclcpp::ParameterValue(false));
  node->get_parameter(name + ".use_astar", use_astar_);
  declare_parameter_if_not_declared(node, name + ".allow_unknown", rclcpp::ParameterValue(true));
  node->get_parameter(name + ".allow_unknown", allow_unknown_);
  declare_parameter_if_not_declared(
    node, name + ".use_final_approach_orientation", rclcpp::ParameterValue(false));
  node->get_parameter(name + ".use_final_approach_orientation", use_final_approach_orientation_);

  // Create a planner based on the new costmap size
  planner_ = std::make_unique<MyNavFn>(
    costmap_->getSizeInCellsX(),
    costmap_->getSizeInCellsY());
}

void
MyNavfnPlanner::activate()
{
  RCLCPP_INFO(
    logger_, "Activating plugin %s of type NavfnPlanner",
    name_.c_str());
  // Add callback for dynamic parameters
  auto node = node_.lock();
  dyn_params_handler_ = node->add_on_set_parameters_callback(
    std::bind(&MyNavfnPlanner::dynamicParametersCallback, this, _1));
}

void
MyNavfnPlanner::deactivate()
{
  RCLCPP_INFO(
    logger_, "Deactivating plugin %s of type NavfnPlanner",
    name_.c_str());
  dyn_params_handler_.reset();
}

void
MyNavfnPlanner::cleanup()
{
  RCLCPP_INFO(
    logger_, "Cleaning up plugin %s of type NavfnPlanner",
    name_.c_str());
  planner_.reset();
}

nav_msgs::msg::Path MyNavfnPlanner::createPlan(
  const geometry_msgs::msg::PoseStamped & start,
  const geometry_msgs::msg::PoseStamped & goal,
  const std::vector<my_intermediate_interfaces::msg::VertexConstraint> vertex_constraints,
  const std::vector<my_intermediate_interfaces::msg::EdgeConstraint> edge_constraints)
{
#ifdef BENCHMARK_TESTING
  steady_clock::time_point a = steady_clock::now();
#endif

  // Update planner based on the new costmap size
  if (isPlannerOutOfDate()) {
    planner_->setNavArr(
      costmap_->getSizeInCellsX(),
      costmap_->getSizeInCellsY());
  }

  nav_msgs::msg::Path path;

  // Corner case of the start(x,y) = goal(x,y)
  if (start.pose.position.x == goal.pose.position.x &&
    start.pose.position.y == goal.pose.position.y)
  {
    unsigned int mx, my;
    costmap_->worldToMap(start.pose.position.x, start.pose.position.y, mx, my);
    if (costmap_->getCost(mx, my) == nav2_costmap_2d::LETHAL_OBSTACLE) {
      RCLCPP_WARN(logger_, "Failed to create a unique pose path because of obstacles");
      return path;
    }
    path.header.stamp = clock_->now();
    path.header.frame_id = global_frame_;
    geometry_msgs::msg::PoseStamped pose;
    pose.header = path.header;
    pose.pose.position.z = 0.0;

    pose.pose = start.pose;
    // if we have a different start and goal orientation, set the unique path pose to the goal
    // orientation, unless use_final_approach_orientation=true where we need it to be the start
    // orientation to avoid movement from the local planner
    if (start.pose.orientation != goal.pose.orientation && !use_final_approach_orientation_) {
      pose.pose.orientation = goal.pose.orientation;
    }
    path.poses.push_back(pose);
    return path;
  }

  if (!makePlan(start.pose, goal.pose, vertex_constraints, edge_constraints, tolerance_, path)) {
    RCLCPP_WARN(
      logger_, "%s: failed to create plan with "
      "tolerance %.2f.", name_.c_str(), tolerance_);
  }


#ifdef BENCHMARK_TESTING
  steady_clock::time_point b = steady_clock::now();
  duration<double> time_span = duration_cast<duration<double>>(b - a);
  std::cout << "It took " << time_span.count() * 1000 << std::endl;
#endif

  return path;
}

bool
MyNavfnPlanner::isPlannerOutOfDate()
{
  if (!planner_.get() ||
    planner_->nx != static_cast<int>(costmap_->getSizeInCellsX()) ||
    planner_->ny != static_cast<int>(costmap_->getSizeInCellsY()))
  {
    return true;
  }
  return false;
}

bool
MyNavfnPlanner::makePlan(
  const geometry_msgs::msg::Pose & start,
  const geometry_msgs::msg::Pose & goal, 
  const std::vector<my_intermediate_interfaces::msg::VertexConstraint> vertex_constraints,
  const std::vector<my_intermediate_interfaces::msg::EdgeConstraint> edge_constraints,
  double tolerance,
  nav_msgs::msg::Path & plan)
{
  // clear the plan, just in case
  plan.poses.clear();

  plan.header.stamp = clock_->now();
  plan.header.frame_id = global_frame_;

  // TODO(orduno): add checks for start and goal reference frame -- should be in global frame

  double wx = start.position.x;
  double wy = start.position.y;

  RCLCPP_DEBUG(
    logger_, "Making plan from (%.2f,%.2f) to (%.2f,%.2f)",
    start.position.x, start.position.y, goal.position.x, goal.position.y);

  unsigned int mx, my;
  if (!worldToMap(wx, wy, mx, my)) {
    RCLCPP_WARN(
      logger_,
      "Cannot create a plan: the robot's start position is off the global"
      " costmap. Planning will always fail, are you sure"
      " the robot has been properly localized?");
    return false;
  }

  // clear the starting cell within the costmap because we know it can't be an obstacle
  clearRobotCell(mx, my);

  std::unique_lock<nav2_costmap_2d::Costmap2D::mutex_t> lock(*(costmap_->getMutex()));

  // make sure to resize the underlying array that Navfn uses
  planner_->setNavArr(
    costmap_->getSizeInCellsX(),
    costmap_->getSizeInCellsY());

  planner_->setCostmap(costmap_->getCharMap(), true, allow_unknown_);

  lock.unlock();

  int map_start[2];
  map_start[0] = mx;
  map_start[1] = my;

  wx = goal.position.x;
  wy = goal.position.y;

  if (!worldToMap(wx, wy, mx, my)) {
    RCLCPP_WARN(
      logger_,
      "The goal sent to the planner is off the global costmap."
      " Planning will always fail to this goal.");
    return false;
  }

  int map_goal[2];
  map_goal[0] = mx;
  map_goal[1] = my;

  // TODO(orduno): Explain why we are providing 'map_goal' to setStart().
  //               Same for setGoal, seems reversed. Computing backwards?

  planner_->setStart(map_goal);
  planner_->setGoal(map_start);
  if (use_astar_) {
    planner_->calcNavFnAstar();
  } else {
    planner_->calcNavFnDijkstra(true);
  }

  double resolution = costmap_->getResolution();
  geometry_msgs::msg::Pose p, best_pose;

  bool found_legal = false;

  p = goal;
  double potential = getPointPotential(p.position);
  if (potential < POT_HIGH) {
    // Goal is reachable by itself
    best_pose = p;
    found_legal = true;
  } else {
    // Goal is not reachable. Trying to find nearest to the goal
    // reachable point within its tolerance region
    double best_sdist = std::numeric_limits<double>::max();

    p.position.y = goal.position.y - tolerance;
    while (p.position.y <= goal.position.y + tolerance) {
      p.position.x = goal.position.x - tolerance;
      while (p.position.x <= goal.position.x + tolerance) {
        potential = getPointPotential(p.position);
        double sdist = squared_distance(p, goal);
        if (potential < POT_HIGH && sdist < best_sdist) {
          best_sdist = sdist;
          best_pose = p;
          found_legal = true;
        }
        p.position.x += resolution;
      }
      p.position.y += resolution;
    }
  }

  if (found_legal) {
    // extract the plan
    if (getPlanFromPotential(best_pose, vertex_constraints, edge_constraints, plan)) {
      smoothApproachToGoal(best_pose, plan);

      // If use_final_approach_orientation=true, interpolate the last pose orientation from the
      // previous pose to set the orientation to the 'final approach' orientation of the robot so
      // it does not rotate.
      // And deal with corner case of plan of length 1
      if (use_final_approach_orientation_) {
        size_t plan_size = plan.poses.size();
        if (plan_size == 1) {
          plan.poses.back().pose.orientation = start.orientation;
        } else if (plan_size > 1) {
          double dx, dy, theta;
          auto last_pose = plan.poses.back().pose.position;
          auto approach_pose = plan.poses[plan_size - 2].pose.position;
          // Deal with the case of NavFn producing a path with two equal last poses
          if (std::abs(last_pose.x - approach_pose.x) < 0.0001 &&
            std::abs(last_pose.y - approach_pose.y) < 0.0001 && plan_size > 2)
          {
            approach_pose = plan.poses[plan_size - 3].pose.position;
          }
          dx = last_pose.x - approach_pose.x;
          dy = last_pose.y - approach_pose.y;
          theta = atan2(dy, dx);
          plan.poses.back().pose.orientation =
            nav2_util::geometry_utils::orientationAroundZAxis(theta);
        }
      }
    } else {
      RCLCPP_ERROR(
        logger_,
        "Failed to create a plan from potential when a legal"
        " potential was found. This shouldn't happen.");
    }
  }

  return !plan.poses.empty();
}

void
MyNavfnPlanner::smoothApproachToGoal(
  const geometry_msgs::msg::Pose & goal,
  nav_msgs::msg::Path & plan)
{
  // Replace the last pose of the computed path if it's actually further away
  // to the second to last pose than the goal pose.
  if (plan.poses.size() >= 2) {
    auto second_to_last_pose = plan.poses.end()[-2];
    auto last_pose = plan.poses.back();
    if (
      squared_distance(last_pose.pose, second_to_last_pose.pose) >
      squared_distance(goal, second_to_last_pose.pose))
    {
      plan.poses.back().pose = goal;
      return;
    }
  }
  geometry_msgs::msg::PoseStamped goal_copy;
  goal_copy.pose = goal;
  plan.poses.push_back(goal_copy);
}

bool
MyNavfnPlanner::getPlanFromPotential(
  const geometry_msgs::msg::Pose & goal,
  const std::vector<my_intermediate_interfaces::msg::VertexConstraint> vertex_constraints,
  const std::vector<my_intermediate_interfaces::msg::EdgeConstraint> edge_constraints,
  nav_msgs::msg::Path & plan)
{
  // clear the plan, just in case
  plan.poses.clear();

  // Goal should be in global frame
  double wx = goal.position.x;
  double wy = goal.position.y;

  // the potential has already been computed, so we won't update our copy of the costmap
  unsigned int mx, my;
  if (!worldToMap(wx, wy, mx, my)) {
    RCLCPP_WARN(
      logger_,
      "The goal sent to the navfn planner is off the global costmap."
      " Planning will always fail to this goal.");
    return false;
  }

  int map_goal[2];
  map_goal[0] = mx;
  map_goal[1] = my;

  planner_->setStart(map_goal);

  const int & max_cycles = (costmap_->getSizeInCellsX() >= costmap_->getSizeInCellsY()) ?
    (costmap_->getSizeInCellsX() * 4) : (costmap_->getSizeInCellsY() * 4);

  std::vector<std::map<std::string, int>> vert_constr;
  std::vector<std::map<std::string, int>> edge_constr;

  for (const auto& obj : vertex_constraints) {
      double constr_x = obj.cell.pose.position.x;
      double constr_y = obj.cell.pose.position.y;
      unsigned int cx, cy;
      worldToMap(constr_x, constr_y, cx, cy);
      int idx = cy * planner_->nx + cx;
      std::map<std::string, int> object = {{"cell", idx}, {"time_step", obj.time_step}};
      vert_constr.push_back(object);
  }

  for (const auto& obj : edge_constraints) {
      double constr_1_x = obj.cell_from.pose.position.x;
      double constr_1_y = obj.cell_from.pose.position.y;
      double constr_2_x = obj.cell_to.pose.position.x;
      double constr_2_y = obj.cell_to.pose.position.y;
      unsigned int cx1, cx2, cy1, cy2;
      worldToMap(constr_1_x, constr_1_y, cx1, cy1);
      worldToMap(constr_2_x, constr_2_y, cx2, cy2);
      int idx1 = cy1 * planner_->nx + cx1;
      int idx2 = cy2 * planner_->nx + cx2;
      std::map<std::string, int> object = {{"cell_from", idx1}, {"cell_to", idx2}, {"time_step", obj.time_step}};
      edge_constr.push_back(object);
  }

  int path_len = planner_->calcPath(max_cycles, vert_constr, edge_constr);

  if (path_len == 0) {
    return false;
  }

  auto cost = planner_->getLastPathCost();
  RCLCPP_DEBUG(
    logger_,
    "Path found, %d steps, %f cost\n", path_len, cost);

  // extract the plan
  float * x = planner_->getPathX();
  float * y = planner_->getPathY();
  int len = planner_->getPathLen();

  for (int i = len - 1; i >= 0; --i) {
    // convert the plan to world coordinates
    double world_x, world_y;
    mapToWorld(x[i], y[i], world_x, world_y);

    geometry_msgs::msg::PoseStamped pose;
    pose.pose.position.x = world_x;
    pose.pose.position.y = world_y;
    pose.pose.position.z = 0.0;
    pose.pose.orientation.x = 0.0;
    pose.pose.orientation.y = 0.0;
    pose.pose.orientation.z = 0.0;
    pose.pose.orientation.w = 1.0;
    plan.poses.push_back(pose);
  }

  return !plan.poses.empty();
}

double
MyNavfnPlanner::getPointPotential(const geometry_msgs::msg::Point & world_point)
{
  unsigned int mx, my;
  if (!worldToMap(world_point.x, world_point.y, mx, my)) {
    return std::numeric_limits<double>::max();
  }

  unsigned int index = my * planner_->nx + mx;
  return planner_->potarr[index];
}

bool
MyNavfnPlanner::worldToMap(double wx, double wy, unsigned int & mx, unsigned int & my)
{
  if (wx < costmap_->getOriginX() || wy < costmap_->getOriginY()) {
    return false;
  }

  mx = static_cast<int>(
    std::round((wx - costmap_->getOriginX()) / costmap_->getResolution()));
  my = static_cast<int>(
    std::round((wy - costmap_->getOriginY()) / costmap_->getResolution()));

  if (mx < costmap_->getSizeInCellsX() && my < costmap_->getSizeInCellsY()) {
    return true;
  }

  RCLCPP_ERROR(
    logger_,
    "worldToMap failed: mx,my: %d,%d, size_x,size_y: %d,%d", mx, my,
    costmap_->getSizeInCellsX(), costmap_->getSizeInCellsY());

  return false;
}

void
MyNavfnPlanner::mapToWorld(double mx, double my, double & wx, double & wy)
{
  wx = costmap_->getOriginX() + mx * costmap_->getResolution();
  wy = costmap_->getOriginY() + my * costmap_->getResolution();
}

void
MyNavfnPlanner::clearRobotCell(unsigned int mx, unsigned int my)
{
  // TODO(orduno): check usage of this function, might instead be a request to
  //               world_model / map server
  costmap_->setCost(mx, my, nav2_costmap_2d::FREE_SPACE);
}

rcl_interfaces::msg::SetParametersResult
MyNavfnPlanner::dynamicParametersCallback(std::vector<rclcpp::Parameter> parameters)
{
  rcl_interfaces::msg::SetParametersResult result;
  for (auto parameter : parameters) {
    const auto & type = parameter.get_type();
    const auto & name = parameter.get_name();

    if (type == ParameterType::PARAMETER_DOUBLE) {
      if (name == name_ + ".tolerance") {
        tolerance_ = parameter.as_double();
      }
    } else if (type == ParameterType::PARAMETER_BOOL) {
      if (name == name_ + ".use_astar") {
        use_astar_ = parameter.as_bool();
      } else if (name == name_ + ".allow_unknown") {
        allow_unknown_ = parameter.as_bool();
      } else if (name == name_ + ".use_final_approach_orientation") {
        use_final_approach_orientation_ = parameter.as_bool();
      }
    }
  }
  result.successful = true;
  return result;
}

}  // namespace my_nav2_navfn_planner

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(my_nav2_navfn_planner::MyNavfnPlanner, my_nav2_core::MultiAgentGlobalPlanner)
