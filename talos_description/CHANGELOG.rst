^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package talos_description
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

2.10.3 (2026-02-10)
-------------------
* Expose safety interface for robot_control
* Contributors: Noel Jimenez

2.10.2 (2026-01-21)
-------------------
* Changing robot_control affinity
* Contributors: Jordan Palacios

2.10.1 (2026-01-08)
-------------------

2.10.0 (2025-12-05)
-------------------
* Add gazebo_version xacro argument
* Contributors: Noel Jimenez

2.9.2 (2025-12-05)
------------------

2.9.1 (2025-10-30)
------------------
* Add condition for pal_transmissions dependency
* Contributors: Noel Jimenez

2.9.0 (2025-10-23)
------------------

2.8.1 (2025-09-09)
------------------
* Merge branch 'set/is_async/use_sim' into 'humble-devel'
  Set is_async based on use_sim arg
  See merge request robots/talos_robot!159
* Set is_async based on use_sim arg
* Contributors: Sai Kishor Kothakota

2.8.0 (2025-09-08)
------------------
* set the scheduling policy info only for the real robot
* Contributors: Sai Kishor Kothakota

2.7.0 (2025-09-03)
------------------
* Merge branch 'add/ros2_control/hw_components' into 'alum-devel'
  Add async properties to the ros2_control hardware components
  See merge request robots/talos_robot!156
* Change the sensor_name to imu_sensor
* Add async properties to the ros2_control hardware components
* Merge branch 'add/pal_transmissions/dependency' into 'alum-devel'
  Add pal_transmissions dependency
  See merge request robots/talos_robot!157
* Add pal_transmissions dependency
* Merge branch 'fix/wrist/transmission' into 'alum-devel'
  Fix the wrist transmission xacro macro
  See merge request robots/talos_robot!155
* Update wrist.transmission.xacro
* Fix the wrist transmission xacro macro
* Contributors: Adria Roig, Sai Kishor Kothakota

2.6.0 (2025-07-16)
------------------
* Rename imu name and add ENU parameters
* Contributors: Isaac Acevedo

2.5.0 (2025-07-10)
------------------

2.4.0 (2025-07-09)
------------------

2.3.0 (2025-07-03)
------------------
* Fix camera OS1-64 path
* Change xtion camera and  ouster camera to urdf_utils
* Change orbbec camera to urdf_utils
* Change path for ati, imu and deg_to_grad
* Move ati sensors to pal_urdf_utils
* Change path for ft ros2 control urdf
* Change path for imu ros2 control urdf
* Contributors: Aina

2.2.3 (2025-06-30)
------------------
* Enable idle_mode_on_stop for current, effort and torque
* Enable error_protection
* Contributors: Jordan Palacios

2.2.2 (2025-06-30)
------------------
* Fix the integration of the imu in the gazebo classic
* Contributors: Maximilien Naveau

2.2.1 (2025-06-26)
------------------

2.2.0 (2025-06-25)
------------------
* Expose torque and absolute position state interfaces in the ros2 control transmissions
* Contributors: Jordan Palacios

2.1.1 (2025-06-20)
------------------

2.1.0 (2025-06-18)
------------------

2.0.3 (2025-05-22)
------------------
* Merge branch 'sim_time' into 'humble-devel'
  use_sim_time + head transmission  + gripper mimic
  See merge request robots/talos_robot!142
* Adapt head transmission to new API
* Change head transmission name
* Add gripper as mimic joint
* Fix use_sim_time
* Contributors: Adria Roig, Adrià Roig, Sai Kishor Kothakota

2.0.2 (2025-03-12)
------------------
* Merge branch 'collision' into 'humble-devel'
  Collision
  See merge request robots/talos_robot!140
* Modify collision_parameters.yaml
* Update collision_parameters.yaml
* Adapt collision_parameters.yaml to new ARILES version
* Contributors: Adria Roig, Adrià Roig

2.0.1 (2024-09-26)
------------------

2.0.0 (2024-09-18)
------------------
* Merge branch 'ros2-migration' into 'humble-devel'
  Ros2 migration
  See merge request robots/talos_robot!130
