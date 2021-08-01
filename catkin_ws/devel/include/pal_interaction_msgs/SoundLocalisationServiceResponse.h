// Generated by gencpp from file pal_interaction_msgs/SoundLocalisationServiceResponse.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_SOUNDLOCALISATIONSERVICERESPONSE_H
#define PAL_INTERACTION_MSGS_MESSAGE_SOUNDLOCALISATIONSERVICERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_interaction_msgs
{
template <class ContainerAllocator>
struct SoundLocalisationServiceResponse_
{
  typedef SoundLocalisationServiceResponse_<ContainerAllocator> Type;

  SoundLocalisationServiceResponse_()
    {
    }
  SoundLocalisationServiceResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SoundLocalisationServiceResponse_

typedef ::pal_interaction_msgs::SoundLocalisationServiceResponse_<std::allocator<void> > SoundLocalisationServiceResponse;

typedef boost::shared_ptr< ::pal_interaction_msgs::SoundLocalisationServiceResponse > SoundLocalisationServiceResponsePtr;
typedef boost::shared_ptr< ::pal_interaction_msgs::SoundLocalisationServiceResponse const> SoundLocalisationServiceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace pal_interaction_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/SoundLocalisationServiceResponse";
  }

  static const char* value(const ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SoundLocalisationServiceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::pal_interaction_msgs::SoundLocalisationServiceResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_SOUNDLOCALISATIONSERVICERESPONSE_H
