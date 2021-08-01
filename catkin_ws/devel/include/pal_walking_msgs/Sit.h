// Generated by gencpp from file pal_walking_msgs/Sit.msg
// DO NOT EDIT!


#ifndef PAL_WALKING_MSGS_MESSAGE_SIT_H
#define PAL_WALKING_MSGS_MESSAGE_SIT_H

#include <ros/service_traits.h>


#include <pal_walking_msgs/SitRequest.h>
#include <pal_walking_msgs/SitResponse.h>


namespace pal_walking_msgs
{

struct Sit
{

typedef SitRequest Request;
typedef SitResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Sit
} // namespace pal_walking_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pal_walking_msgs::Sit > {
  static const char* value()
  {
    return "ad6dfe9fa0ab9703a36ca371cf15816f";
  }

  static const char* value(const ::pal_walking_msgs::Sit&) { return value(); }
};

template<>
struct DataType< ::pal_walking_msgs::Sit > {
  static const char* value()
  {
    return "pal_walking_msgs/Sit";
  }

  static const char* value(const ::pal_walking_msgs::Sit&) { return value(); }
};


// service_traits::MD5Sum< ::pal_walking_msgs::SitRequest> should match
// service_traits::MD5Sum< ::pal_walking_msgs::Sit >
template<>
struct MD5Sum< ::pal_walking_msgs::SitRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pal_walking_msgs::Sit >::value();
  }
  static const char* value(const ::pal_walking_msgs::SitRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pal_walking_msgs::SitRequest> should match
// service_traits::DataType< ::pal_walking_msgs::Sit >
template<>
struct DataType< ::pal_walking_msgs::SitRequest>
{
  static const char* value()
  {
    return DataType< ::pal_walking_msgs::Sit >::value();
  }
  static const char* value(const ::pal_walking_msgs::SitRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pal_walking_msgs::SitResponse> should match
// service_traits::MD5Sum< ::pal_walking_msgs::Sit >
template<>
struct MD5Sum< ::pal_walking_msgs::SitResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pal_walking_msgs::Sit >::value();
  }
  static const char* value(const ::pal_walking_msgs::SitResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pal_walking_msgs::SitResponse> should match
// service_traits::DataType< ::pal_walking_msgs::Sit >
template<>
struct DataType< ::pal_walking_msgs::SitResponse>
{
  static const char* value()
  {
    return DataType< ::pal_walking_msgs::Sit >::value();
  }
  static const char* value(const ::pal_walking_msgs::SitResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PAL_WALKING_MSGS_MESSAGE_SIT_H
