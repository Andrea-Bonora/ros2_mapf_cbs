// Copyright (c) 2020, Samsung Research America
// Copyright (c) 2020, Applied Electric Vehicles Pty Ltd
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
// limitations under the License. Reserved.

#include "cbs_nav2_smac_planner/node_2d.hpp"

#include <vector>
#include <limits>

namespace cbs_nav2_smac_planner
{

// defining static member for all instance to share
std::vector<int> Node2D::_neighbors_grid_offsets;
float Node2D::cost_travel_multiplier = 2.0;

Node2D::Node2D(const unsigned int index)
: parent(nullptr),
  _cell_cost(std::numeric_limits<float>::quiet_NaN()),
  _accumulated_cost(std::numeric_limits<float>::max()),
  _index(index),
  _was_visited(false),
  _is_queued(false),
  _time_step(-1)
{
}

Node2D::~Node2D()
{
  parent = nullptr;
}

void Node2D::reset()
{
  parent = nullptr;
  _cell_cost = std::numeric_limits<float>::quiet_NaN();
  _accumulated_cost = std::numeric_limits<float>::max();
  _was_visited = false;
  _is_queued = false;
  _time_step = -1;
}

bool Node2D::isNodeValid(
  const bool & traverse_unknown,
  GridCollisionChecker * collision_checker,
  const int time_step,
  const int parent_index,
  const int x_size,
  const std::vector<std::map<std::string, int>> vertex_constraints,
  const std::vector<std::map<std::string, int>> edge_constraints)
{

  int index = this->getIndex();

  if (collision_checker->inCollision(index, traverse_unknown)) {
    return false;
  }

  /*The main modification in the planner. Once an edge or a vertex constraint is encountered then a square of points in the 
  map need to be blocked. The number of cells to block is scenario-dependent since it vary based on the size of the robots.
  */
  int n_cell = 115; //Block a square of 115x115 points in the map
  //Vertex Constraints
  for (const auto& obj : vertex_constraints) {
    int cell_value = obj.at("cell");
    int ts_value = obj.at("time_step");
    if( time_step + 1 == ts_value ){
      //Expand the area of the conflict
      for(int i = -n_cell; i <= n_cell; i++){
        for(int j = -n_cell; j <= n_cell; j++){
          if(index == cell_value + j + (x_size*i))
            return false;
        }
      }
    }
  }

  //Edge Constraints
  for (const auto& obj : edge_constraints) {
        int cell_from_value = obj.at("cell_from");
        int cell_to_value = obj.at("cell_to");
        int ts_value = obj.at("time_step");
        if( time_step == ts_value ){
          //Expand the area of the conflict
          for(int i = -n_cell; i <= n_cell; i++){
            for(int j = -n_cell; j <= n_cell; j++){
              if(index == cell_to_value + j + (x_size*i))
                return false;
            }
          }
        }
  }

  _cell_cost = collision_checker->getCost();
  return true;
}

float Node2D::getTraversalCost(const NodePtr & child)
{
  float normalized_cost = child->getCost() / 252.0;
  const Coordinates A = getCoords(child->getIndex());
  const Coordinates B = getCoords(this->getIndex());
  const float & dx = A.x - B.x;
  const float & dy = A.y - B.y;
  static float sqrt_2 = sqrt(2);

  // If a diagonal move, travel cost is sqrt(2) not 1.0.
  if ((dx * dx + dy * dy) > 1.05) {
    return sqrt_2 * (1.0 + cost_travel_multiplier * normalized_cost);
  }

  // Length = 1.0
  return 1.0 + cost_travel_multiplier * normalized_cost;
}

float Node2D::getHeuristicCost(
  const Coordinates & node_coords,
  const Coordinates & goal_coordinates,
  const nav2_costmap_2d::Costmap2D * /*costmap*/)
{
  // Using Moore distance as it more accurately represents the distances
  // even a Van Neumann neighborhood robot can navigate.
  auto dx = goal_coordinates.x - node_coords.x;
  auto dy = goal_coordinates.y - node_coords.y;
  return std::sqrt(dx * dx + dy * dy);
}

void Node2D::initMotionModel(
  const MotionModel & motion_model,
  unsigned int & x_size_uint,
  unsigned int & /*size_y*/,
  unsigned int & /*num_angle_quantization*/,
  SearchInfo & search_info)
{
  if (motion_model != MotionModel::TWOD) {
    throw std::runtime_error("Invalid motion model for 2D node.");
  }

  int x_size = static_cast<int>(x_size_uint);
  cost_travel_multiplier = search_info.cost_penalty;
  _neighbors_grid_offsets = {-1, +1, -x_size, +x_size, -x_size - 1,
    -x_size + 1, +x_size - 1, +x_size + 1};
}

void Node2D::getNeighbors(
  std::function<bool(const unsigned int &, cbs_nav2_smac_planner::Node2D * &)> & NeighborGetter,
  GridCollisionChecker * collision_checker,
  const bool & traverse_unknown,
  NodeVector & neighbors,
  const int x_size,
  const std::vector<std::map<std::string, int>> vertex_constraints,
  const std::vector<std::map<std::string, int>> edge_constraints)
{
  // NOTE(stevemacenski): Irritatingly, the order here matters. If you start in free
  // space and then expand 8-connected, the first set of neighbors will be all cost
  // 1.0. Then its expansion will all be 2 * 1.0 but now multiple
  // nodes are touching that node so the last cell to update the back pointer wins.
  // Thusly, the ordering ends with the cardinal directions for both sets such that
  // behavior is consistent in large free spaces between them.
  // 100  50   0
  // 100  50  50
  // 100 100 100   where lower-middle '100' is visited with same cost by both bottom '50' nodes
  // Therefore, it is valuable to have some low-potential across the entire map
  // rather than a small inflation around the obstacles
  int index;
  NodePtr neighbor;
  int node_i = this->getIndex();
  const Coordinates parent = getCoords(this->getIndex());
  Coordinates child;
  //RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Index: %d", node_i);
  for (unsigned int i = 0; i != _neighbors_grid_offsets.size(); ++i) {
    index = node_i + _neighbors_grid_offsets[i];

    // Check for wrap around conditions
    child = getCoords(index);
    if (fabs(parent.x - child.x) > 1 || fabs(parent.y - child.y) > 1) {
      continue;
    }

    if (NeighborGetter(index, neighbor)) {
      //Differenyly from the original version here the vertex and edge constraints are included
      if (neighbor->isNodeValid(traverse_unknown, collision_checker, this->getTimeStep(), node_i, x_size, vertex_constraints, edge_constraints)
                 && !neighbor->wasVisited()) {
        neighbors.push_back(neighbor);
      }
    }
  }
}

bool Node2D::backtracePath(CoordinateVector & path)
{
  if (!this->parent) {
    return false;
  }

  NodePtr current_node = this;

  while (current_node->parent) {
    path.push_back(
      Node2D::getCoords(current_node->getIndex()));
    current_node = current_node->parent;
  }

  // add the start pose
  path.push_back(Node2D::getCoords(current_node->getIndex()));

  return true;
}

}  // namespace cbs_nav2_smac_planner
