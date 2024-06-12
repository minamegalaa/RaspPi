;; Auto-generated. Do not edit!


(when (boundp 'ros_remote_pkg::ImuData)
  (if (not (find-package "ROS_REMOTE_PKG"))
    (make-package "ROS_REMOTE_PKG"))
  (shadow 'ImuData (find-package "ROS_REMOTE_PKG")))
(unless (find-package "ROS_REMOTE_PKG::IMUDATA")
  (make-package "ROS_REMOTE_PKG::IMUDATA"))

(in-package "ROS")
;;//! \htmlinclude ImuData.msg.html


(defclass ros_remote_pkg::ImuData
  :super ros::object
  :slots (_rate_roll _rate_pitch _rate_yaw _acc_x _acc_y _acc_z ))

(defmethod ros_remote_pkg::ImuData
  (:init
   (&key
    ((:rate_roll __rate_roll) 0.0)
    ((:rate_pitch __rate_pitch) 0.0)
    ((:rate_yaw __rate_yaw) 0.0)
    ((:acc_x __acc_x) 0.0)
    ((:acc_y __acc_y) 0.0)
    ((:acc_z __acc_z) 0.0)
    )
   (send-super :init)
   (setq _rate_roll (float __rate_roll))
   (setq _rate_pitch (float __rate_pitch))
   (setq _rate_yaw (float __rate_yaw))
   (setq _acc_x (float __acc_x))
   (setq _acc_y (float __acc_y))
   (setq _acc_z (float __acc_z))
   self)
  (:rate_roll
   (&optional __rate_roll)
   (if __rate_roll (setq _rate_roll __rate_roll)) _rate_roll)
  (:rate_pitch
   (&optional __rate_pitch)
   (if __rate_pitch (setq _rate_pitch __rate_pitch)) _rate_pitch)
  (:rate_yaw
   (&optional __rate_yaw)
   (if __rate_yaw (setq _rate_yaw __rate_yaw)) _rate_yaw)
  (:acc_x
   (&optional __acc_x)
   (if __acc_x (setq _acc_x __acc_x)) _acc_x)
  (:acc_y
   (&optional __acc_y)
   (if __acc_y (setq _acc_y __acc_y)) _acc_y)
  (:acc_z
   (&optional __acc_z)
   (if __acc_z (setq _acc_z __acc_z)) _acc_z)
  (:serialization-length
   ()
   (+
    ;; float32 _rate_roll
    4
    ;; float32 _rate_pitch
    4
    ;; float32 _rate_yaw
    4
    ;; float32 _acc_x
    4
    ;; float32 _acc_y
    4
    ;; float32 _acc_z
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _rate_roll
       (sys::poke _rate_roll (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _rate_pitch
       (sys::poke _rate_pitch (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _rate_yaw
       (sys::poke _rate_yaw (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _acc_x
       (sys::poke _acc_x (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _acc_y
       (sys::poke _acc_y (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _acc_z
       (sys::poke _acc_z (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _rate_roll
     (setq _rate_roll (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _rate_pitch
     (setq _rate_pitch (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _rate_yaw
     (setq _rate_yaw (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _acc_x
     (setq _acc_x (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _acc_y
     (setq _acc_y (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _acc_z
     (setq _acc_z (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get ros_remote_pkg::ImuData :md5sum-) "5c4a64b3cdb846258738687d6bfcd651")
(setf (get ros_remote_pkg::ImuData :datatype-) "ros_remote_pkg/ImuData")
(setf (get ros_remote_pkg::ImuData :definition-)
      "float32 rate_roll
float32 rate_pitch
float32 rate_yaw
float32 acc_x
float32 acc_y
float32 acc_z
")



(provide :ros_remote_pkg/ImuData "5c4a64b3cdb846258738687d6bfcd651")


