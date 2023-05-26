// Generated by gencpp from file Msgs/HardwareCommand.msg
// DO NOT EDIT!


#ifndef MSGS_MESSAGE_HARDWARECOMMAND_H
#define MSGS_MESSAGE_HARDWARECOMMAND_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace Msgs
{
template <class ContainerAllocator>
struct HardwareCommand_
{
  typedef HardwareCommand_<ContainerAllocator> Type;

  HardwareCommand_()
    : motor1(0.0)
    , motor2(0.0)
    , motor3(0.0)
    , motor4(0.0)  {
    }
  HardwareCommand_(const ContainerAllocator& _alloc)
    : motor1(0.0)
    , motor2(0.0)
    , motor3(0.0)
    , motor4(0.0)  {
  (void)_alloc;
    }



   typedef float _motor1_type;
  _motor1_type motor1;

   typedef float _motor2_type;
  _motor2_type motor2;

   typedef float _motor3_type;
  _motor3_type motor3;

   typedef float _motor4_type;
  _motor4_type motor4;





  typedef boost::shared_ptr< ::Msgs::HardwareCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Msgs::HardwareCommand_<ContainerAllocator> const> ConstPtr;

}; // struct HardwareCommand_

typedef ::Msgs::HardwareCommand_<std::allocator<void> > HardwareCommand;

typedef boost::shared_ptr< ::Msgs::HardwareCommand > HardwareCommandPtr;
typedef boost::shared_ptr< ::Msgs::HardwareCommand const> HardwareCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::Msgs::HardwareCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::Msgs::HardwareCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::Msgs::HardwareCommand_<ContainerAllocator1> & lhs, const ::Msgs::HardwareCommand_<ContainerAllocator2> & rhs)
{
  return lhs.motor1 == rhs.motor1 &&
    lhs.motor2 == rhs.motor2 &&
    lhs.motor3 == rhs.motor3 &&
    lhs.motor4 == rhs.motor4;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::Msgs::HardwareCommand_<ContainerAllocator1> & lhs, const ::Msgs::HardwareCommand_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace Msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::Msgs::HardwareCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::Msgs::HardwareCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::Msgs::HardwareCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::Msgs::HardwareCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::Msgs::HardwareCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::Msgs::HardwareCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::Msgs::HardwareCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7870b959b33d58fdf72aa92aca4c8520";
  }

  static const char* value(const ::Msgs::HardwareCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7870b959b33d58fdULL;
  static const uint64_t static_value2 = 0xf72aa92aca4c8520ULL;
};

template<class ContainerAllocator>
struct DataType< ::Msgs::HardwareCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Msgs/HardwareCommand";
  }

  static const char* value(const ::Msgs::HardwareCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::Msgs::HardwareCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 motor1\n"
"float32 motor2\n"
"float32 motor3\n"
"float32 motor4\n"
;
  }

  static const char* value(const ::Msgs::HardwareCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::Msgs::HardwareCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.motor1);
      stream.next(m.motor2);
      stream.next(m.motor3);
      stream.next(m.motor4);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HardwareCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::Msgs::HardwareCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::Msgs::HardwareCommand_<ContainerAllocator>& v)
  {
    s << indent << "motor1: ";
    Printer<float>::stream(s, indent + "  ", v.motor1);
    s << indent << "motor2: ";
    Printer<float>::stream(s, indent + "  ", v.motor2);
    s << indent << "motor3: ";
    Printer<float>::stream(s, indent + "  ", v.motor3);
    s << indent << "motor4: ";
    Printer<float>::stream(s, indent + "  ", v.motor4);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSGS_MESSAGE_HARDWARECOMMAND_H
