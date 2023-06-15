// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mavros_msgs:srv/EndpointAdd.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__SRV__DETAIL__ENDPOINT_ADD__STRUCT_HPP_
#define MAVROS_MSGS__SRV__DETAIL__ENDPOINT_ADD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mavros_msgs__srv__EndpointAdd_Request __attribute__((deprecated))
#else
# define DEPRECATED__mavros_msgs__srv__EndpointAdd_Request __declspec(deprecated)
#endif

namespace mavros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EndpointAdd_Request_
{
  using Type = EndpointAdd_Request_<ContainerAllocator>;

  explicit EndpointAdd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->url = "";
      this->type = 0;
    }
  }

  explicit EndpointAdd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : url(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->url = "";
      this->type = 0;
    }
  }

  // field types and members
  using _url_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _url_type url;
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__url(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->url = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TYPE_FCU =
    0u;
  static constexpr uint8_t TYPE_GCS =
    1u;
  static constexpr uint8_t TYPE_UAS =
    2u;

  // pointer types
  using RawPtr =
    mavros_msgs::srv::EndpointAdd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mavros_msgs::srv::EndpointAdd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mavros_msgs::srv::EndpointAdd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mavros_msgs::srv::EndpointAdd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::EndpointAdd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::EndpointAdd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::EndpointAdd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::EndpointAdd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mavros_msgs::srv::EndpointAdd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mavros_msgs::srv::EndpointAdd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mavros_msgs__srv__EndpointAdd_Request
    std::shared_ptr<mavros_msgs::srv::EndpointAdd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mavros_msgs__srv__EndpointAdd_Request
    std::shared_ptr<mavros_msgs::srv::EndpointAdd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EndpointAdd_Request_ & other) const
  {
    if (this->url != other.url) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const EndpointAdd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EndpointAdd_Request_

// alias to use template instance with default allocator
using EndpointAdd_Request =
  mavros_msgs::srv::EndpointAdd_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t EndpointAdd_Request_<ContainerAllocator>::TYPE_FCU;
template<typename ContainerAllocator>
constexpr uint8_t EndpointAdd_Request_<ContainerAllocator>::TYPE_GCS;
template<typename ContainerAllocator>
constexpr uint8_t EndpointAdd_Request_<ContainerAllocator>::TYPE_UAS;

}  // namespace srv

}  // namespace mavros_msgs


#ifndef _WIN32
# define DEPRECATED__mavros_msgs__srv__EndpointAdd_Response __attribute__((deprecated))
#else
# define DEPRECATED__mavros_msgs__srv__EndpointAdd_Response __declspec(deprecated)
#endif

namespace mavros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EndpointAdd_Response_
{
  using Type = EndpointAdd_Response_<ContainerAllocator>;

  explicit EndpointAdd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->successful = false;
      this->reason = "";
      this->id = 0ul;
    }
  }

  explicit EndpointAdd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->successful = false;
      this->reason = "";
      this->id = 0ul;
    }
  }

  // field types and members
  using _successful_type =
    bool;
  _successful_type successful;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _reason_type reason;
  using _id_type =
    uint32_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__successful(
    const bool & _arg)
  {
    this->successful = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->reason = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mavros_msgs::srv::EndpointAdd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mavros_msgs::srv::EndpointAdd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mavros_msgs::srv::EndpointAdd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mavros_msgs::srv::EndpointAdd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::EndpointAdd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::EndpointAdd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::srv::EndpointAdd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::srv::EndpointAdd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mavros_msgs::srv::EndpointAdd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mavros_msgs::srv::EndpointAdd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mavros_msgs__srv__EndpointAdd_Response
    std::shared_ptr<mavros_msgs::srv::EndpointAdd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mavros_msgs__srv__EndpointAdd_Response
    std::shared_ptr<mavros_msgs::srv::EndpointAdd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EndpointAdd_Response_ & other) const
  {
    if (this->successful != other.successful) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const EndpointAdd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EndpointAdd_Response_

// alias to use template instance with default allocator
using EndpointAdd_Response =
  mavros_msgs::srv::EndpointAdd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mavros_msgs

namespace mavros_msgs
{

namespace srv
{

struct EndpointAdd
{
  using Request = mavros_msgs::srv::EndpointAdd_Request;
  using Response = mavros_msgs::srv::EndpointAdd_Response;
};

}  // namespace srv

}  // namespace mavros_msgs

#endif  // MAVROS_MSGS__SRV__DETAIL__ENDPOINT_ADD__STRUCT_HPP_
