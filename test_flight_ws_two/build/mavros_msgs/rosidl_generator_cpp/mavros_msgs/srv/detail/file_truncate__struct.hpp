// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mavros_msgs:srv/FileTruncate.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__SRV__DETAIL__FILE_TRUNCATE__STRUCT_HPP_
#define MAVROS_MSGS__SRV__DETAIL__FILE_TRUNCATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mavros_msgs__srv__FileTruncate_Request __attribute__((deprecated))
#else
# define DEPRECATED__mavros_msgs__srv__FileTruncate_Request __declspec(deprecated)
#endif

namespace mavros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FileTruncate_Request_
{
  using Type = FileTruncate_Request_<ContainerAllocator>;

  explicit FileTruncate_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_path = "";
      this->length = 0ull;
    }
  }

  explicit FileTruncate_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_path = "";
      this->length = 0ull;
    }
  }

  // field types and members
  using _file_path_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _file_path_type file_path;
  using _length_type =
    uint64_t;
  _length_type length;

  // setters for named parameter idiom
  Type & set__file_path(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->file_path = _arg;
    return *this;
  }
  Type & set__length(
    const uint64_t & _arg)
  {
    this->length = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mavros_msgs::srv::FileTruncate_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mavros_msgs::srv::FileTruncate_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mavros_msgs::srv::FileTruncate_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mavros_msgs::srv::FileTruncate_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::FileTruncate_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::FileTruncate_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::FileTruncate_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::FileTruncate_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mavros_msgs::srv::FileTruncate_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mavros_msgs::srv::FileTruncate_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mavros_msgs__srv__FileTruncate_Request
    std::shared_ptr<mavros_msgs::srv::FileTruncate_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mavros_msgs__srv__FileTruncate_Request
    std::shared_ptr<mavros_msgs::srv::FileTruncate_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FileTruncate_Request_ & other) const
  {
    if (this->file_path != other.file_path) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    return true;
  }
  bool operator!=(const FileTruncate_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FileTruncate_Request_

// alias to use template instance with default allocator
using FileTruncate_Request =
  mavros_msgs::srv::FileTruncate_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mavros_msgs


#ifndef _WIN32
# define DEPRECATED__mavros_msgs__srv__FileTruncate_Response __attribute__((deprecated))
#else
# define DEPRECATED__mavros_msgs__srv__FileTruncate_Response __declspec(deprecated)
#endif

namespace mavros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FileTruncate_Response_
{
  using Type = FileTruncate_Response_<ContainerAllocator>;

  explicit FileTruncate_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->r_errno = 0l;
    }
  }

  explicit FileTruncate_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->r_errno = 0l;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _r_errno_type =
    int32_t;
  _r_errno_type r_errno;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__r_errno(
    const int32_t & _arg)
  {
    this->r_errno = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mavros_msgs::srv::FileTruncate_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mavros_msgs::srv::FileTruncate_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mavros_msgs::srv::FileTruncate_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mavros_msgs::srv::FileTruncate_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::FileTruncate_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::FileTruncate_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::FileTruncate_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::FileTruncate_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mavros_msgs::srv::FileTruncate_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mavros_msgs::srv::FileTruncate_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mavros_msgs__srv__FileTruncate_Response
    std::shared_ptr<mavros_msgs::srv::FileTruncate_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mavros_msgs__srv__FileTruncate_Response
    std::shared_ptr<mavros_msgs::srv::FileTruncate_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FileTruncate_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->r_errno != other.r_errno) {
      return false;
    }
    return true;
  }
  bool operator!=(const FileTruncate_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FileTruncate_Response_

// alias to use template instance with default allocator
using FileTruncate_Response =
  mavros_msgs::srv::FileTruncate_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mavros_msgs

namespace mavros_msgs
{

namespace srv
{

struct FileTruncate
{
  using Request = mavros_msgs::srv::FileTruncate_Request;
  using Response = mavros_msgs::srv::FileTruncate_Response;
};

}  // namespace srv

}  // namespace mavros_msgs

#endif  // MAVROS_MSGS__SRV__DETAIL__FILE_TRUNCATE__STRUCT_HPP_
