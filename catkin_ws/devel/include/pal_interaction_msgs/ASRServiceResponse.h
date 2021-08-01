// Generated by gencpp from file pal_interaction_msgs/ASRServiceResponse.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_ASRSERVICERESPONSE_H
#define PAL_INTERACTION_MSGS_MESSAGE_ASRSERVICERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <pal_interaction_msgs/ASRSrvResponse.h>

namespace pal_interaction_msgs
{
template <class ContainerAllocator>
struct ASRServiceResponse_
{
  typedef ASRServiceResponse_<ContainerAllocator> Type;

  ASRServiceResponse_()
    : response()  {
    }
  ASRServiceResponse_(const ContainerAllocator& _alloc)
    : response(_alloc)  {
  (void)_alloc;
    }



   typedef  ::pal_interaction_msgs::ASRSrvResponse_<ContainerAllocator>  _response_type;
  _response_type response;





  typedef boost::shared_ptr< ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ASRServiceResponse_

typedef ::pal_interaction_msgs::ASRServiceResponse_<std::allocator<void> > ASRServiceResponse;

typedef boost::shared_ptr< ::pal_interaction_msgs::ASRServiceResponse > ASRServiceResponsePtr;
typedef boost::shared_ptr< ::pal_interaction_msgs::ASRServiceResponse const> ASRServiceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator1> & lhs, const ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.response == rhs.response;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator1> & lhs, const ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_interaction_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ea637128b99766dfe061d621936cbd13";
  }

  static const char* value(const ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xea637128b99766dfULL;
  static const uint64_t static_value2 = 0xe061d621936cbd13ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/ASRServiceResponse";
  }

  static const char* value(const ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/ASRSrvResponse response\n"
"\n"
"\n"
"================================================================================\n"
"MSG: pal_interaction_msgs/ASRSrvResponse\n"
"# The status of the ASR with additional error or warning information\n"
"ASRStatus status\n"
"string error_msg\n"
"string warn_msg\n"
"\n"
"================================================================================\n"
"MSG: pal_interaction_msgs/ASRStatus\n"
"# The status of the ASR\n"
"# if it is active then active=true\n"
"bool active\n"
"\n"
"# the current language \n"
"string language\n"
"\n"
"# the current enabled grammar\n"
"string enabled_grammar\n"
"\n"
"# the current acoustic models\n"
"string acoustic_env\n"
"\n"
"# A description of the audio device the \n"
"# recognizer is taking audio from.\n"
"AudioDeviceDescription device\n"
"\n"
"================================================================================\n"
"MSG: pal_interaction_msgs/AudioDeviceDescription\n"
"# Description of an audio device.\n"
"\n"
"int8 SIGNED = 0\n"
"int8 UNSIGNED = 1\n"
"\n"
"\n"
"# name of the device (usually a portaudio name)\n"
"string device_name\n"
"\n"
"# sample rate of the acquired audio signal\n"
"uint32 sample_rate\n"
"\n"
"# sample size in bits\n"
"int8 sample_size\n"
"\n"
"# format can be SIGNED or UNSIGNED\n"
"int8 format\n"
"\n"
"# buffer size used to acquire data.\n"
"uint16 buffer_size\n"
"\n"
"# number of recorded channels\n"
"int8 number_of_channels\n"
;
  }

  static const char* value(const ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.response);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ASRServiceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_interaction_msgs::ASRServiceResponse_<ContainerAllocator>& v)
  {
    s << indent << "response: ";
    s << std::endl;
    Printer< ::pal_interaction_msgs::ASRSrvResponse_<ContainerAllocator> >::stream(s, indent + "  ", v.response);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_ASRSERVICERESPONSE_H
