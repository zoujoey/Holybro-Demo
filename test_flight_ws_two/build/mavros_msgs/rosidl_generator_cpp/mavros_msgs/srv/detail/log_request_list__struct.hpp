// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mavros_msgs:srv/LogRequestList.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_LIST__STRUCT_HPP_
#define MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mavros_msgs__srv__LogRequestList_Request __attribute__((deprecated))
#else
# define DEPRECATED__mavros_msgs__srv__LogRequestList_Request __declspec(deprecated)
#endif

namespace mavros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LogRequestList_Request_
{
  using Type = LogRequestList_Request_<ContainerAllocator>;

  explicit LogRequestList_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start = 0;
      this->end = 0;
    }
  }

  explicit LogRequestList_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start = 0;
      this->end = 0;
    }
  }

  // field types and members
  using _start_type =
    uint16_t;
  _start_type start;
  using _end_type =
    uint16_t;
  _end_type end;

  // setters for named parameter idiom
  Type & set__start(
    const uint16_t & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__end(
    const uint16_t & _arg)
  {
    this->end = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mavros_msgs::srv::LogRequestList_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mavros_msgs::srv::LogRequestList_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mavros_msgs::srv::LogRequestList_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mavros_msgs::srv::LogRequestList_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::LogRequestList_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::LogRequestList_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::LogRequestList_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::LogRequestList_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mavros_msgs::srv::LogRequestList_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mavros_msgs::srv::LogRequestList_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mavros_msgs__srv__LogRequestList_Request
    std::shared_ptr<mavros_msgs::srv::LogRequestList_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mavros_msgs__srv__LogRequestList_Request
    std::shared_ptr<mavros_msgs::srv::LogRequestList_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LogRequestList_Request_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->end != other.end) {
      return false;
    }
    return true;
  }
  bool operator!=(const LogRequestList_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LogRequestList_Request_

// alias to use template instance with default allocator
using LogRequestList_Request =
  mavros_msgs::srv::LogRequestList_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mavros_msgs


#ifndef _WIN32
# define DEPRECATED__mavros_msgs__srv__LogRequestList_Response __attribute__((deprecated))
#else
# define DEPRECATED__mavros_msgs__srv__LogRequestList_Response __declspec(deprecated)
#endif

namespace mavros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LogRequestList_Response_
{
  using Type = LogRequestList_Response_<ContainerAllocator>;

  explicit LogRequestList_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit LogRequestList_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mavros_msgs::srv::LogRequestList_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mavros_msgs::srv::LogRequestList_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mavros_msgs::srv::LogRequestList_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mavros_msgs::srv::LogRequestList_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::LogRequestList_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::LogRequestList_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::LogRequestList_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::LogRequestList_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mavros_msgs::srv::LogRequestList_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mavros_msgs::srv::LogRequestList_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mavros_msgs__srv__LogRequestList_Response
    std::shared_ptr<mavros_msgs::srv::LogRequestList_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mavros_msgs__srv__LogRequestList_Response
    std::shared_ptr<mavros_msgs::srv::LogRequestList_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LogRequestList_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const LogRequestList_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LogRequestList_Response_

// alias to use template instance with default allocator
using LogRequestList_Response =
  mavros_msgs::srv::LogRequestList_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mavros_msgs

namespace mavros_msgs
{

namespace srv
{

struct LogRequestList
{
  using Request = mavros_msgs::srv::LogRequestList_Request;
  using Response = mavros_msgs::srv::LogRequestList_Response;
};

}  // namespace srv

}  // namespace mavros_msgs

#endif  // MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_LIST__STRUCT_HPP_