* Fix the leg_left_5_joint parameter to be double
* Parse the PID config file to the gazebo_ros2_control ROS 2 node
* Add position PID parameters config file
  https://github.com/ros-controls/gazebo_ros2_control/pull/374 is merged
* Set hold_joints to false
* Propagate arg from gazebo launch to robot_state_publisher
* Adding orientus sensor when launching the robot
* Fixed torso transmission actuator name
* Commenting gripper mimic joints not working in real robot
* Merge branch 'fix/talos/transmissions/ros2' into 'ros2-migration'
  Fix/talos/transmissions/ros2
  See merge request robots/talos_robot!133
* Fix the torso transmission duplication in ros2_control xacro
* Fix the wrist transmission of the ros2_control xacro
* fix the arm transmission ros2_control xacro
* Adding robot_state_publisher module
* Remove invalid and unnecessary dependencies
* Add the possibility to start the simulation with a fixed base or not.
* Export the odometry of the base from gazebo
* [format]
* add force sensor at the feet
* Try to add the ankle FT sensors for Talos and connect them to ros2_control
* [talos_descirption] Try to add the force sensors at the feet
* Remove colons from urdf comments
* fix talos_description CMakeLists
* delete useless gazebo plugin for talos
* enable play_motion2
* update gripper mimic joint and sensors
* imu sensor ros2_control
* add talos_controller_configuration depend.
* add sensors in ros2_control
* working version with default position controllers
* fix publish_frequency passed value (double and not a string)
* fix torso and head ros2_control
* migrate all the basic launch files
* visualization complete for all the models of TALOS
* make available the spawn of the full_fake_grippers and no_grippers
* visualization of the arm right model
* config files for talos_description
* migration of CMakeLists.txt and package.xml to ros2 - description
* Contributors: Adrià Roig, Jordan Palacios, Maximilien Naveau, Sai Kishor Kothakota, ileniaperrella

1.1.30 (2023-11-08)
-------------------

1.1.29 (2023-10-24)
-------------------
* Merge branch 'change_license_to_apache' into 'erbium-devel'
  change public license to Apache License 2.0
  See merge request robots/talos_robot!126
* change public license to Apache License 2.0
* Contributors: Jordan Palacios, Sai Kishor Kothakota

1.1.28 (2023-02-07)
-------------------
* Merge branch 'mlu/fix/xacro' into 'erbium-devel'
  xacro is used in the build of talos_description
  See merge request robots/talos_robot!122
* xacro is used in the build of talos_description
* Contributors: Adria Roig, Mathias Lüdtke

1.1.27 (2023-01-18)
-------------------
* Merge branch 'add_realsense_dependencies' into 'erbium-devel'
  :heavy_plus_sign: Added missing realsense description and gazebo plugin dependency
  See merge request robots/talos_robot!121
* :heavy_plus_sign: Added missing realsense description and gazebo plugin dependency
* Contributors: Adria Roig, saikishor

1.1.26 (2022-10-13)
-------------------
* Merge branch 'urdf_srdf' into 'erbium-devel'
  Add URDF and srdf file in talos_description
  See merge request robots/talos_robot!120
* Install an urdf for talos in talos_description compiled from the xacro
* Add srdf file for Talos
* Contributors: Pierre Fernbach, saikishor

1.1.25 (2022-09-19)
-------------------

1.1.24 (2022-04-20)
-------------------
* Merge branch 'fix_camera_frame' into 'erbium-devel'
  Fix wrong optical frame
  See merge request robots/talos_robot!118
* Fix wrong optical frame
* Contributors: Adria Roig

1.1.23 (2022-03-02)
-------------------
* Merge branch 'add_flexibility' into 'erbium-devel'
  Add flexibility
  See merge request robots/talos_robot!112
* Add very small mass and inertia to flexibility links (because of issue in pybullet with null values for inertia)
* Add zero config value for flexibility joints
* Forward parameter name from upload_talos to upload
* Add transmission for the flexibility
* increase torque limit of the flexibility
* Fix xacro for flexibility
* Add argument to launch file to use flexibility
* Add hip flexibility option in xacro file
* Contributors: Pierre Fernbach, saikishor

