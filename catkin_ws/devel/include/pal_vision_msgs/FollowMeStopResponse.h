// Generated by gencpp from file pal_vision_msgs/FollowMeStopResponse.msg
// DO NOT EDIT!


#ifndef PAL_VISION_MSGS_MESSAGE_FOLLOWMESTOPRESPONSE_H
#define PAL_VISION_MSGS_MESSAGE_FOLLOWMESTOPRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_vision_msgs
{
template <class ContainerAllocator>
struct FollowMeStopResponse_
{
  typedef FollowMeStopResponse_<ContainerAllocator> Type;

  FollowMeStopResponse_()
    {
    }
  FollowMeStopResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator> const> ConstPtr;

}; // struct FollowMeStopResponse_

typedef ::pal_vision_msgs::FollowMeStopResponse_<std::allocator<void> > FollowMeStopResponse;

typedef boost::shared_ptr< ::pal_vision_msgs::FollowMeStopResponse > FollowMeStopResponsePtr;
typedef boost::shared_ptr< ::pal_vision_msgs::FollowMeStopResponse const> FollowMeStopResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace pal_vision_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_vision_msgs/FollowMeStopResponse";
  }

  static const char* value(const ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FollowMeStopResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::pal_vision_msgs::FollowMeStopResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PAL_VISION_MSGS_MESSAGE_FOLLOWMESTOPRESPONSE_H
