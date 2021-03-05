rosrun xacro xacro --inorder ../../robots/talos_full_v2.urdf.xacro foot_collision:=default enable_crane:=false head_type:=default disable_gazebo_camera:=false test:=false > all_zero.urdf
rosrun xacro xacro --inorder ../../robots/talos_full_v2.urdf.xacro foot_collision:=default enable_crane:=false head_type:=default disable_gazebo_camera:=false test:=true > displaced.urdf
