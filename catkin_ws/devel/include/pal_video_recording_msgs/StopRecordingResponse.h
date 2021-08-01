// Generated by gencpp from file pal_video_recording_msgs/StopRecordingResponse.msg
// DO NOT EDIT!


#ifndef PAL_VIDEO_RECORDING_MSGS_MESSAGE_STOPRECORDINGRESPONSE_H
#define PAL_VIDEO_RECORDING_MSGS_MESSAGE_STOPRECORDINGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_video_recording_msgs
{
template <class ContainerAllocator>
struct StopRecordingResponse_
{
  typedef StopRecordingResponse_<ContainerAllocator> Type;

  StopRecordingResponse_()
    {
    }
  StopRecordingResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator> const> ConstPtr;

}; // struct StopRecordingResponse_

typedef ::pal_video_recording_msgs::StopRecordingResponse_<std::allocator<void> > StopRecordingResponse;

typedef boost::shared_ptr< ::pal_video_recording_msgs::StopRecordingResponse > StopRecordingResponsePtr;
typedef boost::shared_ptr< ::pal_video_recording_msgs::StopRecordingResponse const> StopRecordingResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace pal_video_recording_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_video_recording_msgs/StopRecordingResponse";
  }

  static const char* value(const ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
;
  }

  static const char* value(const ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StopRecordingResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::pal_video_recording_msgs::StopRecordingResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PAL_VIDEO_RECORDING_MSGS_MESSAGE_STOPRECORDINGRESPONSE_H
