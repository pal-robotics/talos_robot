# rostopic pub /head_controller/command trajectory_msgs/JointTrajectory -1 -f head.msg
header:
  seq: 0
  stamp:
    secs: 0
    nsecs: 0
  frame_id: ''
joint_names: ['head_1_joint', 'head_2_joint']
points:
  - positions: [0.0, 0.0]
    velocities: [0.0, 0.0]
    accelerations: [0.0, 0.0]
    effort: []
    time_from_start:
      secs: 8.0
      nsecs: 0.0
