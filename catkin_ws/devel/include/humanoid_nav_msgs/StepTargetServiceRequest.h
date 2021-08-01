// Generated by gencpp from file humanoid_nav_msgs/StepTargetServiceRequest.msg
// DO NOT EDIT!


#ifndef HUMANOID_NAV_MSGS_MESSAGE_STEPTARGETSERVICEREQUEST_H
#define HUMANOID_NAV_MSGS_MESSAGE_STEPTARGETSERVICEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <humanoid_nav_msgs/StepTarget.h>

namespace humanoid_nav_msgs
{
template <class ContainerAllocator>
struct StepTargetServiceRequest_
{
  typedef StepTargetServiceRequest_<ContainerAllocator> Type;

  StepTargetServiceRequest_()
    : step()  {
    }
  StepTargetServiceRequest_(const ContainerAllocator& _alloc)
    : step(_alloc)  {
  (void)_alloc;
    }



   typedef  ::humanoid_nav_msgs::StepTarget_<ContainerAllocator>  _step_type;
  _step_type step;





  typedef boost::shared_ptr< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct StepTargetServiceRequest_

typedef ::humanoid_nav_msgs::StepTargetServiceRequest_<std::allocator<void> > StepTargetServiceRequest;

typedef boost::shared_ptr< ::humanoid_nav_msgs::StepTargetServiceRequest > StepTargetServiceRequestPtr;
typedef boost::shared_ptr< ::humanoid_nav_msgs::StepTargetServiceRequest const> StepTargetServiceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator1> & lhs, const ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator2> & rhs)
{
  return lhs.step == rhs.step;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator1> & lhs, const ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace humanoid_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f22cfce442b381849d82602383b052c7";
  }

  static const char* value(const ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf22cfce442b38184ULL;
  static const uint64_t static_value2 = 0x9d82602383b052c7ULL;
};

template<class ContainerAllocator>
struct DataType< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "humanoid_nav_msgs/StepTargetServiceRequest";
  }

  static const char* value(const ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Step target as service:\n"
"humanoid_nav_msgs/StepTarget step\n"
"\n"
"================================================================================\n"
"MSG: humanoid_nav_msgs/StepTarget\n"
"# Target for a single stepping motion of a humanoid's leg\n"
"\n"
"geometry_msgs/Pose2D pose   # step pose as relative offset to last leg\n"
"uint8 leg                   # which leg to use (left/right, see below)\n"
"\n"
"uint8 right=0               # right leg constant\n"
"uint8 left=1                # left leg constant\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose2D\n"
"# Deprecated\n"
"# Please use the full 3D pose.\n"
"\n"
"# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.\n"
"\n"
"# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.\n"
"\n"
"\n"
"# This expresses a position and orientation on a 2D manifold.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 theta\n"
;
  }

  static const char* value(const ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.step);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StepTargetServiceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator>& v)
  {
    s << indent << "step: ";
    s << std::endl;
    Printer< ::humanoid_nav_msgs::StepTarget_<ContainerAllocator> >::stream(s, indent + "  ", v.step);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HUMANOID_NAV_MSGS_MESSAGE_STEPTARGETSERVICEREQUEST_H
