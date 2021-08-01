// Generated by gencpp from file pal_device_msgs/DoTimedLedEffectFeedback.msg
// DO NOT EDIT!


#ifndef PAL_DEVICE_MSGS_MESSAGE_DOTIMEDLEDEFFECTFEEDBACK_H
#define PAL_DEVICE_MSGS_MESSAGE_DOTIMEDLEDEFFECTFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_device_msgs
{
template <class ContainerAllocator>
struct DoTimedLedEffectFeedback_
{
  typedef DoTimedLedEffectFeedback_<ContainerAllocator> Type;

  DoTimedLedEffectFeedback_()
    {
    }
  DoTimedLedEffectFeedback_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct DoTimedLedEffectFeedback_

typedef ::pal_device_msgs::DoTimedLedEffectFeedback_<std::allocator<void> > DoTimedLedEffectFeedback;

typedef boost::shared_ptr< ::pal_device_msgs::DoTimedLedEffectFeedback > DoTimedLedEffectFeedbackPtr;
typedef boost::shared_ptr< ::pal_device_msgs::DoTimedLedEffectFeedback const> DoTimedLedEffectFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace pal_device_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_device_msgs/DoTimedLedEffectFeedback";
  }

  static const char* value(const ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
;
  }

  static const char* value(const ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DoTimedLedEffectFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::pal_device_msgs::DoTimedLedEffectFeedback_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DEVICE_MSGS_MESSAGE_DOTIMEDLEDEFFECTFEEDBACK_H
