// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mavros_msgs:srv/LogRequestData.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_DATA__STRUCT_HPP_
#define MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mavros_msgs__srv__LogRequestData_Request __attribute__((deprecated))
#else
# define DEPRECATED__mavros_msgs__srv__LogRequestData_Request __declspec(deprecated)
#endif

namespace mavros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LogRequestData_Request_
{
  using Type = LogRequestData_Request_<ContainerAllocator>;

  explicit LogRequestData_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->offset = 0ul;
      this->count = 0ul;
    }
  }

  explicit LogRequestData_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->offset = 0ul;
      this->count = 0ul;
    }
  }

  // field types and members
  using _id_type =
    uint16_t;
  _id_type id;
  using _offset_type =
    uint32_t;
  _offset_type offset;
  using _count_type =
    uint32_t;
  _count_type count;

  // setters for named parameter idiom
  Type & set__id(
    const uint16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__offset(
    const uint32_t & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__count(
    const uint32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mavros_msgs::srv::LogRequestData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mavros_msgs::srv::LogRequestData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mavros_msgs::srv::LogRequestData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mavros_msgs::srv::LogRequestData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::LogRequestData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::LogRequestData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::LogRequestData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::LogRequestData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mavros_msgs::srv::LogRequestData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mavros_msgs::srv::LogRequestData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mavros_msgs__srv__LogRequestData_Request
    std::shared_ptr<mavros_msgs::srv::LogRequestData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mavros_msgs__srv__LogRequestData_Request
    std::shared_ptr<mavros_msgs::srv::LogRequestData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LogRequestData_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const LogRequestData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LogRequestData_Request_

// alias to use template instance with default allocator
using LogRequestData_Request =
  mavros_msgs::srv::LogRequestData_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mavros_msgs


#ifndef _WIN32
# define DEPRECATED__mavros_msgs__srv__LogRequestData_Response __attribute__((deprecated))
#else
# define DEPRECATED__mavros_msgs__srv__LogRequestData_Response __declspec(deprecated)
#endif

namespace mavros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LogRequestData_Response_
{
  using Type = LogRequestData_Response_<ContainerAllocator>;

  explicit LogRequestData_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit LogRequestData_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mavros_msgs::srv::LogRequestData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mavros_msgs::srv::LogRequestData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mavros_msgs::srv::LogRequestData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mavros_msgs::srv::LogRequestData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::LogRequestData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::LogRequestData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::LogRequestData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::LogRequestData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mavros_msgs::srv::LogRequestData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mavros_msgs::srv::LogRequestData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mavros_msgs__srv__LogRequestData_Response
    std::shared_ptr<mavros_msgs::srv::LogRequestData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mavros_msgs__srv__LogRequestData_Response
    std::shared_ptr<mavros_msgs::srv::LogRequestData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LogRequestData_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const LogRequestData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LogRequestData_Response_

// alias to use template instance with default allocator
using LogRequestData_Response =
  mavros_msgs::srv::LogRequestData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mavros_msgs

namespace mavros_msgs
{

namespace srv
{

struct LogRequestData
{
  using Request = mavros_msgs::srv::LogRequestData_Request;
  using Response = mavros_msgs::srv::LogRequestData_Response;
};

}  // namespace srv

}  // namespace mavros_msgs

#endif  // MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_DATA__STRUCT_HPP_
