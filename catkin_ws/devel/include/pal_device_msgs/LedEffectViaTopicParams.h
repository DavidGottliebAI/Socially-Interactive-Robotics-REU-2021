// Generated by gencpp from file pal_device_msgs/LedEffectViaTopicParams.msg
// DO NOT EDIT!


#ifndef PAL_DEVICE_MSGS_MESSAGE_LEDEFFECTVIATOPICPARAMS_H
#define PAL_DEVICE_MSGS_MESSAGE_LEDEFFECTVIATOPICPARAMS_H


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
struct LedEffectViaTopicParams_
{
  typedef LedEffectViaTopicParams_<ContainerAllocator> Type;

  LedEffectViaTopicParams_()
    : topic_name()  {
    }
  LedEffectViaTopicParams_(const ContainerAllocator& _alloc)
    : topic_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topic_name_type;
  _topic_name_type topic_name;





  typedef boost::shared_ptr< ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator> const> ConstPtr;

}; // struct LedEffectViaTopicParams_

typedef ::pal_device_msgs::LedEffectViaTopicParams_<std::allocator<void> > LedEffectViaTopicParams;

typedef boost::shared_ptr< ::pal_device_msgs::LedEffectViaTopicParams > LedEffectViaTopicParamsPtr;
typedef boost::shared_ptr< ::pal_device_msgs::LedEffectViaTopicParams const> LedEffectViaTopicParamsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator1> & lhs, const ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator2> & rhs)
{
  return lhs.topic_name == rhs.topic_name;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator1> & lhs, const ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_device_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b38cc2f19f45368c2db7867751ce95a9";
  }

  static const char* value(const ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb38cc2f19f45368cULL;
  static const uint64_t static_value2 = 0x2db7867751ce95a9ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_device_msgs/LedEffectViaTopicParams";
  }

  static const char* value(const ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Topic name, must be of type pal_device_msgs/LedDataArray\n"
"string topic_name\n"
;
  }

  static const char* value(const ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topic_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LedEffectViaTopicParams_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_device_msgs::LedEffectViaTopicParams_<ContainerAllocator>& v)
  {
    s << indent << "topic_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topic_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DEVICE_MSGS_MESSAGE_LEDEFFECTVIATOPICPARAMS_H
