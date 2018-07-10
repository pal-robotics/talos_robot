arms: right_arm left_arm

legs: right_leg left_leg


all: arms legs torso head


.DEFAULT:
	rostopic pub /$@_controller/command trajectory_msgs/JointTrajectory -1 -f $@.msg
