// Generated by gencpp from file pal_behaviour_msgs/BehaviourArgument.msg
// DO NOT EDIT!


#ifndef PAL_BEHAVIOUR_MSGS_MESSAGE_BEHAVIOURARGUMENT_H
#define PAL_BEHAVIOUR_MSGS_MESSAGE_BEHAVIOURARGUMENT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_behaviour_msgs
{
template <class ContainerAllocator>
struct BehaviourArgument_
{
  typedef BehaviourArgument_<ContainerAllocator> Type;

  BehaviourArgument_()
    : key()
    , value()  {
    }
  BehaviourArgument_(const ContainerAllocator& _alloc)
    : key(_alloc)
    , value(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _key_type;
  _key_type key;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> const> ConstPtr;

}; // struct BehaviourArgument_

typedef ::pal_behaviour_msgs::BehaviourArgument_<std::allocator<void> > BehaviourArgument;

typedef boost::shared_ptr< ::pal_behaviour_msgs::BehaviourArgument > BehaviourArgumentPtr;
typedef boost::shared_ptr< ::pal_behaviour_msgs::BehaviourArgument const> BehaviourArgumentConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator1> & lhs, const ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator2> & rhs)
{
  return lhs.key == rhs.key &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator1> & lhs, const ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_behaviour_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cf57fdc6617a881a88c16e768132149c";
  }

  static const char* value(const ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcf57fdc6617a881aULL;
  static const uint64_t static_value2 = 0x88c16e768132149cULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_behaviour_msgs/BehaviourArgument";
  }

  static const char* value(const ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## SMC event\n"
"\n"
"#Header header\n"
"\n"
"string           key\n"
"string           value\n"
"\n"
;
  }

  static const char* value(const ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.key);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BehaviourArgument_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator>& v)
  {
    s << indent << "key: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.key);
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_BEHAVIOUR_MSGS_MESSAGE_BEHAVIOURARGUMENT_H
