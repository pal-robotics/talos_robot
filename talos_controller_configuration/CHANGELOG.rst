^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package talos_controller_configuration
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

2.10.3 (2026-02-10)
-------------------

2.10.2 (2026-01-21)
-------------------

2.10.1 (2026-01-08)
-------------------
* Add "Hardware Components Activity" module dependency
* Contributors: Noel Jimenez

2.10.0 (2025-12-05)
-------------------

2.9.2 (2025-12-05)
------------------

2.9.1 (2025-10-30)
------------------

2.9.0 (2025-10-23)
------------------

2.8.1 (2025-09-09)
------------------

2.8.0 (2025-09-08)
------------------

2.7.0 (2025-09-03)
------------------

2.6.0 (2025-07-16)
------------------
* Rename imu name and add ENU parameters
* Contributors: Isaac Acevedo

2.5.0 (2025-07-10)
------------------
* Add diagnostic analyzers
* Contributors: Noel Jimenez

2.4.0 (2025-07-09)
------------------

2.3.0 (2025-07-03)
------------------

2.2.3 (2025-06-30)
------------------

2.2.2 (2025-06-30)
------------------
* Fix the naming of th torque_broadcaster. Add it to the launch description.
* Contributors: Maximilien Naveau

2.2.1 (2025-06-26)
------------------

2.2.0 (2025-06-25)
------------------
* Adding joint_torque_state_broadcaster
  Publishes torque as effort and absolute position as position
* Contributors: Jordan Palacios

2.1.1 (2025-06-20)
------------------
* Added module for starting the default_broadcasters
* bringup_controllers is now default_broadcasters
* Removing unnecessary controllers
* Contributors: Jordan Palacios

2.1.0 (2025-06-18)
------------------

2.0.3 (2025-05-22)
------------------
* Merge branch 'sim_time' into 'humble-devel'
  use_sim_time + head transmission  + gripper mimic
  See merge request robots/talos_robot!142
* Fix use_sim_time
* Contributors: Adrià Roig, Sai Kishor Kothakota

2.0.2 (2025-03-12)
------------------

2.0.1 (2024-09-26)
------------------
* Merge branch 'migration_bugfix' into 'humble-devel'
  Migration Bugfixing
  See merge request robots/talos_robot!134
* fix typo
* Contributors: Sai Kishor Kothakota, sergiacosta

2.0.0 (2024-09-18)
------------------
* Merge branch 'ros2-migration' into 'humble-devel'
  Ros2 migration
  See merge request robots/talos_robot!130
* removed the default controllers from the bringup launch
* remove the unused args
* Change from the robot_utils to CommonArgs in launch_pal
* Add both leg position controllers into the position_controllers launch
* Update rest of the controller type parameters into the config files
* update the configurations of the broadcasters
* remove unnecessary non-existing controller launch and config
* move the controller type to the config files for the position controllers
* Comment out the non migrated dependencies
* Cleanup some import and start the default controller from the start.
* make sure the rate parameter is taken into account.
* Update the plotjuggler view to include the joint state
* Reduce the update_rate of the broadcasters
* Update the plot_juggler session on sensors debugging
* add the imu to ro2_control
* [talos_controller_configuration] add all F/T broadcasters and the estimator parameters and launcher.
* [talos_descirption] Try to add the force sensors at the feet
* set default position controllers arg full_v2 model
* remove default_controllers (position for now) from bringup controllers
* remove leg position controllers frfom position_controllers.launch.py
* fix jtc yaml files
* update gripper mimic joint and sensors
* clean launch files
* remove python script
* initialisation script added
* conf files for sensors
* bringup controllers
* working version with default position controllers
* fix force_torque_sensor controller name
* migrate all the basic launch files
* update all the config file for controller_configuration
* Merge branch 'feat/ros2controlcli_dependency' into 'humble-devel'
  Add ros2controlcli dependency
  See merge request robots/talos_robot!129
* Add ros2controlcli dependency
* migration of CMakeLists.txt and package.xml to ros2 - controller_config.
* Contributors: Jordan Palacios, Maximilien Naveau, Noel Jimenez, Sai Kishor Kothakota, ileniaperrella

