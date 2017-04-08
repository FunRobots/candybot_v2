// Generated by gencpp from file coffebot/SmileDetected.msg
// DO NOT EDIT!


#ifndef COFFEBOT_MESSAGE_SMILEDETECTED_H
#define COFFEBOT_MESSAGE_SMILEDETECTED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace coffebot
{
template <class ContainerAllocator>
struct SmileDetected_
{
  typedef SmileDetected_<ContainerAllocator> Type;

  SmileDetected_()
    : detected(false)  {
    }
  SmileDetected_(const ContainerAllocator& _alloc)
    : detected(false)  {
  (void)_alloc;
    }



   typedef uint8_t _detected_type;
  _detected_type detected;




  typedef boost::shared_ptr< ::coffebot::SmileDetected_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::coffebot::SmileDetected_<ContainerAllocator> const> ConstPtr;

}; // struct SmileDetected_

typedef ::coffebot::SmileDetected_<std::allocator<void> > SmileDetected;

typedef boost::shared_ptr< ::coffebot::SmileDetected > SmileDetectedPtr;
typedef boost::shared_ptr< ::coffebot::SmileDetected const> SmileDetectedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::coffebot::SmileDetected_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::coffebot::SmileDetected_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace coffebot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'coffebot': ['/home/alex/catkin_ws/src/coffebot/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::coffebot::SmileDetected_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::coffebot::SmileDetected_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::coffebot::SmileDetected_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::coffebot::SmileDetected_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::coffebot::SmileDetected_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::coffebot::SmileDetected_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::coffebot::SmileDetected_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2d8633c53221d40413712b55b8360a15";
  }

  static const char* value(const ::coffebot::SmileDetected_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2d8633c53221d404ULL;
  static const uint64_t static_value2 = 0x13712b55b8360a15ULL;
};

template<class ContainerAllocator>
struct DataType< ::coffebot::SmileDetected_<ContainerAllocator> >
{
  static const char* value()
  {
    return "coffebot/SmileDetected";
  }

  static const char* value(const ::coffebot::SmileDetected_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::coffebot::SmileDetected_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool detected\n\
";
  }

  static const char* value(const ::coffebot::SmileDetected_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::coffebot::SmileDetected_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.detected);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SmileDetected_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::coffebot::SmileDetected_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::coffebot::SmileDetected_<ContainerAllocator>& v)
  {
    s << indent << "detected: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.detected);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COFFEBOT_MESSAGE_SMILEDETECTED_H
