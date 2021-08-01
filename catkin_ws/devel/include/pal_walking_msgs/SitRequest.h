// Generated by gencpp from file pal_walking_msgs/SitRequest.msg
// DO NOT EDIT!


#ifndef PAL_WALKING_MSGS_MESSAGE_SITREQUEST_H
#define PAL_WALKING_MSGS_MESSAGE_SITREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_walking_msgs
{
template <class ContainerAllocator>
struct SitRequest_
{
  typedef SitRequest_<ContainerAllocator> Type;

  SitRequest_()
    : down(false)
    , weight_threshold(0.0)  {
    }
  SitRequest_(const ContainerAllocator& _alloc)
    : down(false)
    , weight_threshold(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _down_type;
  _down_type down;

   typedef double _weight_threshold_type;
  _weight_threshold_type weight_threshold;





  typedef boost::shared_ptr< ::pal_walking_msgs::SitRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_walking_msgs::SitRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SitRequest_

typedef ::pal_walking_msgs::SitRequest_<std::allocator<void> > SitRequest;

typedef boost::shared_ptr< ::pal_walking_msgs::SitRequest > SitRequestPtr;
typedef boost::shared_ptr< ::pal_walking_msgs::SitRequest const> SitRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_walking_msgs::SitRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_walking_msgs::SitRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_walking_msgs::SitRequest_<ContainerAllocator1> & lhs, const ::pal_walking_msgs::SitRequest_<ContainerAllocator2> & rhs)
{
  return lhs.down == rhs.down &&
    lhs.weight_threshold == rhs.weight_threshold;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_walking_msgs::SitRequest_<ContainerAllocator1> & lhs, const ::pal_walking_msgs::SitRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_walking_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_walking_msgs::SitRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_walking_msgs::SitRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_walking_msgs::SitRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_walking_msgs::SitRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_walking_msgs::SitRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_walking_msgs::SitRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_walking_msgs::SitRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ad6dfe9fa0ab9703a36ca371cf15816f";
  }

  static const char* value(const ::pal_walking_msgs::SitRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xad6dfe9fa0ab9703ULL;
  static const uint64_t static_value2 = 0xa36ca371cf15816fULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_walking_msgs::SitRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_walking_msgs/SitRequest";
  }

  static const char* value(const ::pal_walking_msgs::SitRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_walking_msgs::SitRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This service requests that the robot lifts one foot at a specified height\n"
"# The parameters are the side and the height\n"
"\n"
"bool    down\n"
"float64 weight_threshold\n"
;
  }

  static const char* value(const ::pal_walking_msgs::SitRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_walking_msgs::SitRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.down);
      stream.next(m.weight_threshold);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SitRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_walking_msgs::SitRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_walking_msgs::SitRequest_<ContainerAllocator>& v)
  {
    s << indent << "down: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.down);
    s << indent << "weight_threshold: ";
    Printer<double>::stream(s, indent + "  ", v.weight_threshold);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_WALKING_MSGS_MESSAGE_SITREQUEST_H