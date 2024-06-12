// Generated by gencpp from file ros_remote_pkg/ImuData.msg
// DO NOT EDIT!


#ifndef ROS_REMOTE_PKG_MESSAGE_IMUDATA_H
#define ROS_REMOTE_PKG_MESSAGE_IMUDATA_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_remote_pkg
{
template <class ContainerAllocator>
struct ImuData_
{
  typedef ImuData_<ContainerAllocator> Type;

  ImuData_()
    : rate_roll(0.0)
    , rate_pitch(0.0)
    , rate_yaw(0.0)
    , acc_x(0.0)
    , acc_y(0.0)
    , acc_z(0.0)  {
    }
  ImuData_(const ContainerAllocator& _alloc)
    : rate_roll(0.0)
    , rate_pitch(0.0)
    , rate_yaw(0.0)
    , acc_x(0.0)
    , acc_y(0.0)
    , acc_z(0.0)  {
  (void)_alloc;
    }



   typedef float _rate_roll_type;
  _rate_roll_type rate_roll;

   typedef float _rate_pitch_type;
  _rate_pitch_type rate_pitch;

   typedef float _rate_yaw_type;
  _rate_yaw_type rate_yaw;

   typedef float _acc_x_type;
  _acc_x_type acc_x;

   typedef float _acc_y_type;
  _acc_y_type acc_y;

   typedef float _acc_z_type;
  _acc_z_type acc_z;





  typedef boost::shared_ptr< ::ros_remote_pkg::ImuData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_remote_pkg::ImuData_<ContainerAllocator> const> ConstPtr;

}; // struct ImuData_

typedef ::ros_remote_pkg::ImuData_<std::allocator<void> > ImuData;

typedef boost::shared_ptr< ::ros_remote_pkg::ImuData > ImuDataPtr;
typedef boost::shared_ptr< ::ros_remote_pkg::ImuData const> ImuDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_remote_pkg::ImuData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_remote_pkg::ImuData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_remote_pkg::ImuData_<ContainerAllocator1> & lhs, const ::ros_remote_pkg::ImuData_<ContainerAllocator2> & rhs)
{
  return lhs.rate_roll == rhs.rate_roll &&
    lhs.rate_pitch == rhs.rate_pitch &&
    lhs.rate_yaw == rhs.rate_yaw &&
    lhs.acc_x == rhs.acc_x &&
    lhs.acc_y == rhs.acc_y &&
    lhs.acc_z == rhs.acc_z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_remote_pkg::ImuData_<ContainerAllocator1> & lhs, const ::ros_remote_pkg::ImuData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_remote_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_remote_pkg::ImuData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_remote_pkg::ImuData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_remote_pkg::ImuData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_remote_pkg::ImuData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_remote_pkg::ImuData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_remote_pkg::ImuData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_remote_pkg::ImuData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5c4a64b3cdb846258738687d6bfcd651";
  }

  static const char* value(const ::ros_remote_pkg::ImuData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5c4a64b3cdb84625ULL;
  static const uint64_t static_value2 = 0x8738687d6bfcd651ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_remote_pkg::ImuData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_remote_pkg/ImuData";
  }

  static const char* value(const ::ros_remote_pkg::ImuData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_remote_pkg::ImuData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 rate_roll\n"
"float32 rate_pitch\n"
"float32 rate_yaw\n"
"float32 acc_x\n"
"float32 acc_y\n"
"float32 acc_z\n"
;
  }

  static const char* value(const ::ros_remote_pkg::ImuData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_remote_pkg::ImuData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rate_roll);
      stream.next(m.rate_pitch);
      stream.next(m.rate_yaw);
      stream.next(m.acc_x);
      stream.next(m.acc_y);
      stream.next(m.acc_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImuData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_remote_pkg::ImuData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_remote_pkg::ImuData_<ContainerAllocator>& v)
  {
    s << indent << "rate_roll: ";
    Printer<float>::stream(s, indent + "  ", v.rate_roll);
    s << indent << "rate_pitch: ";
    Printer<float>::stream(s, indent + "  ", v.rate_pitch);
    s << indent << "rate_yaw: ";
    Printer<float>::stream(s, indent + "  ", v.rate_yaw);
    s << indent << "acc_x: ";
    Printer<float>::stream(s, indent + "  ", v.acc_x);
    s << indent << "acc_y: ";
    Printer<float>::stream(s, indent + "  ", v.acc_y);
    s << indent << "acc_z: ";
    Printer<float>::stream(s, indent + "  ", v.acc_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_REMOTE_PKG_MESSAGE_IMUDATA_H