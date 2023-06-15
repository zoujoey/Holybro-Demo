// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mavros_msgs:srv/CommandTOL.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__SRV__DETAIL__COMMAND_TOL__STRUCT_HPP_
#define MAVROS_MSGS__SRV__DETAIL__COMMAND_TOL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mavros_msgs__srv__CommandTOL_Request __attribute__((deprecated))
#else
# define DEPRECATED__mavros_msgs__srv__CommandTOL_Request __declspec(deprecated)
#endif

namespace mavros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CommandTOL_Request_
{
  using Type = CommandTOL_Request_<ContainerAllocator>;

  explicit CommandTOL_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_pitch = 0.0f;
      this->yaw = 0.0f;
      this->latitude = 0.0f;
      this->longitude = 0.0f;
      this->altitude = 0.0f;
    }
  }

  explicit CommandTOL_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_pitch = 0.0f;
      this->yaw = 0.0f;
      this->latitude = 0.0f;
      this->longitude = 0.0f;
      this->altitude = 0.0f;
    }
  }

  // field types and members
  using _min_pitch_type =
    float;
  _min_pitch_type min_pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _latitude_type =
    float;
  _latitude_type latitude;
  using _longitude_type =
    float;
  _longitude_type longitude;
  using _altitude_type =
    float;
  _altitude_type altitude;

  // setters for named parameter idiom
  Type & set__min_pitch(
    const float & _arg)
  {
    this->min_pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__latitude(
    const float & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const float & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__altitude(
    const float & _arg)
  {
    this->altitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mavros_msgs::srv::CommandTOL_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mavros_msgs::srv::CommandTOL_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mavros_msgs::srv::CommandTOL_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mavros_msgs::srv::CommandTOL_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::CommandTOL_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::CommandTOL_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::CommandTOL_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::CommandTOL_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mavros_msgs::srv::CommandTOL_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mavros_msgs::srv::CommandTOL_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mavros_msgs__srv__CommandTOL_Request
    std::shared_ptr<mavros_msgs::srv::CommandTOL_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mavros_msgs__srv__CommandTOL_Request
    std::shared_ptr<mavros_msgs::srv::CommandTOL_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommandTOL_Request_ & other) const
  {
    if (this->min_pitch != other.min_pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommandTOL_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommandTOL_Request_

// alias to use template instance with default allocator
using CommandTOL_Request =
  mavros_msgs::srv::CommandTOL_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mavros_msgs


#ifndef _WIN32
# define DEPRECATED__mavros_msgs__srv__CommandTOL_Response __attribute__((deprecated))
#else
# define DEPRECATED__mavros_msgs__srv__CommandTOL_Response __declspec(deprecated)
#endif

namespace mavros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CommandTOL_Response_
{
  using Type = CommandTOL_Response_<ContainerAllocator>;

  explicit CommandTOL_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->result = 0;
    }
  }

  explicit CommandTOL_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->result = 0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _result_type =
    uint8_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mavros_msgs::srv::CommandTOL_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mavros_msgs::srv::CommandTOL_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mavros_msgs::srv::CommandTOL_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mavros_msgs::srv::CommandTOL_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::CommandTOL_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::CommandTOL_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::CommandTOL_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::CommandTOL_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mavros_msgs::srv::CommandTOL_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mavros_msgs::srv::CommandTOL_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mavros_msgs__srv__CommandTOL_Response
    std::shared_ptr<mavros_msgs::srv::CommandTOL_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mavros_msgs__srv__CommandTOL_Response
    std::shared_ptr<mavros_msgs::srv::CommandTOL_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommandTOL_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommandTOL_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommandTOL_Response_

// alias to use template instance with default allocator
using CommandTOL_Response =
  mavros_msgs::srv::CommandTOL_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mavros_msgs

namespace mavros_msgs
{

namespace srv
{

struct CommandTOL
{
  using Request = mavros_msgs::srv::CommandTOL_Request;
  using Response = mavros_msgs::srv::CommandTOL_Response;
};

}  // namespace srv

}  // namespace mavros_msgs

#endif  // MAVROS_MSGS__SRV__DETAIL__COMMAND_TOL__STRUCT_HPP_
