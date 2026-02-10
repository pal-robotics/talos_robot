^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package talos_bringup
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

2.10.3 (2026-02-10)
-------------------

2.10.2 (2026-01-21)
-------------------

2.10.1 (2026-01-08)
-------------------

2.10.0 (2025-12-05)
-------------------

2.9.2 (2025-12-05)
------------------
* Add play_motion2 module
* Contributors: Noel Jimenez

2.9.1 (2025-10-30)
------------------

2.9.0 (2025-10-23)
------------------
* Add play_motion2 cli dependency
* Contributors: Isaac Acevedo

2.8.1 (2025-09-09)
------------------

2.8.0 (2025-09-08)
------------------

2.7.0 (2025-09-03)
------------------

2.6.0 (2025-07-16)
------------------

2.5.0 (2025-07-10)
------------------

2.4.0 (2025-07-09)
------------------
* Add diagnostic analyzers
* Contributors: Noel Jimenez

2.3.0 (2025-07-03)
------------------

2.2.3 (2025-06-30)
------------------

2.2.2 (2025-06-30)
------------------

2.2.1 (2025-06-26)
------------------
* Fix the way the default broadcasters are launched
* Contributors: Maximilien Naveau

2.2.0 (2025-06-25)
------------------

2.1.1 (2025-06-20)
------------------

2.1.0 (2025-06-18)
------------------
* Adapt to changes in play_motion2
* Contributors: davidfernandez

2.0.3 (2025-05-22)
------------------
* Merge branch 'sim_time' into 'humble-devel'
  use_sim_time + head transmission  + gripper mimic
  See merge request robots/talos_robot!142
* Add locomotion pose motion
* Fix use_sim_time
* Contributors: Adrià Roig, Sai Kishor Kothakota

2.0.2 (2025-03-12)
------------------

2.0.1 (2024-09-26)
------------------

2.0.0 (2024-09-18)
------------------
* Merge branch 'ros2-migration' into 'humble-devel'
  Ros2 migration
  See merge request robots/talos_robot!130
* Change from the robot_utils to CommonArgs in launch_pal
* Propagate arg from gazebo launch to robot_state_publisher
* Merge branch 'tpe/joy_linux_fix' into 'ros2-migration'
  Add the fix Joy_linux node and default device
  See merge request robots/talos_robot!132
* Add the fix Joy_linux node and default device
* removed the unused hardware config files
* fix yaml formatting
* update all the talos motions with the script
* fix twist mux
* fix bringup_controllers
* enable play_motion2
* working version with default position controllers
* migrate all the basic launch files
* configs file bringup + motions
* migration of CMakeLists.txt and package.xml to ros2 - bringup
* Contributors: Adrià Roig, Maximilien Naveau, Sai Kishor Kothakota, ileniaperrella, thomas.peyrucain

1.1.30 (2023-11-08)
-------------------
* Merge branch 'play_motion_carry' into 'erbium-devel'
  Add play motions related to carrying weight and boxes
  See merge request robots/talos_robot!127
* Add play motions related to carrying weight and boxes
* Contributors: Adria Roig, Pierre Fernbach

1.1.29 (2023-10-24)
-------------------
* Merge branch 'change_license_to_apache' into 'erbium-devel'
  change public license to Apache License 2.0
  See merge request robots/talos_robot!126
* change public license to Apache License 2.0
* Contributors: Jordan Palacios, Sai Kishor Kothakota

1.1.28 (2023-02-07)
-------------------

1.1.27 (2023-01-18)
-------------------

1.1.26 (2022-10-13)
-------------------

1.1.25 (2022-09-19)
-------------------
* Merge branch 'pierre.fernbach-erbium-devel-patch-78692' into 'erbium-devel'
  Add new play_motion: picture poses
  See merge request robots/talos_robot!116
* Add new play_motion: picture poses
* Contributors: Adria Roig, Pierre Fernbach

1.1.24 (2022-04-20)
-------------------

1.1.23 (2022-03-02)
-------------------
* Merge branch 'add_flexibility' into 'erbium-devel'
  Add flexibility
  See merge request robots/talos_robot!112
* Add robot_description argument to talos_bringup and follow it to moveit launch file
* Contributors: Pierre Fernbach, saikishor

1.1.22 (2022-02-22)
-------------------
* Merge branch 'wrist_zero' into 'erbium-devel'
  Add procedure to make to zero of the wrist FT sensors
  See merge request robots/talos_robot!113
* Add motion to put the arms down with wrist aligned to -z axis in talos_motion.yaml
* Contributors: Jordan Palacios, Pierre Fernbach

1.1.21 (2021-12-01)
-------------------

1.1.20 (2021-11-17)
-------------------

1.1.19 (2021-08-26)
-------------------

1.1.18 (2021-05-26)
-------------------

1.1.17 (2021-03-05)
-------------------

1.1.16 (2020-11-13)
-------------------

1.1.15 (2020-08-01)
-------------------

1.1.14 (2020-07-30)
-------------------

1.1.13 (2020-07-30)
-------------------

1.1.12 (2020-07-21)
-------------------