1.1.22 (2022-02-22)
-------------------
* Merge branch 'centroidal_mpc' into 'erbium-devel'
  Centroidal mpc
  See merge request robots/talos_robot!114
* Added offset_y=0.00 as suggested in comment for MR
* Add rviz in talos_joint_command_rviz.launch
* Added model with fake grippers to take into account weight of grippers when not present in model
* fixed talos_joint_command_rviz
* Add foot contact frames
* Contributors: Adria Roig, enricomingo, narcismiguel

1.1.21 (2021-12-01)
-------------------

1.1.20 (2021-11-17)
-------------------
* Merge branch 'uedin_markers' into 'erbium-devel'
  Make modifications for the UEDIN markers
  See merge request robots/talos_robot!111
* Set the zero calibration constants in the arms for the tests
* Merge branch 'pal_physics_simulator_fix' into 'erbium-devel'
  talos zero configuration fix for pal_physics_simulator
  See merge request robots/talos_robot!110
* Fix wrong transformations / meshes in the camera
* Make modifications for the UEDIN markers
* talos zero configuration fix for pal_physics_simulator
* Contributors: Adria Roig, saikishor

1.1.19 (2021-08-26)
-------------------

1.1.18 (2021-05-26)
-------------------

1.1.17 (2021-03-05)
-------------------
* Merge branch 'lower_body_calibration' into 'erbium-devel'
  Lower body calibration
  See merge request robots/talos_robot!106
* Lower body calibration
* Merge branch 'calib_offsets' into 'erbium-devel'
  Calib offsets
  See merge request robots/talos_robot!105
* Fix head and torso calibration
* Enable 6D calibration of arm, head and torso joints.
* Contributors: Adria Roig, Joseph Mirabel, narcismiguel, victor

1.1.16 (2020-11-13)
-------------------
* Merge branch 'lidar_head' into 'erbium-devel'
  Lidar head
  See merge request robots/talos_robot!104
* added lidar head_2 meshes
* use the default suffix to the old meshes
* Update head xacro to use the new meshes
* Pass head type as an argument to the urdf
* Fix the argument to the TALOS head macro
* added the conditions for the new lidar head version with intel t265, d435, and ouster lidar
* added the ouster sensor mesh and initial URDF commit
* added head version argument in the head urdf xacro
* Contributors: Sai Kishor Kothakota, victor

1.1.15 (2020-08-01)
-------------------

1.1.14 (2020-07-30)
-------------------
* Merge branch 'configurable-imu-offsets' into 'erbium-devel'
  Configurable imu offsets
  See merge request robots/talos_robot!101
* Add configurable imu xyz
* Add configurable imu rpy offsets
* Contributors: Victor Lopez, victor

1.1.13 (2020-07-30)
-------------------

1.1.12 (2020-07-21)
-------------------

1.1.11 (2020-07-21)
-------------------

1.1.10 (2020-07-15)
-------------------

1.1.9 (2020-07-14)
------------------

1.1.8 (2020-07-13)
------------------

1.1.7 (2020-07-02)
------------------
* Merge branch '2KHz' into 'erbium-devel'
  2 k hz
  See merge request robots/talos_robot!94
* Don't increase y foot collision mesh so much
* increase the size of the foot collision model
* increase the size of the foot collision model
* Contributors: Sai Kishor Kothakota, Victor Lopez, victor

1.1.6 (2020-06-29)
------------------

1.1.5 (2020-05-08)
------------------

1.1.4 (2020-05-06)
------------------

1.1.3 (2020-03-05)
------------------
* Merge branch 'talos_specific_addons' into 'erbium-devel'
  Talos specific addons
  See merge request robots/talos_robot!86
* change add_ons by addons
* added talos_addons macro to add talos specific transformations
* Contributors: Sai Kishor Kothakota, jordanpalacios

1.1.2 (2020-01-14)
------------------

1.1.1 (2020-01-14)
------------------

1.1.0 (2020-01-10)
------------------
* Merge branch 'disable_gazebo_camera' into 'erbium-devel'
  added option to disable the gazebo camera plugin
  See merge request robots/talos_robot!83
