// Generated by gencpp from file stdr_msgs/AddSoundSourceRequest.msg
// DO NOT EDIT!


#ifndef STDR_MSGS_MESSAGE_ADDSOUNDSOURCEREQUEST_H
#define STDR_MSGS_MESSAGE_ADDSOUNDSOURCEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <stdr_msgs/SoundSource.h>

namespace stdr_msgs
{
template <class ContainerAllocator>
struct AddSoundSourceRequest_
{
  typedef AddSoundSourceRequest_<ContainerAllocator> Type;

  AddSoundSourceRequest_()
    : newSource()  {
    }
  AddSoundSourceRequest_(const ContainerAllocator& _alloc)
    : newSource(_alloc)  {
  (void)_alloc;
    }



   typedef  ::stdr_msgs::SoundSource_<ContainerAllocator>  _newSource_type;
  _newSource_type newSource;





  typedef boost::shared_ptr< ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AddSoundSourceRequest_

typedef ::stdr_msgs::AddSoundSourceRequest_<std::allocator<void> > AddSoundSourceRequest;

typedef boost::shared_ptr< ::stdr_msgs::AddSoundSourceRequest > AddSoundSourceRequestPtr;
typedef boost::shared_ptr< ::stdr_msgs::AddSoundSourceRequest const> AddSoundSourceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace stdr_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'stdr_msgs': ['/home/yadajin/stdr_ws/src/stdr_simulator/stdr_msgs/msg', '/home/yadajin/stdr_ws/devel/share/stdr_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c29faee1e29b2a8ababeae8f802069e9";
  }

  static const char* value(const ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc29faee1e29b2a8aULL;
  static const uint64_t static_value2 = 0xbabeae8f802069e9ULL;
};

template<class ContainerAllocator>
struct DataType< ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stdr_msgs/AddSoundSourceRequest";
  }

  static const char* value(const ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stdr_msgs/SoundSource newSource\n\
\n\
================================================================================\n\
MSG: stdr_msgs/SoundSource\n\
# Source description\n\
\n\
string id\n\
float32 dbs\n\
\n\
# sensor pose, relative to the map origin\n\
geometry_msgs/Pose2D pose \n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# Deprecated\n\
# Please use the full 3D pose.\n\
\n\
# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.\n\
\n\
# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.\n\
\n\
\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.newSource);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddSoundSourceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stdr_msgs::AddSoundSourceRequest_<ContainerAllocator>& v)
  {
    s << indent << "newSource: ";
    s << std::endl;
    Printer< ::stdr_msgs::SoundSource_<ContainerAllocator> >::stream(s, indent + "  ", v.newSource);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STDR_MSGS_MESSAGE_ADDSOUNDSOURCEREQUEST_H