// Generated by gencpp from file assigment1/Vec2.msg
// DO NOT EDIT!


#ifndef ASSIGMENT1_MESSAGE_VEC2_H
#define ASSIGMENT1_MESSAGE_VEC2_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace assigment1
{
template <class ContainerAllocator>
struct Vec2_
{
  typedef Vec2_<ContainerAllocator> Type;

  Vec2_()
    : r(0)
    , g(0)
    , b(0)  {
    }
  Vec2_(const ContainerAllocator& _alloc)
    : r(0)
    , g(0)
    , b(0)  {
  (void)_alloc;
    }



   typedef uint8_t _r_type;
  _r_type r;

   typedef uint8_t _g_type;
  _g_type g;

   typedef uint8_t _b_type;
  _b_type b;





  typedef boost::shared_ptr< ::assigment1::Vec2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::assigment1::Vec2_<ContainerAllocator> const> ConstPtr;

}; // struct Vec2_

typedef ::assigment1::Vec2_<std::allocator<void> > Vec2;

typedef boost::shared_ptr< ::assigment1::Vec2 > Vec2Ptr;
typedef boost::shared_ptr< ::assigment1::Vec2 const> Vec2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::assigment1::Vec2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::assigment1::Vec2_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace assigment1

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'assigment1': ['/tmp/guest-obpl3l/catkin_ws/src/assigment1/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::assigment1::Vec2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::assigment1::Vec2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::assigment1::Vec2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::assigment1::Vec2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::assigment1::Vec2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::assigment1::Vec2_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::assigment1::Vec2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "353891e354491c51aabe32df673fb446";
  }

  static const char* value(const ::assigment1::Vec2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x353891e354491c51ULL;
  static const uint64_t static_value2 = 0xaabe32df673fb446ULL;
};

template<class ContainerAllocator>
struct DataType< ::assigment1::Vec2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "assigment1/Vec2";
  }

  static const char* value(const ::assigment1::Vec2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::assigment1::Vec2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 r\n\
uint8 g\n\
uint8 b\n\
\n\
";
  }

  static const char* value(const ::assigment1::Vec2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::assigment1::Vec2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.r);
      stream.next(m.g);
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Vec2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::assigment1::Vec2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::assigment1::Vec2_<ContainerAllocator>& v)
  {
    s << indent << "r: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.r);
    s << indent << "g: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.g);
    s << indent << "b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ASSIGMENT1_MESSAGE_VEC2_H