* added option to disable the gazebo camera plugin
* Contributors: Sai Kishor Kothakota, Victor Lopez

1.0.52 (2019-11-29)
-------------------
* Merge branch 'new_effort' into 'erbium-devel'
  Increase max effort for the knees
  See merge request robots/talos_robot!80
* Increase max effort for the knees
* Contributors: Adria Roig, Jordan Palacios

1.0.51 (2019-07-15)
-------------------

1.0.50 (2019-07-10)
-------------------

1.0.49 (2019-05-30)
-------------------

1.0.48 (2019-03-27)
-------------------

1.0.47 (2019-03-19)
-------------------

1.0.46 (2019-03-07)
-------------------
* Change license to LGPL-3.0
* Contributors: Victor Lopez

1.0.45 (2018-12-20)
-------------------

1.0.44 (2018-11-29)
-------------------

1.0.43 (2018-11-22)
-------------------

1.0.42 (2018-11-21)
-------------------

1.0.41 (2018-11-20)
-------------------

1.0.40 (2018-11-02)
-------------------
* Merge branch 'as_arm_base_rename' into 'erbium-devel'
  Rename base link of detached arm
  See merge request robots/talos_robot!64
* Rename base link of detached arm
* Contributors: alexandersherikov

1.0.39 (2018-10-25)
-------------------

1.0.38 (2018-10-24)
-------------------
* Merge branch 'as_extend_blacklist' into 'erbium-devel'
  Collision blacklisting: wrists, sensors, grippers
  See merge request robots/talos_robot!62
* Collision blacklisting: wrists, sensors, grippers
* Contributors: alexandersherikov

1.0.37 (2018-10-23)
-------------------
* Merge branch 'as_self_coll_merge_test' into 'erbium-devel'
  As self coll merge test
  See merge request robots/talos_robot!61
* Temporary revert changes in configuration_initializer.yaml
  This should allow to merge changes without breaking tests.
* Merge branch 'as_self_coll_merge_test' into as_sim_self_collisions
* Change format of collision blacklist
* Update collision model parameters.
* Added loading of collision parameters.
* Update collision model parameters.
* Added loading of collision parameters.
* Contributors: alexandersherikov

1.0.36 (2018-10-18)
-------------------

1.0.35 (2018-10-17)
-------------------
* deleted changelogs
* Merge branch 'head' into 'erbium-devel'
  open loop parameters
  See merge request robots/talos_robot!56
* open loop parameters
* Reduced limits for laas talos
* Contributors: Hilario Tome, Jordan Palacios

1.0.34 (2018-09-28)
-------------------
* Updated changelog
* Merge branch 'current_limit_controller' into 'erbium-devel'
  Add cfg files for rviz and plotjuggler
  See merge request robots/talos_robot!54
* Add cfg files for rviz and plotjuggler
* Contributors: Jordan Palacios, Luca Marchionni

1.0.33 (2018-09-27)
-------------------
* updated changelog
* Contributors: Hilario Tome

1.0.32 (2018-09-25)
-------------------
* Updated changelogs
* Add default rviz config file for talos
* Contributors: Jordan Palacios, Luca Marchionni

1.0.31 (2018-09-12)
-------------------
* updated changelogs
* Contributors: Hilario Tome

1.0.30 (2018-09-06)
-------------------
* Updated changelog
* Contributors: alexandersherikov

1.0.29 (2018-09-03 20:05)
-------------------------
* update changelog
* Contributors: Hilario Tome

1.0.28 (2018-09-03 10:22)
-------------------------
* Updated changelog
* Contributors: alexandersherikov

1.0.27 (2018-08-28)
-------------------
* updated changelog
* Contributors: Hilario Tome

1.0.26 (2018-08-24)
-------------------
* updated changelog
* Contributors: Hilario Tome

1.0.25 (2018-08-01 15:05)
-------------------------
* updated changelog
* Contributors: Hilario Tome

1.0.24 (2018-08-01 15:03)
-------------------------
* updated changelog
* Contributors: Hilario Tome

1.0.23 (2018-07-30)
-------------------
* updated changelog
* Contributors: Hilario Tome

