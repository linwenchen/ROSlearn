;; Auto-generated. Do not edit!


(when (boundp 'msgs_demo::GetMapFeedback)
  (if (not (find-package "MSGS_DEMO"))
    (make-package "MSGS_DEMO"))
  (shadow 'GetMapFeedback (find-package "MSGS_DEMO")))
(unless (find-package "MSGS_DEMO::GETMAPFEEDBACK")
  (make-package "MSGS_DEMO::GETMAPFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude GetMapFeedback.msg.html


(defclass msgs_demo::GetMapFeedback
  :super ros::object
  :slots ())

(defmethod msgs_demo::GetMapFeedback
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(setf (get msgs_demo::GetMapFeedback :md5sum-) "d41d8cd98f00b204e9800998ecf8427e")
(setf (get msgs_demo::GetMapFeedback :datatype-) "msgs_demo/GetMapFeedback")
(setf (get msgs_demo::GetMapFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#无返回部分


")



(provide :msgs_demo/GetMapFeedback "d41d8cd98f00b204e9800998ecf8427e")


