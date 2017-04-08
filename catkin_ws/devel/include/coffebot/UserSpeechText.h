// Generated by gencpp from file coffebot/UserSpeechText.msg
// DO NOT EDIT!


#ifndef COFFEBOT_MESSAGE_USERSPEECHTEXT_H
#define COFFEBOT_MESSAGE_USERSPEECHTEXT_H


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
struct UserSpeechText_
{
  typedef UserSpeechText_<ContainerAllocator> Type;

  UserSpeechText_()
    : text()  {
    }
  UserSpeechText_(const ContainerAllocator& _alloc)
    : text(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _text_type;
  _text_type text;




  typedef boost::shared_ptr< ::coffebot::UserSpeechText_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::coffebot::UserSpeechText_<ContainerAllocator> const> ConstPtr;

}; // struct UserSpeechText_

typedef ::coffebot::UserSpeechText_<std::allocator<void> > UserSpeechText;

typedef boost::shared_ptr< ::coffebot::UserSpeechText > UserSpeechTextPtr;
typedef boost::shared_ptr< ::coffebot::UserSpeechText const> UserSpeechTextConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::coffebot::UserSpeechText_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::coffebot::UserSpeechText_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace coffebot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'coffebot': ['/home/alex/catkin_ws/src/coffebot/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::coffebot::UserSpeechText_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::coffebot::UserSpeechText_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::coffebot::UserSpeechText_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::coffebot::UserSpeechText_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::coffebot::UserSpeechText_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::coffebot::UserSpeechText_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::coffebot::UserSpeechText_<ContainerAllocator> >
{
  static const char* value()
  {
    return "74697ed3d931f6eede8bf3a8dfeca160";
  }

  static const char* value(const ::coffebot::UserSpeechText_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x74697ed3d931f6eeULL;
  static const uint64_t static_value2 = 0xde8bf3a8dfeca160ULL;
};

template<class ContainerAllocator>
struct DataType< ::coffebot::UserSpeechText_<ContainerAllocator> >
{
  static const char* value()
  {
    return "coffebot/UserSpeechText";
  }

  static const char* value(const ::coffebot::UserSpeechText_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::coffebot::UserSpeechText_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string text\n\
";
  }

  static const char* value(const ::coffebot::UserSpeechText_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::coffebot::UserSpeechText_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.text);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct UserSpeechText_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::coffebot::UserSpeechText_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::coffebot::UserSpeechText_<ContainerAllocator>& v)
  {
    s << indent << "text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.text);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COFFEBOT_MESSAGE_USERSPEECHTEXT_H