1.1.30 (2023-11-08)
-------------------
* Merge branch 'smooth_position_control' into 'erbium-devel'
  Add parameters for direct_position_control
  See merge request robots/talos_robot!125
* Update limiter_max_rate parameters in direct position control
* Add parameters for direct_position_control
* Contributors: Adria Roig, Adrià Roig, Sai Kishor Kothakota

1.1.29 (2023-10-24)
-------------------
* Merge branch 'reset_ft_offset' into 'erbium-devel'
  Reset ankle FT offset also *before* starting default controller
  See merge request robots/talos_robot!124
* Merge branch 'change_license_to_apache' into 'erbium-devel'
  change public license to Apache License 2.0
  See merge request robots/talos_robot!126
* change public license to Apache License 2.0
* Reset ankle FT offset also *before* starting default controller
* Contributors: Jordan Palacios, Pierre Fernbach, Sai Kishor Kothakota

1.1.28 (2023-02-07)
-------------------

1.1.27 (2023-01-18)
-------------------

1.1.26 (2022-10-13)
-------------------
* Merge branch 'ft_zero_calibration' into 'erbium-devel'
  Ft zero calibration
  See merge request robots/talos_robot!117
* Ft zero calibration
* Contributors: Jordan Palacios, maximiliennaveau

1.1.25 (2022-09-19)
-------------------

1.1.24 (2022-04-20)
-------------------

1.1.23 (2022-03-02)
-------------------
* Remove actuator parameters for flexibility joints from this package
* Update stiffness value of hip flexibility to 4000 Nm
* Add actuator params yaml files for the flexibility
* Contributors: Pierre Fernbach

1.1.22 (2022-02-22)
-------------------
* Fix wrong actuator parameters
* Merge branch 'wrist_zero' into 'erbium-devel'
  Add procedure to make to zero of the wrist FT sensors
  See merge request robots/talos_robot!113
* Add option to talos_initialisation script to make the zero set of the wrist FT
* Contributors: Adria Roig, Jordan Palacios, Pierre Fernbach

1.1.21 (2021-12-01)
-------------------

1.1.20 (2021-11-17)
-------------------
* Merge branch 'impedance_param_files' into 'erbium-devel'
  Impedance param files
  See merge request robots/talos_robot!109
* added default parameters and specifics params file
* added empty impedance parameter files
* Contributors: Adria Roig, Sai Kishor Kothakota

1.1.19 (2021-08-26)
-------------------
* Merge branch 'kangaroo_wbc' into 'erbium-devel'
  Add ballscrew parameters in actuators params
  See merge request robots/talos_robot!108
* Add ballscrew parameters in actuators params
* Contributors: Adria Roig, victor

1.1.18 (2021-05-26)
-------------------
* Merge branch 'reset_ft_twice' into 'erbium-devel'
  reset FTs twice before and after launching the default controllers
  See merge request robots/talos_robot!107
* reset FTs twice before and after launching the default controllers
* Contributors: Sai Kishor Kothakota, saikishor

1.1.17 (2021-03-05)
-------------------

1.1.16 (2020-11-13)
-------------------

1.1.15 (2020-08-01)
-------------------
* Merge branch 'talos6_final' into 'erbium-devel'
  Talos6 final
  See merge request robots/talos_robot!103
* Update the new max_distance_impulse for elbow joints
* update the max distance impulse after testing on TALOS-6 with full_v2
* Contributors: Sai Kishor Kothakota, saikishor

1.1.14 (2020-07-30)
-------------------

1.1.13 (2020-07-30)
-------------------
* Merge branch 'covers' into 'erbium-devel'
  Increase safety after testing with covers
  See merge request robots/talos_robot!102
* Increase safety after testing with covers
* Contributors: Adria Roig, victor

1.1.12 (2020-07-21)
-------------------
* Merge branch 'initialisation_improvement' into 'erbium-devel'
  Initialisation improvement
  See merge request robots/talos_robot!99
