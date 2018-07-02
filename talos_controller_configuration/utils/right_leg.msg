# rostopic pub /right_leg_controller/command trajectory_msgs/JointTrajectory -1 -f right_leg.msg
header:
  seq: 0
  stamp:
    secs: 0
    nsecs: 0
  frame_id: ''
joint_names: ['leg_right_1_joint', 'leg_right_2_joint', 'leg_right_3_joint', 'leg_right_4_joint', 'leg_right_5_joint', 'leg_right_6_joint']
points:
  - positions: [0.0, -0.2, 0.0, 0.2, 0.0, 0.0]
    velocities: [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
    accelerations: [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
    effort: []
    time_from_start:
      secs: 8.0
      nsecs: 0.0
