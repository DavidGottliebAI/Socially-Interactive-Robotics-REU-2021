// Generated by gencpp from file humanoid_nav_msgs/PlanFootstepsBetweenFeetResponse.msg
// DO NOT EDIT!


#ifndef HUMANOID_NAV_MSGS_MESSAGE_PLANFOOTSTEPSBETWEENFEETRESPONSE_H
#define HUMANOID_NAV_MSGS_MESSAGE_PLANFOOTSTEPSBETWEENFEETRESPONSE_H


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
struct PlanFootstepsBetweenFeetResponse_
{
  typedef PlanFootstepsBetweenFeetResponse_<ContainerAllocator> Type;

  PlanFootstepsBetweenFeetResponse_()
    : result(false)
    , footsteps()
    , costs(0.0)
    , final_eps(0.0)
    , planning_time(0.0)
    , expanded_states(0)  {
    }
  PlanFootstepsBetweenFeetResponse_(const ContainerAllocator& _alloc)
    : result(false)
    , footsteps(_alloc)
    , costs(0.0)
    , final_eps(0.0)
    , planning_time(0.0)
    , expanded_states(0)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;

   typedef std::vector< ::humanoid_nav_msgs::StepTarget_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::humanoid_nav_msgs::StepTarget_<ContainerAllocator> >::other >  _footsteps_type;
  _footsteps_type footsteps;

   typedef double _costs_type;
  _costs_type costs;

   typedef double _final_eps_type;
  _final_eps_type final_eps;

   typedef double _planning_time_type;
  _planning_time_type planning_time;

   typedef int64_t _expanded_states_type;
  _expanded_states_type expanded_states;





  typedef boost::shared_ptr< ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PlanFootstepsBetweenFeetResponse_

typedef ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<std::allocator<void> > PlanFootstepsBetweenFeetResponse;

typedef boost::shared_ptr< ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse > PlanFootstepsBetweenFeetResponsePtr;
typedef boost::shared_ptr< ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse const> PlanFootstepsBetweenFeetResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator1> & lhs, const ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result &&
    lhs.footsteps == rhs.footsteps &&
    lhs.costs == rhs.costs &&
    lhs.final_eps == rhs.final_eps &&
    lhs.planning_time == rhs.planning_time &&
    lhs.expanded_states == rhs.expanded_states;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator1> & lhs, const ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace humanoid_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1af07cd1d4ffe34a9a731e87aa13835c";
  }

  static const char* value(const ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1af07cd1d4ffe34aULL;
  static const uint64_t static_value2 = 0x9a731e87aa13835cULL;
};

template<class ContainerAllocator>
struct DataType< ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "humanoid_nav_msgs/PlanFootstepsBetweenFeetResponse";
  }

  static const char* value(const ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool result\n"
"humanoid_nav_msgs/StepTarget[] footsteps\n"
"float64 costs\n"
"float64 final_eps\n"
"float64 planning_time\n"
"int64 expanded_states\n"
"\n"
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

  static const char* value(const ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.footsteps);
      stream.next(m.costs);
      stream.next(m.final_eps);
      stream.next(m.planning_time);
      stream.next(m.expanded_states);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanFootstepsBetweenFeetResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::humanoid_nav_msgs::PlanFootstepsBetweenFeetResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
    s << indent << "footsteps[]" << std::endl;
    for (size_t i = 0; i < v.footsteps.size(); ++i)
    {
      s << indent << "  footsteps[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::humanoid_nav_msgs::StepTarget_<ContainerAllocator> >::stream(s, indent + "    ", v.footsteps[i]);
    }
    s << indent << "costs: ";
    Printer<double>::stream(s, indent + "  ", v.costs);
    s << indent << "final_eps: ";
    Printer<double>::stream(s, indent + "  ", v.final_eps);
    s << indent << "planning_time: ";
    Printer<double>::stream(s, indent + "  ", v.planning_time);
    s << indent << "expanded_states: ";
    Printer<int64_t>::stream(s, indent + "  ", v.expanded_states);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HUMANOID_NAV_MSGS_MESSAGE_PLANFOOTSTEPSBETWEENFEETRESPONSE_H