* fix the raw input message in talos initialization script
* Added tts client to state the status of initialization
* Contributors: Sai Kishor Kothakota, saikishor

1.1.11 (2020-07-21)
-------------------
* Merge branch 'default_torques' into 'erbium-devel'
  Default torques
  See merge request robots/talos_robot!98
* added the torque offsets that need to be overriden
* Contributors: Adria Roig, Sai Kishor Kothakota

1.1.10 (2020-07-15)
-------------------
* Merge branch 'max_impulse_tests' into 'erbium-devel'
  Increase max_impulse_dist for some joints
  See merge request robots/talos_robot!96
* Increase max_impulse_dist for some joints
* Contributors: Adria Roig, victor

1.1.9 (2020-07-14)
------------------

1.1.8 (2020-07-13)
------------------
* Set temporal result so we can launch default controllers
* Contributors: Jordan Palacios

1.1.7 (2020-07-02)
------------------
* Merge branch '2KHz' into 'erbium-devel'
  2 k hz
  See merge request robots/talos_robot!94
* Tune default safety_parameters
* Set walking controller at 2KHz
* added a way to disable safety for only a set of joints
* Update default_safety_parameters.yaml
* Reduce max impulse
* Contributors: Adria Roig, Adrià Roig, Sai Kishor Kothakota, victor

1.1.6 (2020-06-29)
------------------
* Merge branch 'init_script' into 'erbium-devel'
  Initialisation script
  See merge request robots/talos_robot!93
* Redirect applications output to a log file
* Use wait() for shell commands
* Don't stop default controllers after starting them
* Launch introspection controller too
* Shell command stdin, stdout and stderr are None by default
* Renamed result parameter
* Fixed ati reset retcode usage
* Using ros logging instead
* Initialisation script
* Contributors: Jordan Palacios, jordanpalacios

1.1.5 (2020-05-08)
------------------

1.1.4 (2020-05-06)
------------------

1.1.3 (2020-03-05)
------------------

1.1.2 (2020-01-14)
------------------
* Merge branch 'more_refactor' into 'erbium-devel'
  remove default safety info from specifics params
  See merge request robots/talos_robot!84
* remove default safety info from specifics params
* Contributors: Sai Kishor Kothakota

1.1.1 (2020-01-14)
------------------
* Merge branch 'specifics_refactor' into 'erbium-devel'
  added changes to choose the specifics yamls
  See merge request robots/talos_robot!82
* Revert "added joints to control script"
  This reverts commit a73220e081a42dcb94a5742feab0fba07c9944cc.
* added joints to control script
* renamed walking offsets yaml to walking_specific_params.yaml
* added optenv based specific_file_path argument
* added actuator_safety_specific_params file
* added specific configuration of inertia shaping control
* added changes to choose the specifics yamls
* Contributors: Jordan Palacios, Sai Kishor Kothakota

1.1.0 (2020-01-10)
------------------

1.0.52 (2019-11-29)
-------------------

1.0.51 (2019-07-15)
-------------------
* Merge branch 'stance_actuators_test' into 'erbium-devel'
  changed definitiion of safety override
  See merge request robots/talos_robot!75
* changed definitiion of safety override
* Contributors: Hilario Tome

1.0.50 (2019-07-10)
-------------------
* Merge branch 'stance_actuators_test' into 'erbium-devel'
  Stance actuators test
  See merge request robots/talos_robot!74
* standing test launches
* Contributors: Hilario Tome

1.0.49 (2019-05-30)
-------------------
* added head
* Merge branch 'head_hal_differential' into 'erbium-devel'
  added head config files
  See merge request robots/talos_robot!72
* added head config files
* Contributors: Hilario Tome

1.0.48 (2019-03-27)
-------------------
* Merge branch 'reenabled_safety' into 'erbium-devel'
  reenabled safety
  See merge request robots/talos_robot!71
* reenabled safety
* Contributors: Hilario Tome

1.0.47 (2019-03-19)
-------------------
* Merge branch 'actuator_simulation' into 'erbium-devel'
  working simulator with actuators and torque control on the lower body of talos
  See merge request robots/talos_robot!70
