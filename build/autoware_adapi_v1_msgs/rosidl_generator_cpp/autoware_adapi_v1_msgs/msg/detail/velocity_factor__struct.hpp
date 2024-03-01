// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_adapi_v1_msgs:msg/VelocityFactor.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR__STRUCT_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'cooperation'
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_adapi_v1_msgs__msg__VelocityFactor __attribute__((deprecated))
#else
# define DEPRECATED__autoware_adapi_v1_msgs__msg__VelocityFactor __declspec(deprecated)
#endif

namespace autoware_adapi_v1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelocityFactor_
{
  using Type = VelocityFactor_<ContainerAllocator>;

  explicit VelocityFactor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->status = 0;
      this->behavior = "";
      this->sequence = "";
      this->detail = "";
      this->type = 0;
    }
  }

  explicit VelocityFactor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    behavior(_alloc),
    sequence(_alloc),
    detail(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->status = 0;
      this->behavior = "";
      this->sequence = "";
      this->detail = "";
      this->type = 0;
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _distance_type =
    float;
  _distance_type distance;
  using _status_type =
    uint16_t;
  _status_type status;
  using _behavior_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _behavior_type behavior;
  using _sequence_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _sequence_type sequence;
  using _detail_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _detail_type detail;
  using _cooperation_type =
    rosidl_runtime_cpp::BoundedVector<autoware_adapi_v1_msgs::msg::CooperationStatus_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<autoware_adapi_v1_msgs::msg::CooperationStatus_<ContainerAllocator>>::other>;
  _cooperation_type cooperation;
  using _type_type =
    uint16_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__status(
    const uint16_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__behavior(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->behavior = _arg;
    return *this;
  }
  Type & set__sequence(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->sequence = _arg;
    return *this;
  }
  Type & set__detail(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->detail = _arg;
    return *this;
  }
  Type & set__cooperation(
    const rosidl_runtime_cpp::BoundedVector<autoware_adapi_v1_msgs::msg::CooperationStatus_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<autoware_adapi_v1_msgs::msg::CooperationStatus_<ContainerAllocator>>::other> & _arg)
  {
    this->cooperation = _arg;
    return *this;
  }
  Type & set__type(
    const uint16_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t UNKNOWN =
    0u;
  static constexpr uint16_t APPROACHING =
    1u;
  static constexpr uint16_t STOPPED =
    2u;
  static constexpr uint16_t SURROUNDING_OBSTACLE =
    1u;
  static constexpr uint16_t ROUTE_OBSTACLE =
    2u;
  static constexpr uint16_t INTERSECTION =
    3u;
  static constexpr uint16_t CROSSWALK =
    4u;
  static constexpr uint16_t REAR_CHECK =
    5u;
  static constexpr uint16_t USER_DEFINED_DETECTION_AREA =
    6u;
  static constexpr uint16_t NO_STOPPING_AREA =
    7u;
  static constexpr uint16_t STOP_SIGN =
    8u;
  static constexpr uint16_t TRAFFIC_SIGNAL =
    9u;
  static constexpr uint16_t V2I_GATE_CONTROL_ENTER =
    10u;
  static constexpr uint16_t V2I_GATE_CONTROL_LEAVE =
    11u;
  static constexpr uint16_t MERGE =
    12u;
  static constexpr uint16_t SIDEWALK =
    13u;
  static constexpr uint16_t LANE_CHANGE =
    14u;
  static constexpr uint16_t AVOIDANCE =
    15u;
  static constexpr uint16_t EMERGENCY_STOP_OPERATION =
    16u;
  static constexpr uint16_t NO_DRIVABLE_LANE =
    17u;

  // pointer types
  using RawPtr =
    autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__VelocityFactor
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__VelocityFactor
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelocityFactor_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->behavior != other.behavior) {
      return false;
    }
    if (this->sequence != other.sequence) {
      return false;
    }
    if (this->detail != other.detail) {
      return false;
    }
    if (this->cooperation != other.cooperation) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelocityFactor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelocityFactor_

// alias to use template instance with default allocator
using VelocityFactor =
  autoware_adapi_v1_msgs::msg::VelocityFactor_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::UNKNOWN;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::APPROACHING;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::STOPPED;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::SURROUNDING_OBSTACLE;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::ROUTE_OBSTACLE;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::INTERSECTION;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::CROSSWALK;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::REAR_CHECK;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::USER_DEFINED_DETECTION_AREA;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::NO_STOPPING_AREA;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::STOP_SIGN;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::TRAFFIC_SIGNAL;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::V2I_GATE_CONTROL_ENTER;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::V2I_GATE_CONTROL_LEAVE;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::MERGE;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::SIDEWALK;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::LANE_CHANGE;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::AVOIDANCE;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::EMERGENCY_STOP_OPERATION;
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::NO_DRIVABLE_LANE;

}  // namespace msg

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR__STRUCT_HPP_
