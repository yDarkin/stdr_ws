; Auto-generated. Do not edit!


(cl:in-package stdr_msgs-msg)


;//! \htmlinclude RegisterRobotFeedback.msg.html

(cl:defclass <RegisterRobotFeedback> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass RegisterRobotFeedback (<RegisterRobotFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RegisterRobotFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RegisterRobotFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name stdr_msgs-msg:<RegisterRobotFeedback> is deprecated: use stdr_msgs-msg:RegisterRobotFeedback instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RegisterRobotFeedback>) ostream)
  "Serializes a message object of type '<RegisterRobotFeedback>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RegisterRobotFeedback>) istream)
  "Deserializes a message object of type '<RegisterRobotFeedback>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RegisterRobotFeedback>)))
  "Returns string type for a message object of type '<RegisterRobotFeedback>"
  "stdr_msgs/RegisterRobotFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RegisterRobotFeedback)))
  "Returns string type for a message object of type 'RegisterRobotFeedback"
  "stdr_msgs/RegisterRobotFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RegisterRobotFeedback>)))
  "Returns md5sum for a message object of type '<RegisterRobotFeedback>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RegisterRobotFeedback)))
  "Returns md5sum for a message object of type 'RegisterRobotFeedback"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RegisterRobotFeedback>)))
  "Returns full string definition for message of type '<RegisterRobotFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RegisterRobotFeedback)))
  "Returns full string definition for message of type 'RegisterRobotFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RegisterRobotFeedback>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RegisterRobotFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'RegisterRobotFeedback
))