1.1.11 (2020-07-21)
-------------------
* Merge branch 'talos_6' into 'erbium-devel'
  Add simulation arg for bringup
  See merge request robots/talos_robot!97
* Add simulation arg for bringup
* Contributors: Adria Roig

1.1.10 (2020-07-15)
-------------------

1.1.9 (2020-07-14)
------------------
* Merge branch 'squat' into 'erbium-devel'
  Add squat motion for UAT
  See merge request robots/talos_robot!95
* Add squat motion for UAT
* Contributors: Adria Roig, victor

1.1.8 (2020-07-13)
------------------

1.1.7 (2020-07-02)
------------------

1.1.6 (2020-06-29)
------------------

1.1.5 (2020-05-08)
------------------
* Merge branch 'revert_introspection' into 'erbium-devel'
  Revert "added introspection_controller launch to bringup"
  See merge request robots/talos_robot!90
* Revert "added introspection_controller launch to bringup"
  This reverts commit d81d7d5dd0ee6f46339534086b90093f5f44dc8c.
* Contributors: Sai Kishor Kothakota, victor

1.1.4 (2020-05-06)
------------------
* Merge branch 'introspection_controller' into 'erbium-devel'
  added introspection_controller launch to bringup
  See merge request robots/talos_robot!89
* added introspection_controller launch to bringup
* Contributors: Sai Kishor Kothakota, victor

1.1.3 (2020-03-05)
------------------
* Merge branch 'talos_specific_addons' into 'erbium-devel'
  Talos specific addons
  See merge request robots/talos_robot!86
* add new bringup_addons launch for talos specific
* Contributors: Sai Kishor Kothakota, jordanpalacios

1.1.2 (2020-01-14)
------------------

1.1.1 (2020-01-14)
------------------

1.1.0 (2020-01-10)
------------------

1.0.52 (2019-11-29)
-------------------
* Merge branch 'add_legs_to_play_motion' into 'erbium-devel'
  add move groups for legs
  See merge request robots/talos_robot!78
* add move groups for legs
* Contributors: Luca Marchionni

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
* Merge branch 'move-dependencies' into 'erbium-devel'
  Move dependencies to other packages for public packages
  See merge request robots/talos_robot!68
* Move dependencies to other packages for public packages
* Contributors: Victor Lopez

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

1.0.39 (2018-10-25)
-------------------

1.0.38 (2018-10-24)
-------------------

1.0.37 (2018-10-23)
-------------------
* Merge branch 'as_self_coll_merge_test' into as_sim_self_collisions
* Contributors: alexandersherikov

1.0.36 (2018-10-18)
-------------------

1.0.35 (2018-10-17)
-------------------
* deleted changelogs
* Contributors: Hilario Tome

1.0.34 (2018-09-28)
-------------------
* Updated changelog
* Contributors: Jordan Palacios

1.0.33 (2018-09-27)
-------------------
* updated changelog
* Contributors: Hilario Tome

1.0.32 (2018-09-25)
-------------------
* Updated changelogs
* Merge branch 'current_limit_controller' into 'erbium-devel'
  Current limit controller config and launch file for TALOS
  See merge request robots/talos_robot!52
* Current limit controller config and launch file for TALOS
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
* Contributors: alexandersherikov

1.0.20 (2018-07-24 17:10)
-------------------------
* Updated changelog
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
* Merge branch 'as_extra_model_loading' into 'erbium-devel'
  Avoid multiple model loading, split hardware config files.
  See merge request robots/talos_robot!33
* Avoid multiple model loading, split hardware config files.
* Contributors: alexandersherikov

1.0.15 (2018-07-11)
-------------------
* updated changelog
* Merge branch 'hardware_config' into 'erbium-devel'
  added hardware config for no arms
  See merge request robots/talos_robot!31
* renamed file
* added hardware config for no arms
* Contributors: Hilario Tome

1.0.14 (2018-07-10)
-------------------
* Updated changelog
* Contributors: alexandersherikov

1.0.13 (2018-07-09)
-------------------
* Updated changelog
* Contributors: alexandersherikov

1.0.12 (2018-07-04 20:59)
-------------------------
* Updated changelog
* Contributors: alexandersherikov

1.0.11 (2018-07-04 12:15)
-------------------------
* updated changelog
* Contributors: Hilario Tome

1.0.10 (2018-07-04 10:27)
-------------------------
* updated changelog
* Contributors: Hilario Tome

1.0.9 (2018-06-21)
------------------
* Updated changelog
* Contributors: alexandersherikov

1.0.8 (2018-06-20)
------------------
* updated changelog
* Contributors: Hilario Tome

1.0.7 (2018-06-19 11:08)
------------------------
* updated changelog
* Merge branch 'both_grippers_motions' into 'erbium-devel'
  Add open/close both grippers motions
  See merge request robots/talos_robot!19
* Add open/close both grippers motions
* Contributors: Adrià Roig, Hilario Tome

1.0.6 (2018-06-19 00:30)
------------------------
* updated changelog
* Contributors: Hilario Tome

1.0.5 (2018-06-15)
------------------
* updated changelog
* Contributors: Hilario Tome