* added missing gripper actuator parameters
* added missing actuator parameters:
* working simulator with actuators and torque control on the lower body of talos
* Contributors: Hilario Tome

1.0.46 (2019-03-07)
-------------------
* Merge branch 'walk_pose' into 'erbium-devel'
  Update walk pose params format
  See merge request robots/talos_robot!69
* Update walk pose params format
* Change license to LGPL-3.0
* Contributors: Adrià Roig, Hilario Tome, Victor Lopez

1.0.45 (2018-12-20)
-------------------
* Merge branch 'move-dependencies' into 'erbium-devel'
  Move dependencies to other packages for public packages
  See merge request robots/talos_robot!68
* Move dependencies to other packages for public packages
* Contributors: Victor Lopez

1.0.44 (2018-11-29)
-------------------
* Merge branch 'as_safety' into 'erbium-devel'
  Add default_safety_parameters.yaml
  See merge request robots/talos_robot!65
* Drop joint specific safety parameters
* Update default_safety_parameters.yaml
* Add default_safety_parameters.yaml
* Contributors: alexandersherikov

1.0.43 (2018-11-22)
-------------------
* Load params for v1 too
* Contributors: Jordan Palacios

1.0.42 (2018-11-21)
-------------------
* Merge branch 'as_partial_tree' into 'erbium-devel'
  Update URDFModelParameters (configuration_initializer.yaml)
  See merge request robots/talos_robot!66
* Update URDFModelParameters (configuration_initializer.yaml)
* Contributors: alexandersherikov

1.0.41 (2018-11-20)
-------------------
* Merge branch 'as_param_fix' into 'erbium-devel'
  Update PlanningModelParameters in configuration_initializer.yaml
  See merge request robots/talos_robot!67
* Update PlanningModelParameters in configuration_initializer.yaml
* Contributors: alexandersherikov

1.0.40 (2018-11-02)
-------------------

1.0.39 (2018-10-25)
-------------------
* Merge branch 'as_drop_deprecated_cfg' into 'erbium-devel'
  Drop deprecated CollisionModelParameters
  See merge request robots/talos_robot!63
* Drop deprecated CollisionModelParameters
* Contributors: alexandersherikov

1.0.38 (2018-10-24)
-------------------

1.0.37 (2018-10-23)
-------------------
* Merge branch 'as_self_coll_merge_test' into 'erbium-devel'
  As self coll merge test
  See merge request robots/talos_robot!61
* Temporary revert changes in configuration_initializer.yaml
  This should allow to merge changes without breaking tests.
* Merge branch 'as_self_coll_merge_test' into as_sim_self_collisions
* Update collision model parameters.
* Update collision model parameters.
* Contributors: alexandersherikov

1.0.36 (2018-10-18)
-------------------
* Merge branch 'type_current_limit' into 'erbium-devel'
  fixed type current limit controllers
  See merge request robots/talos_robot!58
* fixed type current limit controllers
* Contributors: Hilario Tome, Victor Lopez

1.0.35 (2018-10-17)
-------------------
* deleted changelogs
* Merge branch 'head' into 'erbium-devel'
  added open loop parameters
  See merge request robots/talos_robot!55
* added open loop parameters
* Contributors: Hilario Tome

1.0.34 (2018-09-28)
-------------------
* Updated changelog
* Contributors: Jordan Palacios

1.0.33 (2018-09-27)
-------------------
* updated changelog
* Merge branch 'arm_torque_control' into 'erbium-devel'
  Arm torque control
  See merge request robots/talos_robot!53
* more parameters for torque control of upper body
* added no control yaml
* tunning
* started adding analytic dob
* removed dt parameter
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
* Merge branch 'more_params' into 'erbium-devel'
  filter factory
  See merge request robots/talos_robot!51
* filter factory
* Merge branch 'more_params' into 'erbium-devel'
  cleanup
  See merge request robots/talos_robot!49
* increased friction compensantion gains
* cleanup
* Contributors: Hilario Tome

