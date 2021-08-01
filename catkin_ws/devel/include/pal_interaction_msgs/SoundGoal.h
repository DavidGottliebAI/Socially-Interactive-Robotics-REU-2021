// Generated by gencpp from file pal_interaction_msgs/SoundGoal.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_SOUNDGOAL_H
#define PAL_INTERACTION_MSGS_MESSAGE_SOUNDGOAL_H


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
struct SoundGoal_
{
  typedef SoundGoal_<ContainerAllocator> Type;

  SoundGoal_()
    : text()
    , lang_id()
    , wait_before_speaking()  {
    }
  SoundGoal_(const ContainerAllocator& _alloc)
    : text(_alloc)
    , lang_id(_alloc)
    , wait_before_speaking()  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _text_type;
  _text_type text;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _lang_id_type;
  _lang_id_type lang_id;

   typedef ros::Duration _wait_before_speaking_type;
  _wait_before_speaking_type wait_before_speaking;





  typedef boost::shared_ptr< ::pal_interaction_msgs::SoundGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_interaction_msgs::SoundGoal_<ContainerAllocator> const> ConstPtr;

}; // struct SoundGoal_

typedef ::pal_interaction_msgs::SoundGoal_<std::allocator<void> > SoundGoal;

typedef boost::shared_ptr< ::pal_interaction_msgs::SoundGoal > SoundGoalPtr;
typedef boost::shared_ptr< ::pal_interaction_msgs::SoundGoal const> SoundGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_interaction_msgs::SoundGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_interaction_msgs::SoundGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_interaction_msgs::SoundGoal_<ContainerAllocator1> & lhs, const ::pal_interaction_msgs::SoundGoal_<ContainerAllocator2> & rhs)
{
  return lhs.text == rhs.text &&
    lhs.lang_id == rhs.lang_id &&
    lhs.wait_before_speaking == rhs.wait_before_speaking;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_interaction_msgs::SoundGoal_<ContainerAllocator1> & lhs, const ::pal_interaction_msgs::SoundGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_interaction_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::SoundGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::SoundGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::SoundGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::SoundGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::SoundGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::SoundGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_interaction_msgs::SoundGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a885e729fbf7cd3a957b93630532e7bf";
  }

  static const char* value(const ::pal_interaction_msgs::SoundGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa885e729fbf7cd3aULL;
  static const uint64_t static_value2 = 0x957b93630532e7bfULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_interaction_msgs::SoundGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/SoundGoal";
  }

  static const char* value(const ::pal_interaction_msgs::SoundGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_interaction_msgs::SoundGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"## .................\n"
"## DEPRECATED\n"
"## Please do not use this action as will be removed in the future.\n"
"## i18ntext.action together with pal_tts_cfg pkg is recomended instead.\n"
"## ---------------------------------------------------------------------\n"
" \n"
"## goal definition\n"
"# Text to be spoken\n"
"string text\n"
"# Language of the given text in\n"
"# variable text.\n"
"# If empty the system will try to speak it in \n"
"# the current system language that can be changed\n"
"# in wReemCommmander.\n"
"string lang_id\n"
"# Time to wait before starting to say the \n"
"# given text. Default is zero.\n"
"duration wait_before_speaking\n"
;
  }

  static const char* value(const ::pal_interaction_msgs::SoundGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_interaction_msgs::SoundGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.text);
      stream.next(m.lang_id);
      stream.next(m.wait_before_speaking);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SoundGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_interaction_msgs::SoundGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_interaction_msgs::SoundGoal_<ContainerAllocator>& v)
  {
    s << indent << "text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.text);
    s << indent << "lang_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.lang_id);
    s << indent << "wait_before_speaking: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.wait_before_speaking);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_SOUNDGOAL_H