1.0.22 (2018-07-25 18:04)
-------------------------
* Updated changelog
* Contributors: alexandersherikov

1.0.21 (2018-07-25 15:16)
-------------------------
* Updated changelog
* Merge branch 'as_limit_fix' into 'erbium-devel'
  Fix upper limit for arm\_*_4_joint.
  See merge request robots/talos_robot!37
* Fix upper limit for arm\_*_4_joint.
* Contributors: alexandersherikov

1.0.20 (2018-07-24 17:10)
-------------------------
* Updated changelog
* Merge branch 'as_arm_testbench' into 'erbium-devel'
  Configuration files for separate arm_right
  See merge request robots/talos_robot!36
* Configuration files for separate arm_right
* Contributors: alexandersherikov

1.0.19 (2018-07-24 11:02)
-------------------------
* Updated changelog
* Contributors: alexandersherikov

1.0.18 (2018-07-19)
-------------------
* Updated changelog
* Contributors: alexandersherikov

1.0.17 (2018-07-16)
-------------------
* updated changelog
* Contributors: Hilario Tome

1.0.16 (2018-07-12)
-------------------
* Updated changelog
* Contributors: alexandersherikov

1.0.15 (2018-07-11)
-------------------
* updated changelog
* Contributors: Hilario Tome

1.0.14 (2018-07-10)
-------------------
* Updated changelog
* Merge branch 'as_plus_head' into 'erbium-devel'
  Add head to arm-less configuration
  See merge request robots/talos_robot!30
* Add head to arm-less configuration
* Contributors: alexandersherikov

1.0.13 (2018-07-09)
-------------------
* Updated changelog
* Merge branch 'new_estimator' into 'erbium-devel'
  Unloader of position controllers, default base pose
  See merge request robots/talos_robot!29
* upload: load default floating base poses.
* Contributors: alexandersherikov

1.0.12 (2018-07-04 20:59)
-------------------------
* Updated changelog
* Merge branch 'as_selective_loading' into 'erbium-devel'
  Refactoring to allow partial robot loading.
  See merge request robots/talos_robot!26
* Add default locomotion state, fix controller configs
* partial models: launch file renames & refactoring
* Fix typo in upload_talos.launch
* Refactoring to allow partial robot loading.
* Contributors: alexandersherikov

1.0.11 (2018-07-04 12:15)
-------------------------
* updated changelog
* Merge branch 'fix_head_vel' into 'erbium-devel'
  fixed head velocity
  See merge request robots/talos_robot!28
* fixed head velocity
* Contributors: Hilario Tome

1.0.10 (2018-07-04 10:27)
-------------------------
* updated changelog
* Merge branch 'gripper_effort' into 'erbium-devel'
  added gripper effort support
  See merge request robots/talos_robot!27
* added gripper effort support
* Contributors: Hilario Tome

1.0.9 (2018-06-21)
------------------
* Updated changelog
* Merge branch 'as_default_configuration' into 'erbium-devel'
  Added default configuration.
  See merge request robots/talos_robot!22
* support different default configuration types.
* Added default configuration.
* Contributors: Hilario Tome, alexandersherikov

1.0.8 (2018-06-20)
------------------
* updated changelog
* Contributors: Hilario Tome

1.0.7 (2018-06-19 11:08)
------------------------
* updated changelog
* Contributors: Hilario Tome

1.0.6 (2018-06-19 00:30)
------------------------
* updated changelog
* Contributors: Hilario Tome

1.0.5 (2018-06-15)
------------------
* updated changelog
* Merge branch 'as_merge_talos_versions' into 'erbium-devel'
  merge talos versions, add tests.
  See merge request robots/talos_robot!20
* merge talos versions, add tests.
* Contributors: Hilario Tome, alexandersherikov

1.0.4 (2018-06-12)
------------------
* updated changelog
* Merge branch 'new-arm-pids' into 'erbium-devel'
  Fix max wrist effort
  See merge request robots/talos_robot!18
* Fix max wrist effort
* Contributors: Hilario Tome, Victor Lopez

1.0.3 (2018-05-29)
------------------
* Update changelog
* Contributors: Luca Marchionni

