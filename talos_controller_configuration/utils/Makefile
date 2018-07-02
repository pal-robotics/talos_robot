right_arm:
	rostopic pub /right_arm_controller/command trajectory_msgs/JointTrajectory -1 -f right_arm.msg

left_arm:
	rostopic pub /right_arm_controller/command trajectory_msgs/JointTrajectory -1 -f left_arm.msg

right_leg:
	rostopic pub /right_leg_controller/command trajectory_msgs/JointTrajectory -1 -f right_leg.msg

left_leg:
	rostopic pub /right_leg_controller/command trajectory_msgs/JointTrajectory -1 -f left_leg.msg

torso:
	rostopic pub /right_leg_controller/command trajectory_msgs/JointTrajectory -1 -f torso.msg

head:
	rostopic pub /right_leg_controller/command trajectory_msgs/JointTrajectory -1 -f head.msg


arms: right_arm left_arm

legs: right_leg left_leg


all: arms legs torso head


.DEFAULT:
