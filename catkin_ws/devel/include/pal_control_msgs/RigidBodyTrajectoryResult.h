// Generated by gencpp from file pal_control_msgs/RigidBodyTrajectoryResult.msg
// DO NOT EDIT!


#ifndef PAL_CONTROL_MSGS_MESSAGE_RIGIDBODYTRAJECTORYRESULT_H
#define PAL_CONTROL_MSGS_MESSAGE_RIGIDBODYTRAJECTORYRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_control_msgs
{
template <class ContainerAllocator>
struct RigidBodyTrajectoryResult_
{
  typedef RigidBodyTrajectoryResult_<ContainerAllocator> Type;

  RigidBodyTrajectoryResult_()
    : message()  {
    }
  RigidBodyTrajectoryResult_(const ContainerAllocator& _alloc)
    : message(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator> const> ConstPtr;

}; // struct RigidBodyTrajectoryResult_

typedef ::pal_control_msgs::RigidBodyTrajectoryResult_<std::allocator<void> > RigidBodyTrajectoryResult;

typedef boost::shared_ptr< ::pal_control_msgs::RigidBodyTrajectoryResult > RigidBodyTrajectoryResultPtr;
typedef boost::shared_ptr< ::pal_control_msgs::RigidBodyTrajectoryResult const> RigidBodyTrajectoryResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator1> & lhs, const ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator2> & rhs)
{
  return lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator1> & lhs, const ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5f003d6bcc824cbd51361d66d8e4f76c";
  }

  static const char* value(const ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5f003d6bcc824cbdULL;
  static const uint64_t static_value2 = 0x51361d66d8e4f76cULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_control_msgs/RigidBodyTrajectoryResult";
  }

  static const char* value(const ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"string      message\n"
;
  }

  static const char* value(const ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RigidBodyTrajectoryResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_control_msgs::RigidBodyTrajectoryResult_<ContainerAllocator>& v)
  {
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_CONTROL_MSGS_MESSAGE_RIGIDBODYTRAJECTORYRESULT_H
