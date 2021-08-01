// Generated by gencpp from file pal_device_msgs/DoTimedLedEffectActionGoal.msg
// DO NOT EDIT!


#ifndef PAL_DEVICE_MSGS_MESSAGE_DOTIMEDLEDEFFECTACTIONGOAL_H
#define PAL_DEVICE_MSGS_MESSAGE_DOTIMEDLEDEFFECTACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <pal_device_msgs/DoTimedLedEffectGoal.h>

namespace pal_device_msgs
{
template <class ContainerAllocator>
struct DoTimedLedEffectActionGoal_
{
  typedef DoTimedLedEffectActionGoal_<ContainerAllocator> Type;

  DoTimedLedEffectActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  DoTimedLedEffectActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::pal_device_msgs::DoTimedLedEffectGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct DoTimedLedEffectActionGoal_

typedef ::pal_device_msgs::DoTimedLedEffectActionGoal_<std::allocator<void> > DoTimedLedEffectActionGoal;

typedef boost::shared_ptr< ::pal_device_msgs::DoTimedLedEffectActionGoal > DoTimedLedEffectActionGoalPtr;
typedef boost::shared_ptr< ::pal_device_msgs::DoTimedLedEffectActionGoal const> DoTimedLedEffectActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator1> & lhs, const ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator1> & lhs, const ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_device_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c967d8ff7a3d2fc9fa1fa55a3b65a68d";
  }

  static const char* value(const ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc967d8ff7a3d2fc9ULL;
  static const uint64_t static_value2 = 0xfa1fa55a3b65a68dULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_device_msgs/DoTimedLedEffectActionGoal";
  }

  static const char* value(const ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"DoTimedLedEffectGoal goal\n"
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
"MSG: pal_device_msgs/DoTimedLedEffectGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#uint16 because uint8 is char[] in Python\n"
"uint32[] devices\n"
"\n"
"#Contains parameters for all led effects, but only the selected effect type parameters shall be provided\n"
"LedEffectParams params\n"
"#Duration of the effect, when the time is over the previous effect will be restored. 0 will make it display forever\n"
"duration effectDuration\n"
"\n"
"#priority of the effect, 0 is no priority, 255 is max priority\n"
"uint8 priority\n"
"\n"
"================================================================================\n"
"MSG: pal_device_msgs/LedEffectParams\n"
"uint8 FIXED_COLOR=0\n"
"uint8 RAINBOW=1\n"
"uint8 FADE=2\n"
"uint8 BLINK=3\n"
"uint8 PROGRESS=4\n"
"uint8 FLOW=5\n"
"uint8 PREPROGRAMMED_EFFECT=6\n"
"uint8 EFFECT_VIA_TOPIC=7\n"
"uint8 DATA_ARRAY=8\n"
"\n"
"uint8 effectType\n"
"\n"
"# RGBA of color, alpha will be used as intensity if supported by the led\n"
"pal_device_msgs/LedFixedColorParams fixed_color\n"
"pal_device_msgs/LedRainbowParams rainbow\n"
"pal_device_msgs/LedFadeParams fade\n"
"pal_device_msgs/LedBlinkParams blink\n"
"pal_device_msgs/LedProgressParams progress\n"
"pal_device_msgs/LedFlowParams flow\n"
"#Below are device specific, avoid them if you can\n"
"pal_device_msgs/LedPreProgrammedParams preprogrammed\n"
"pal_device_msgs/LedEffectViaTopicParams effect_via_topic\n"
"pal_device_msgs/LedDataArrayParams data_array\n"
"\n"
"================================================================================\n"
"MSG: pal_device_msgs/LedFixedColorParams\n"
"# RGBA of color, alpha will be used as intensity if supported by the led\n"
"std_msgs/ColorRGBA color\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/ColorRGBA\n"
"float32 r\n"
"float32 g\n"
"float32 b\n"
"float32 a\n"
"\n"
"================================================================================\n"
"MSG: pal_device_msgs/LedRainbowParams\n"
"# Time to perform rainbow\n"
"duration transition_duration\n"
"\n"
"================================================================================\n"
"MSG: pal_device_msgs/LedFadeParams\n"
"# RGBA of color, alpha will be used as intensity if supported by the led\n"
"std_msgs/ColorRGBA first_color\n"
"std_msgs/ColorRGBA second_color\n"
"\n"
"#Duration of the transition from one color to the other\n"
"duration transition_duration\n"
"\n"
"#Perform a fade when going from secondColor to firstColor\n"
"bool reverse_fade\n"
"\n"
"\n"
"================================================================================\n"
"MSG: pal_device_msgs/LedBlinkParams\n"
"# RGBA of color, alpha will be used as intensity if supported by the led\n"
"std_msgs/ColorRGBA first_color\n"
"std_msgs/ColorRGBA second_color\n"
"\n"
"duration first_color_duration\n"
"duration second_color_duration\n"
"\n"
"\n"
"================================================================================\n"
"MSG: pal_device_msgs/LedProgressParams\n"
"# RGBA of color, alpha will be used as intensity if supported by the led\n"
"std_msgs/ColorRGBA first_color\n"
"std_msgs/ColorRGBA second_color\n"
"\n"
"#Percentage of pixels painted with the first color\n"
"float32 percentage\n"
"#Offset to begin painting the first color\n"
"float32 led_offset \n"
"\n"
"\n"
"================================================================================\n"
"MSG: pal_device_msgs/LedFlowParams\n"
"# RGBA of color, alpha will be used as intensity if supported by the led\n"
"std_msgs/ColorRGBA first_color\n"
"std_msgs/ColorRGBA second_color\n"
"\n"
"# Percentage of pixels painted with the first color\n"
"float32 percentage\n"
"# Flow velocity\n"
"float32 velocity\n"
"\n"
"\n"
"================================================================================\n"
"MSG: pal_device_msgs/LedPreProgrammedParams\n"
"#Id of pre-programmed effect, most likely device specific\n"
"uint8 preprogrammed_id\n"
"\n"
"================================================================================\n"
"MSG: pal_device_msgs/LedEffectViaTopicParams\n"
"#Topic name, must be of type pal_device_msgs/LedDataArray\n"
"string topic_name\n"
"\n"
"================================================================================\n"
"MSG: pal_device_msgs/LedDataArrayParams\n"
"#Data of the effect, each element in the array represents a led, \n"
"#length should match device led count\n"
"#For devices with no RGB option, just the alpha channel will be used\n"
"std_msgs/ColorRGBA[] data\n"
;
  }

  static const char* value(const ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DoTimedLedEffectActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_device_msgs::DoTimedLedEffectActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::pal_device_msgs::DoTimedLedEffectGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DEVICE_MSGS_MESSAGE_DOTIMEDLEDEFFECTACTIONGOAL_H