1.0.4 (2018-06-12)
------------------
* updated changelog
* Contributors: Hilario Tome

1.0.3 (2018-05-29)
------------------
* Update changelog
* Fix and merge conflit
* Fix duplicated Home motions
* Parameters tuning for default robot
* Contributors: Luca Marchionni, Victor Lopez

1.0.2 (2018-04-18)
------------------
* updated changelog
* Merge branch 'fix_simulation' into 'erbium-devel'
  fixed gripper command mode:
  See merge request robots/talos_robot!16
* fixed merge
* fixed gripper command mode:
* Contributors: Hilario Tome

1.0.1 (2018-04-13)
------------------
* Update changelog
* Merge branch 'as_imu_orientation_to_enu' into 'erbium-devel'
  bringup config: added orientation_to_enu_frame parameter
  See merge request robots/talos_robot!15
* bringup config: added orientation_to_enu_frame parameter
* Contributors: Hilario Tome, Victor Lopez, alexandersherikov

1.0.0 (2018-04-12)
------------------
* updated changelogs
* Contributors: Hilario Tome

0.0.24 (2018-04-04)
-------------------
* Update changelog
* Contributors: Victor Lopez

0.0.23 (2018-02-19)
-------------------
* updated changelog
* Increase home and walk_pose to 2.0 seconds
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Merge branch 'revert-5e7a81e4' into 'dubnium-devel'
  Revert "Merge branch 'fix-motions' into 'dubnium-devel'"
  See merge request robots/talos_robot!8
* Revert "Merge branch 'fix-motions' into 'dubnium-devel'"
  This reverts merge request !7
* Merge branch 'fix-motions' into 'dubnium-devel'
  Remove talos-3 specific motions
  See merge request robots/talos_robot!7
* Remove talos-3 specific motions
* Add meta information so motions are displayed on web commander
* Contributors: Hilario Tome, Jordan Palacios, Victor Lopez, davidfernandez

0.0.22 (2017-11-11)
-------------------
* Update changelog
* Merge branch 'humanoids_motions' into 'dubnium-devel'
  Motions for autopresentation and alive
  See merge request robots/talos_robot!6
* Fix time from start for home_legs
* Motions for autopresentation and alive
* Contributors: Luca, Victor Lopez, davidfernandez

0.0.21 (2017-11-10)
-------------------
* Update changelog
* Move demo_motions to talos_3_specifics
* Add weight lifting moves
* Add leg motion yaml template
* Contributors: Victor Lopez, luca

0.0.20 (2017-08-10 16:33)
-------------------------
* updated changelog
* Contributors: Hilario Tome

0.0.19 (2017-08-10 12:41)
-------------------------
* updated changelog
* Contributors: Hilario Tome

0.0.18 (2017-07-26)
-------------------
* updated changlog
* Contributors: Hilario Tomé

0.0.17 (2017-07-18)
-------------------
* updated changelog
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Add v2 as default param for robot
* Added version v1, v2 for urdf and restored walk_pose
* Contributors: Hilario Tomé, luca

0.0.16 (2017-02-17)
-------------------
* Updated changelog
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Contributors: Hilario Tome

0.0.15 (2016-11-16)
-------------------
* Add changelog
* Contributors: Luca

0.0.14 (2016-11-15 18:27)
-------------------------
* Add changelog
* Params tuning and motions
* Added hardware bringup controllers
* Contributors: Hilario Tome, Luca

0.0.13 (2016-11-15 13:10)
-------------------------
* Add changelog
* Add missing dependency. Walking params and fixed talos motion
* Contributors: Luca

0.0.12 (2016-11-15 10:01)
-------------------------
* Add changelog
* Button from joystick for play_motion
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
* Fix close left gripper motion typo
* Contributors: Luca, Victor Lopez

0.0.9 (2016-11-12 11:14)
------------------------
* Add changelog
* Contributors: Luca

0.0.8 (2016-11-11)
------------------
* Add changelog
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
* Moved the files from talos walking to talos controller configuration
* Contributors: Hilario Tome

0.0.5 (2016-11-10 12:06)
------------------------
* Updated changelog
* Moved talos hardware out of bringup
* motions for talos, tested on robot
* Contributors: Hilario Tome, Luca

0.0.4 (2016-11-09)
------------------
* Updated changelog
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Head talos finally working hardware, added wrists ft to pal hardware
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* MoveIt and play_motion config files
* modified talos bringu
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Modify motions for Talos
* Updated twist mux and add talos.launch
* Not working approach planner
* Modified bringup
* Contributors: Hilario Tome, Hillario Tome, Luca

0.0.3 (2016-10-31)
------------------
* Updated changelog
* Changed head differential, default controllers stopped
* Succesfull walking in talos, added talos teleop
* Added missing depends and completed bringup
* Contributors: Hilario Tome

0.0.2 (2016-10-13)
------------------
* Updated changelog
* Contributors: Hilario Tome

0.0.1 (2016-10-12)
------------------
* Created intial changelog
* Fixing
* Renamed tor to talos
* Contributors: Hilario Tome
