// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mavros_msgs:srv/FileRemoveDir.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__SRV__DETAIL__FILE_REMOVE_DIR__STRUCT_HPP_
#define MAVROS_MSGS__SRV__DETAIL__FILE_REMOVE_DIR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mavros_msgs__srv__FileRemoveDir_Request __attribute__((deprecated))
#else
# define DEPRECATED__mavros_msgs__srv__FileRemoveDir_Request __declspec(deprecated)
#endif

namespace mavros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FileRemoveDir_Request_
{
  using Type = FileRemoveDir_Request_<ContainerAllocator>;

  explicit FileRemoveDir_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dir_path = "";
    }
  }

  explicit FileRemoveDir_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dir_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dir_path = "";
    }
  }

  // field types and members
  using _dir_path_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _dir_path_type dir_path;

  // setters for named parameter idiom
  Type & set__dir_path(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->dir_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mavros_msgs::srv::FileRemoveDir_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mavros_msgs::srv::FileRemoveDir_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mavros_msgs::srv::FileRemoveDir_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mavros_msgs::srv::FileRemoveDir_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::FileRemoveDir_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::FileRemoveDir_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::FileRemoveDir_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::FileRemoveDir_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mavros_msgs::srv::FileRemoveDir_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mavros_msgs::srv::FileRemoveDir_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mavros_msgs__srv__FileRemoveDir_Request
    std::shared_ptr<mavros_msgs::srv::FileRemoveDir_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mavros_msgs__srv__FileRemoveDir_Request
    std::shared_ptr<mavros_msgs::srv::FileRemoveDir_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FileRemoveDir_Request_ & other) const
  {
    if (this->dir_path != other.dir_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const FileRemoveDir_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FileRemoveDir_Request_

// alias to use template instance with default allocator
using FileRemoveDir_Request =
  mavros_msgs::srv::FileRemoveDir_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mavros_msgs


#ifndef _WIN32
# define DEPRECATED__mavros_msgs__srv__FileRemoveDir_Response __attribute__((deprecated))
#else
# define DEPRECATED__mavros_msgs__srv__FileRemoveDir_Response __declspec(deprecated)
#endif

namespace mavros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FileRemoveDir_Response_
{
  using Type = FileRemoveDir_Response_<ContainerAllocator>;

  explicit FileRemoveDir_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->r_errno = 0l;
    }
  }

  explicit FileRemoveDir_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mavros_msgs::srv::FileRemoveDir_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mavros_msgs::srv::FileRemoveDir_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mavros_msgs::srv::FileRemoveDir_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mavros_msgs::srv::FileRemoveDir_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::FileRemoveDir_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::FileRemoveDir_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::FileRemoveDir_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::FileRemoveDir_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mavros_msgs::srv::FileRemoveDir_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mavros_msgs::srv::FileRemoveDir_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mavros_msgs__srv__FileRemoveDir_Response
    std::shared_ptr<mavros_msgs::srv::FileRemoveDir_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mavros_msgs__srv__FileRemoveDir_Response
    std::shared_ptr<mavros_msgs::srv::FileRemoveDir_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FileRemoveDir_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->r_errno != other.r_errno) {
      return false;
    }
    return true;
  }
  bool operator!=(const FileRemoveDir_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FileRemoveDir_Response_

// alias to use template instance with default allocator
using FileRemoveDir_Response =
  mavros_msgs::srv::FileRemoveDir_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mavros_msgs

namespace mavros_msgs
{

namespace srv
{

struct FileRemoveDir
{
  using Request = mavros_msgs::srv::FileRemoveDir_Request;
  using Response = mavros_msgs::srv::FileRemoveDir_Response;
};

}  // namespace srv

}  // namespace mavros_msgs

#endif  // MAVROS_MSGS__SRV__DETAIL__FILE_REMOVE_DIR__STRUCT_HPP_
