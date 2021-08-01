// Generated by gencpp from file pal_device_msgs/LedRainbowParams.msg
// DO NOT EDIT!


#ifndef PAL_DEVICE_MSGS_MESSAGE_LEDRAINBOWPARAMS_H
#define PAL_DEVICE_MSGS_MESSAGE_LEDRAINBOWPARAMS_H


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
struct LedRainbowParams_
{
  typedef LedRainbowParams_<ContainerAllocator> Type;

  LedRainbowParams_()
    : transition_duration()  {
    }
  LedRainbowParams_(const ContainerAllocator& _alloc)
    : transition_duration()  {
  (void)_alloc;
    }



   typedef ros::Duration _transition_duration_type;
  _transition_duration_type transition_duration;





  typedef boost::shared_ptr< ::pal_device_msgs::LedRainbowParams_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_device_msgs::LedRainbowParams_<ContainerAllocator> const> ConstPtr;

}; // struct LedRainbowParams_

typedef ::pal_device_msgs::LedRainbowParams_<std::allocator<void> > LedRainbowParams;

typedef boost::shared_ptr< ::pal_device_msgs::LedRainbowParams > LedRainbowParamsPtr;
typedef boost::shared_ptr< ::pal_device_msgs::LedRainbowParams const> LedRainbowParamsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_device_msgs::LedRainbowParams_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_device_msgs::LedRainbowParams_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_device_msgs::LedRainbowParams_<ContainerAllocator1> & lhs, const ::pal_device_msgs::LedRainbowParams_<ContainerAllocator2> & rhs)
{
  return lhs.transition_duration == rhs.transition_duration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_device_msgs::LedRainbowParams_<ContainerAllocator1> & lhs, const ::pal_device_msgs::LedRainbowParams_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_device_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::LedRainbowParams_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::LedRainbowParams_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::LedRainbowParams_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::LedRainbowParams_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::LedRainbowParams_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::LedRainbowParams_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_device_msgs::LedRainbowParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f44f9582c55f88a544d929daa76e5ae7";
  }

  static const char* value(const ::pal_device_msgs::LedRainbowParams_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf44f9582c55f88a5ULL;
  static const uint64_t static_value2 = 0x44d929daa76e5ae7ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_device_msgs::LedRainbowParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_device_msgs/LedRainbowParams";
  }

  static const char* value(const ::pal_device_msgs::LedRainbowParams_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_device_msgs::LedRainbowParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Time to perform rainbow\n"
"duration transition_duration\n"
;
  }

  static const char* value(const ::pal_device_msgs::LedRainbowParams_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_device_msgs::LedRainbowParams_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.transition_duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LedRainbowParams_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_device_msgs::LedRainbowParams_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_device_msgs::LedRainbowParams_<ContainerAllocator>& v)
  {
    s << indent << "transition_duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.transition_duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DEVICE_MSGS_MESSAGE_LEDRAINBOWPARAMS_H
