// Generated by gencpp from file pal_interaction_msgs/AudioPlayActionGoal.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_AUDIOPLAYACTIONGOAL_H
#define PAL_INTERACTION_MSGS_MESSAGE_AUDIOPLAYACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <pal_interaction_msgs/AudioPlayGoal.h>

namespace pal_interaction_msgs
{
template <class ContainerAllocator>
struct AudioPlayActionGoal_
{
  typedef AudioPlayActionGoal_<ContainerAllocator> Type;

  AudioPlayActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  AudioPlayActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::pal_interaction_msgs::AudioPlayGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct AudioPlayActionGoal_

typedef ::pal_interaction_msgs::AudioPlayActionGoal_<std::allocator<void> > AudioPlayActionGoal;

typedef boost::shared_ptr< ::pal_interaction_msgs::AudioPlayActionGoal > AudioPlayActionGoalPtr;
typedef boost::shared_ptr< ::pal_interaction_msgs::AudioPlayActionGoal const> AudioPlayActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator1> & lhs, const ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator1> & lhs, const ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_interaction_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "546a8273dc511cfc51635abe326df129";
  }

  static const char* value(const ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x546a8273dc511cfcULL;
  static const uint64_t static_value2 = 0x51635abe326df129ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/AudioPlayActionGoal";
  }

  static const char* value(const ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"AudioPlayGoal goal\n"
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
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: pal_interaction_msgs/AudioPlayGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"##goal definition\n"
"# absolute path to the file to be recognised.\n"
"# Must be playable with aplay\n"
"string file\n"
"#Priority of the file play, 0 is lowest and 100 is highest priority\n"
"#Lower priority goals might be rejected/aborted in presence of a higher priority\n"
"uint8 priority\n"
;
  }

  static const char* value(const ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AudioPlayActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_interaction_msgs::AudioPlayActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::pal_interaction_msgs::AudioPlayGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_AUDIOPLAYACTIONGOAL_H