1.0.2 (2018-04-18)
------------------
* updated changelog
* Merge branch 'fix_simulation' into 'erbium-devel'
  fixed gripper command mode:
  See merge request robots/talos_robot!16
* fixed merge
* fixed merge
* fixed gripper command mode:
* Contributors: Hilario Tome

1.0.1 (2018-04-13)
------------------
* Update changelog
* Contributors: Victor Lopez

1.0.0 (2018-04-12)
------------------
* updated changelogs
* Merge branch 'as_identification' into 'erbium-devel'
  revised inertial parameters + other fixes)
  See merge request robots/talos_robot!12
* upload.launch: added --inorder flag
* Inertials in a separate package. [dubnium compatibility is lost!]
* Minor fix in inertial parameters of orbbec_astra_pro.
* Mark 'upload_talos.launch' as deprecated.
* Fix IMU orientation (again)
* Fix orientation of IMU, delete TODO comments.
* Updated dynamic parameters of the grippers.
  Note: sensor between the wrist and gripper is split into two links, I
  set inertial parameters of the first one, considering the second one
  negligible. This must be reviewed.
* Fixed typo in leg URDF.
* Indentation & comments.
* Updated meshes for link_2 of leg.
* Leg urdf: updated inertial parameters
* Added upload.launch which should be used instead of upload_talos.launch
* Clean fake crane link, fix imu orientation.
* Deleted ftsensor.gazebo.xacro (copied from Reem-C and not used)
* New inertials of the torso (incorrectly generated earlier) & head.
* torso_link_1 inertial parameters (now ok)
* Updated dynamic parameters of the torso.
* Updated inertial parameters of the arms (they look ok now)
* New inertial parameters of links 1 and 2 in the arm (2 seems to be wrong).
* Added optional fake crane link.
* Foot collision object can now be specified as an option.
* Various fixes in the model.
* Deleted trailing whitespaces in xacro files.
* Merge branch 'add-talos-description-calibration' into 'erbium-devel'
  Add talos description calibration
  See merge request robots/talos_robot!13
* Add head and camera calibration offsets
* Use xacro --inorder to substitute properties in a filename
* Talos arms will use description_calibration
* Contributors: Hilario Tome, Victor Lopez, alexandersherikov

0.0.24 (2018-04-04)
-------------------
* Update changelog
* Remove baseline and reduce clipping of orbbec_astra_pro
* Merge branch 'fix-tor-talos-naming-issues' into 'dubnium-devel'
  Fix issues when replacing tor with talos
  See merge request robots/talos_robot!9
* Merge branch 'high-res-framerate' into 'dubnium-devel'
  Fix HR camera framerate
  See merge request robots/talos_robot!11
* Fix HR camera framerate
* Fix issues when replacing tor with talos
* Merge branch 'camera-fixes' into 'dubnium-devel'
  Add high_res camera and remove IR which was just rgb
  See merge request robots/talos_robot!10
* Add high_res camera and remove IR which was just rgb
* Contributors: Hilario Tome, Victor Lopez, davidfernandez

0.0.23 (2018-02-19)
-------------------
* updated changelog
* Revert "increased effort limit in torso joint, use mesh collision for the feet."
  This reverts commit 79da15cf0422f552dae87f6bb7ccacd83059989f.
* increased effort limit in torso joint, use mesh collision for the feet.
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Contributors: Hilario Tome, alexandersherikov

0.0.22 (2017-11-11)
-------------------
* Update changelog
* Contributors: Victor Lopez

0.0.21 (2017-11-10)
-------------------
* Update changelog
* Merge branch 'use-orbbec-pro' into 'dubnium-devel'
  Use orbbec pro with correct resolution in simulation
  See merge request robots/talos_robot!5
* Use orbbec pro with correct resolution in simulation
* Merge branch 'better-gripper-collisions' into 'dubnium-devel'
  Collisions that better match the real shape of the gripper
  See merge request !4
* Collisions that better match the real shape of the gripper
* changed gripper plugin to use PID instead of position API
* Contributors: Hilario Tome, Hilario Tomé, Victor Lopez