1.0.30 (2018-09-06)
-------------------
* Updated changelog
* Merge branch 'as_torso_torque_control' into 'erbium-devel'
  Support for position control for all joints but torso
  See merge request robots/talos_robot!50
* Support for position control for all joints but torso
* Contributors: alexandersherikov

1.0.29 (2018-09-03 20:05)
-------------------------
* update changelog
* Merge branch 'tunnin_dob' into 'erbium-devel'
  increased dob gains
  See merge request robots/talos_robot!47
* increased dob gains
* Contributors: Hilario Tome

1.0.28 (2018-09-03 10:22)
-------------------------
* Updated changelog
* Merge branch 'add-planner-wrapper' into 'erbium-devel'
  Add new PlanningModelParameters field
  See merge request robots/talos_robot!46
* Add new PlanningModelParameters field
* Contributors: Victor Lopez, alexandersherikov

1.0.27 (2018-08-28)
-------------------
* updated changelog
* Merge branch 'dob_on' into 'erbium-devel'
  Dob on
  See merge request robots/talos_robot!45
* changed torque sensor offsets and added dob
* added velocity tolerance parametes
* Merge branch 'more_params' of gitlab:robots/talos_robot into tunning
* modified motor inertias
* added velocity filtering params
* Contributors: Hilario Tome

1.0.26 (2018-08-24)
-------------------
* updated changelog
* Merge branch 'tunned_dob' into 'erbium-devel'
  Tunned dob
  See merge request robots/talos_robot!44
* set of parameters working for balancing on real robot
* Contributors: Hilario Tome

1.0.25 (2018-08-01 15:05)
-------------------------
* updated changelog
* Merge branch 'moving_support' into 'erbium-devel'
  added effort controller configuration
  See merge request robots/talos_robot!40
* added effort controller configuration
* Contributors: Hilario Tome

1.0.24 (2018-08-01 15:03)
-------------------------
* updated changelog
* Merge branch 'default_controllers' into 'erbium-devel'
  Fix upper_body launch file
  See merge request robots/talos_robot!42
* Merge branch 'arm_hardware' into 'erbium-devel'
  Arm hardware
  See merge request robots/talos_robot!41
* removed shaking but modifing the cutoff filter for joint 1 and 2 of the arm
* added segmented controllers for wrist
* added missing params for left arm
* added gripper safety parameters
* added safety parameters for right amr
* Fix upper_body launch file
* fixed arm and torso actuator parameters
* Contributors: Adrià Roig, Hilario Tome

1.0.23 (2018-07-30)
-------------------
* updated changelog
* Merge branch 'wbc_grasp_demo' into 'erbium-devel'
  Fix local_joint_control no control missing gripers
  See merge request robots/talos_robot!39
* Fix local_joint_control no control missing gripers
* Contributors: Adrià Roig, Hilario Tome

1.0.22 (2018-07-25 18:04)
-------------------------
* Updated changelog
* Merge branch 'as_configuration_initializer_yaml' into 'erbium-devel'
  configuration_initializer.yaml: additional parameters
  See merge request robots/talos_robot!38
* configuration_initializer.yaml: additional parameters
* Contributors: alexandersherikov

1.0.21 (2018-07-25 15:16)
-------------------------
* Updated changelog
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
* configuration_initializer.yaml: adjust safety margin
* Merge branch 'as_controller_utils' into 'erbium-devel'
  Added utils/: Makefile to send joint commands
  See merge request robots/talos_robot!24
* Workaround for a delay issue in controller spawner.
* Add configuration_initializer.yaml
* Added README
* Add send_joint_commands.launch, install utils
* Added utils/: Makefile to send joint commands
* Contributors: alexandersherikov

1.0.18 (2018-07-19)
-------------------
* Updated changelog
* Merge branch 'moving_support' into 'erbium-devel'
  Allow no control for head and torso.
  See merge request robots/talos_robot!34
* Allow no control for head and torso.
* Contributors: alexandersherikov

