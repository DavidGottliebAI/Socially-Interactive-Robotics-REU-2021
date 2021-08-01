// Generated by gencpp from file pal_detection_msgs/WaveDetection.msg
// DO NOT EDIT!


#ifndef PAL_DETECTION_MSGS_MESSAGE_WAVEDETECTION_H
#define PAL_DETECTION_MSGS_MESSAGE_WAVEDETECTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace pal_detection_msgs
{
template <class ContainerAllocator>
struct WaveDetection_
{
  typedef WaveDetection_<ContainerAllocator> Type;

  WaveDetection_()
    : header()
    , wave(false)
    , u(0)
    , v(0)  {
    }
  WaveDetection_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , wave(false)
    , u(0)
    , v(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _wave_type;
  _wave_type wave;

   typedef int8_t _u_type;
  _u_type u;

   typedef int8_t _v_type;
  _v_type v;





  typedef boost::shared_ptr< ::pal_detection_msgs::WaveDetection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_detection_msgs::WaveDetection_<ContainerAllocator> const> ConstPtr;

}; // struct WaveDetection_

typedef ::pal_detection_msgs::WaveDetection_<std::allocator<void> > WaveDetection;

typedef boost::shared_ptr< ::pal_detection_msgs::WaveDetection > WaveDetectionPtr;
typedef boost::shared_ptr< ::pal_detection_msgs::WaveDetection const> WaveDetectionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_detection_msgs::WaveDetection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_detection_msgs::WaveDetection_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_detection_msgs::WaveDetection_<ContainerAllocator1> & lhs, const ::pal_detection_msgs::WaveDetection_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.wave == rhs.wave &&
    lhs.u == rhs.u &&
    lhs.v == rhs.v;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_detection_msgs::WaveDetection_<ContainerAllocator1> & lhs, const ::pal_detection_msgs::WaveDetection_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_detection_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::WaveDetection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::WaveDetection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::WaveDetection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::WaveDetection_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::WaveDetection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::WaveDetection_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_detection_msgs::WaveDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aa420a347ae2972ab2629dc50442fbb8";
  }

  static const char* value(const ::pal_detection_msgs::WaveDetection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaa420a347ae2972aULL;
  static const uint64_t static_value2 = 0xb2629dc50442fbb8ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_detection_msgs::WaveDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_detection_msgs/WaveDetection";
  }

  static const char* value(const ::pal_detection_msgs::WaveDetection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_detection_msgs::WaveDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"bool wave    #whether a person waving has been detected\n"
"int8 u       #(u, v) are the pixel coordinates where\n"
"int8 v       #the person waving has been detected\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::pal_detection_msgs::WaveDetection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_detection_msgs::WaveDetection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.wave);
      stream.next(m.u);
      stream.next(m.v);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaveDetection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_detection_msgs::WaveDetection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_detection_msgs::WaveDetection_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "wave: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.wave);
    s << indent << "u: ";
    Printer<int8_t>::stream(s, indent + "  ", v.u);
    s << indent << "v: ";
    Printer<int8_t>::stream(s, indent + "  ", v.v);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DETECTION_MSGS_MESSAGE_WAVEDETECTION_H