0.0.20 (2017-08-10 16:33)
-------------------------
* updated changelog
* fixed type in urdf model
* Contributors: Hilario Tome

0.0.19 (2017-08-10 12:41)
-------------------------
* updated changelog
* modified limits of gripper, leg 5 joint,  and arm v2 1 joint
* clenaed lower body model
* Merge branch 'test_urdf' into 'dubnium-devel'
  Test urdf files
  See merge request !3
* Test urdf files
* Contributors: Hilario Tome, Hilario Tomé, davidfernandez

0.0.18 (2017-07-26)
-------------------
* updated changlog
* Contributors: Hilario Tomé

0.0.17 (2017-07-18)
-------------------
* updated changelog
* Fix type in arm_v2 and rename arm_v1 urdf
* remove file with no version for arm
* Added version v1, v2 for urdf and restored walk_pose
* cleanup
* fixed lower body model
* Contributors: Hilario Tome, Hilario Tomé, luca

0.0.16 (2017-02-17)
-------------------
* Updated changelog
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Contributors: Hilario Tome

0.0.15 (2016-11-16)
-------------------
* Add changelog
* Safe range of motion for upper body
* Fix right wrist differential transmission sign
* Contributors: Luca

0.0.14 (2016-11-15 18:27)
-------------------------
* Add changelog
* Contributors: Luca

0.0.13 (2016-11-15 13:10)
-------------------------
* Add changelog
* Contributors: Luca

0.0.12 (2016-11-15 10:01)
-------------------------
* Add changelog
* Cleaninng and renaming v2 to default
* Update hip z link meshes
* Contributors: Luca

0.0.11 (2016-11-12 14:09)
-------------------------
* Add changelog
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Fix imu tf and frame
* Contributors: Luca

0.0.10 (2016-11-12 12:48)
-------------------------
* Update changelog
* Contributors: Victor Lopez

0.0.9 (2016-11-12 11:14)
------------------------
* Add changelog
* Contributors: Luca

0.0.8 (2016-11-11)
------------------
* Add changelog
* Removed xacro if
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Added motions, and ft sensor signs fixed
* Contributors: Luca

0.0.7 (2016-11-10 18:45)
------------------------
* Updated changelog
* Contributors: Hilario Tome

0.0.6 (2016-11-10 18:16)
------------------------
* Updated changelog
* Contributors: Hilario Tome

0.0.5 (2016-11-10 12:06)
------------------------
* Updated changelog
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Fix frame for wrist ft sensors
* Contributors: Hilario Tome, Luca

0.0.4 (2016-11-09)
------------------
* Updated changelog
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Head talos finally working hardware, added wrists ft to pal hardware
* MoveIt and play_motion config files
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Fixed head differential
* Changed gazebo feedback to base_link
* Merge remote-tracking branch 'origin/fix_right_wrist_and_gripper' into dubnium-devel
* Fix right wrist and gripper rotations
* Invert torso joints order. Check base_link
* Contributors: Hilario Tome, Hillario Tome, Luca

0.0.3 (2016-10-31)
------------------
* Updated changelog
* Added default 0 noise to simulated imu
* Temporaly fixed arm dynamics
* Changed head differential, default controllers stopped
* Succesfull walking in talos, added talos teleop
* Contributors: Hilario Tome

0.0.2 (2016-10-13)
------------------
* Updated changelog
* Added sub models to debug gazebo and added implicit tag simulation to 1.0
* Contributors: Hilario Tome

0.0.1 (2016-10-12)
------------------
* Created intial changelog
* Clean up
* Fixed merge
* Added missing foot mesh and changed default topic for state estimator
* Removing joint state publication of virtual joints
* Fix gripper movement in simulation.
  Add colors to model
* Change gripper motor joint to just side_gripper_joint
* Fix gripper controller and add controller launchers for follow joint trajectory controllers
* Fix warning of inconsistent namespace redefinitions for xmlns:xacro:
* Updating to new gripper
* Using new gripper
* Add new gripper model
* Finished renaming
* Finished renaming
* Fixing
* Renamed tor to talos
* Contributors: Hilario Tome, Sam Pfeiffer