1.0.17 (2018-07-16)
-------------------
* updated changelog
* Merge branch 'hardware_tunning' into 'erbium-devel'
  Hardware tunning
  See merge request robots/talos_robot!23
* added parameters for left leg
* added ripple filter cancelation, and inertia compensation to zero
* added pid leg 1 joint
* right leg full initial tunning done
* right leg 3 5 6 joint tunned
* added safety parameters
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
* Contributors: alexandersherikov

1.0.12 (2018-07-04 20:59)
-------------------------
* Updated changelog
* Merge branch 'as_selective_loading' into 'erbium-devel'
  Refactoring to allow partial robot loading.
  See merge request robots/talos_robot!26
* Add default locomotion state, fix controller configs
* Fixed typo in default_controllers.launch
* partial models: launch file renames & refactoring
* Refactoring to allow partial robot loading.
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
* Merge branch 'as_fixes' into 'erbium-devel'
  As fixes
  See merge request robots/talos_robot!21
* full_body_position_controllers: parametrize controllers
* Contributors: Hilario Tome, alexandersherikov

1.0.7 (2018-06-19 11:08)
------------------------
* updated changelog
* Contributors: Hilario Tome

1.0.6 (2018-06-19 00:30)
------------------------
* updated changelog
* Merge branch 'tunning_hardware' into 'erbium-devel'
  started adding local joint control parameters
  See merge request robots/talos_robot!17
* fixed local joint control
* added gripper config files
* finished adding parameters for actuators, they need to be filled with the correct parameters
* started adding local joint control parameters
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
* Parameters tuning for default robot
* Contributors: Luca Marchionni

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
* Contributors: Victor Lopez

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
* changed grippers to effort control for now
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* added local joint control
* Contributors: Hilario Tome

0.0.22 (2017-11-11)
-------------------
* Update changelog
* Contributors: Victor Lopez

0.0.21 (2017-11-10)
-------------------
* Update changelog
* Contributors: Victor Lopez

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
* added missing depend walk utils
* Contributors: Hilario Tomé

0.0.17 (2017-07-18)
-------------------
* updated changelog
* Added version v1, v2 for urdf and restored walk_pose
* Contributors: Hilario Tomé, luca

0.0.16 (2017-02-17)
-------------------
* Updated changelog
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* added use safe mode to joint trajectory controllers
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
* Lipm z higher because of covers
* Add missing dependency. Walking params and fixed talos motion
* Contributors: Luca

0.0.12 (2016-11-15 10:01)
-------------------------
* Add changelog
* Remove --stopped param from init_offset_controller
* Cleaninng and renaming v2 to default
* Contributors: Luca

0.0.11 (2016-11-12 14:09)
-------------------------
* Add changelog
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Contributors: Luca

0.0.10 (2016-11-12 12:48)
-------------------------
* Update changelog
* Add missing dependencies to talos_controller_configuration
* Contributors: Victor Lopez

0.0.9 (2016-11-12 11:14)
------------------------
* Add changelog
* Talos offsets for walking and tuning params
* Contributors: Luca

0.0.8 (2016-11-11)
------------------
* Add changelog
* Changed torso joint to Z
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Contributors: Luca

0.0.7 (2016-11-10 18:45)
------------------------
* Updated changelog
* Fixed bug package depend head action
* Contributors: Hilario Tome

0.0.6 (2016-11-10 18:16)
------------------------
* Updated changelog
* Moved the files from talos walking to talos controller configuration
* Contributors: Hilario Tome

0.0.5 (2016-11-10 12:06)
------------------------
* Updated changelog
* motions for talos, tested on robot
* Contributors: Hilario Tome, Luca

0.0.4 (2016-11-09)
------------------
* Updated changelog
* Modified bringup
* Contributors: Hilario Tome

0.0.3 (2016-10-31)
------------------
* Updated changelog
* Added joint torque control
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
* Fixed merge
* Change gripper motor joint to just side_gripper_joint
* Fix gripper controller and add controller launchers for follow joint trajectory controllers
* Fixing
* Renamed tor to talos
* Contributors: Hilario Tome, Sam Pfeiffer
