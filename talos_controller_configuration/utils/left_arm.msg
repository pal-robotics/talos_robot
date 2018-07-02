# rostopic pub /left_arm_controller/command trajectory_msgs/JointTrajectory -1 -f left_arm.msg
header:
  seq: 0
  stamp:
    secs: 0
    nsecs: 0
  frame_id: ''
joint_names: ['arm_left_1_joint', 'arm_left_2_joint', 'arm_left_3_joint', 'arm_left_4_joint', 'arm_left_5_joint', 'arm_left_6_joint', 'arm_left_7_joint']
points:
  - positions: [0.0, 0.6, 0.0, -0.2, 0.0, 0.0, 0.0]
    velocities: [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
    accelerations: [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
    effort: []
    time_from_start:
      secs: 8.0
      nsecs: 0.0
