; Auto-generated. Do not edit!


(cl:in-package msgs_demo-msg)


;//! \htmlinclude AddTwoIntsResult.msg.html

(cl:defclass <AddTwoIntsResult> (roslisp-msg-protocol:ros-message)
  ((sum
    :reader sum
    :initarg :sum
    :type cl:integer
    :initform 0))
)

(cl:defclass AddTwoIntsResult (<AddTwoIntsResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <AddTwoIntsResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'AddTwoIntsResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name msgs_demo-msg:<AddTwoIntsResult> is deprecated: use msgs_demo-msg:AddTwoIntsResult instead.")))

(cl:ensure-generic-function 'sum-val :lambda-list '(m))
(cl:defmethod sum-val ((m <AddTwoIntsResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader msgs_demo-msg:sum-val is deprecated.  Use msgs_demo-msg:sum instead.")
  (sum m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <AddTwoIntsResult>) ostream)
  "Serializes a message object of type '<AddTwoIntsResult>"
  (cl:let* ((signed (cl:slot-value msg 'sum)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <AddTwoIntsResult>) istream)
  "Deserializes a message object of type '<AddTwoIntsResult>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'sum) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<AddTwoIntsResult>)))
  "Returns string type for a message object of type '<AddTwoIntsResult>"
  "msgs_demo/AddTwoIntsResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'AddTwoIntsResult)))
  "Returns string type for a message object of type 'AddTwoIntsResult"
  "msgs_demo/AddTwoIntsResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<AddTwoIntsResult>)))
  "Returns md5sum for a message object of type '<AddTwoIntsResult>"
  "b88405221c77b1878a3cbbfff53428d7")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'AddTwoIntsResult)))
  "Returns md5sum for a message object of type 'AddTwoIntsResult"
  "b88405221c77b1878a3cbbfff53428d7")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<AddTwoIntsResult>)))
  "Returns full string definition for message of type '<AddTwoIntsResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%int64 sum~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'AddTwoIntsResult)))
  "Returns full string definition for message of type 'AddTwoIntsResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%int64 sum~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <AddTwoIntsResult>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <AddTwoIntsResult>))
  "Converts a ROS message object to a list"
  (cl:list 'AddTwoIntsResult
    (cl:cons ':sum (sum msg))
))