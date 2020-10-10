// Generated by gencpp from file msgs_demo/PoseWithCovariance.msg
// DO NOT EDIT!


#ifndef MSGS_DEMO_MESSAGE_POSEWITHCOVARIANCE_H
#define MSGS_DEMO_MESSAGE_POSEWITHCOVARIANCE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <msgs_demo/Pose.h>

namespace msgs_demo
{
template <class ContainerAllocator>
struct PoseWithCovariance_
{
  typedef PoseWithCovariance_<ContainerAllocator> Type;

  PoseWithCovariance_()
    : pose()
    , covariance()  {
      covariance.assign(0.0);
  }
  PoseWithCovariance_(const ContainerAllocator& _alloc)
    : pose(_alloc)
    , covariance()  {
  (void)_alloc;
      covariance.assign(0.0);
  }



   typedef  ::msgs_demo::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef boost::array<double, 36>  _covariance_type;
  _covariance_type covariance;





  typedef boost::shared_ptr< ::msgs_demo::PoseWithCovariance_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msgs_demo::PoseWithCovariance_<ContainerAllocator> const> ConstPtr;

}; // struct PoseWithCovariance_

typedef ::msgs_demo::PoseWithCovariance_<std::allocator<void> > PoseWithCovariance;

typedef boost::shared_ptr< ::msgs_demo::PoseWithCovariance > PoseWithCovariancePtr;
typedef boost::shared_ptr< ::msgs_demo::PoseWithCovariance const> PoseWithCovarianceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msgs_demo::PoseWithCovariance_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msgs_demo::PoseWithCovariance_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace msgs_demo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'msgs_demo': ['/home/lwc/learnros/WORKSPACE/catkin_ws/src/ROS-Academy-for-Beginners/msgs_demo/msg', '/home/lwc/learnros/WORKSPACE/catkin_ws/devel/share/msgs_demo/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::msgs_demo::PoseWithCovariance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msgs_demo::PoseWithCovariance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgs_demo::PoseWithCovariance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgs_demo::PoseWithCovariance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgs_demo::PoseWithCovariance_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgs_demo::PoseWithCovariance_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msgs_demo::PoseWithCovariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c23e848cf1b7533a8d7c259073a97e6f";
  }

  static const char* value(const ::msgs_demo::PoseWithCovariance_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc23e848cf1b7533aULL;
  static const uint64_t static_value2 = 0x8d7c259073a97e6fULL;
};

template<class ContainerAllocator>
struct DataType< ::msgs_demo::PoseWithCovariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msgs_demo/PoseWithCovariance";
  }

  static const char* value(const ::msgs_demo::PoseWithCovariance_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msgs_demo::PoseWithCovariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#表示空间中含有不确定性的位姿信息\n\
#位置：geometry_msgs/PoseWithCovariance.msg\n\
\n\
Pose pose\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: msgs_demo/Pose\n\
#消息定义自由空间中的位姿信息，包括位置和指向信息\n\
#位置:geometry_msgs/Pose.msg\n\
\n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: msgs_demo/Point\n\
#空间中的点的位置\n\
#位置:geometry_msgs/Point.msg\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: msgs_demo/Quaternion\n\
#消息代表空间中旋转的四元数\n\
#位置:geometry_msgs/Quaternion.msg\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::msgs_demo::PoseWithCovariance_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msgs_demo::PoseWithCovariance_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose);
      stream.next(m.covariance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PoseWithCovariance_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msgs_demo::PoseWithCovariance_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msgs_demo::PoseWithCovariance_<ContainerAllocator>& v)
  {
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::msgs_demo::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "covariance[]" << std::endl;
    for (size_t i = 0; i < v.covariance.size(); ++i)
    {
      s << indent << "  covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.covariance[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSGS_DEMO_MESSAGE_POSEWITHCOVARIANCE_H
