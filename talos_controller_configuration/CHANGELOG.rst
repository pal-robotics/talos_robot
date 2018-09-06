^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package talos_controller_configuration
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

0.0.15 (2016-11-16)
-------------------

0.0.14 (2016-11-15)
-------------------
* Params tuning and motions
* Added hardware bringup controllers
* Contributors: Hilario Tome, Luca

1.0.9 (2018-06-21)
------------------

1.0.28 (2018-09-03)
-------------------
* Merge branch 'add-planner-wrapper' into 'erbium-devel'
  Add new PlanningModelParameters field
  See merge request robots/talos_robot!46
* Add new PlanningModelParameters field
* Contributors: Victor Lopez, alexandersherikov

Forthcoming
-----------
* Merge branch 'as_torso_torque_control' into 'erbium-devel'
  Support for position control for all joints but torso
  See merge request robots/talos_robot!50
* Support for position control for all joints but torso
* Contributors: alexandersherikov

1.0.29 (2018-09-03)
-------------------
* Merge branch 'tunnin_dob' into 'erbium-devel'
  increased dob gains
  See merge request robots/talos_robot!47
* increased dob gains
* 1.0.28
* Updated changelog
* Merge branch 'add-planner-wrapper' into 'erbium-devel'
  Add new PlanningModelParameters field
  See merge request robots/talos_robot!46
* Add new PlanningModelParameters field
* Contributors: Hilario Tome, Victor Lopez, alexandersherikov

1.0.27 (2018-08-28)
-------------------
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
* Merge branch 'tunned_dob' into 'erbium-devel'
  Tunned dob
  See merge request robots/talos_robot!44
* set of parameters working for balancing on real robot
* Contributors: Hilario Tome

1.0.25 (2018-08-01)
-------------------
* Merge branch 'moving_support' into 'erbium-devel'
  added effort controller configuration
  See merge request robots/talos_robot!40
* added effort controller configuration
* Contributors: Hilario Tome

1.0.24 (2018-08-01)
-------------------
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
* Merge branch 'wbc_grasp_demo' into 'erbium-devel'
  Fix local_joint_control no control missing gripers
  See merge request robots/talos_robot!39
* Fix local_joint_control no control missing gripers
* Contributors: Adrià Roig, Hilario Tome

1.0.22 (2018-07-25)
-------------------
* Merge branch 'as_configuration_initializer_yaml' into 'erbium-devel'
  configuration_initializer.yaml: additional parameters
  See merge request robots/talos_robot!38
* configuration_initializer.yaml: additional parameters
* Contributors: alexandersherikov

1.0.21 (2018-07-25)
-------------------

1.0.20 (2018-07-24)
-------------------
* Merge branch 'as_arm_testbench' into 'erbium-devel'
  Configuration files for separate arm_right
  See merge request robots/talos_robot!36
* Configuration files for separate arm_right
* Contributors: alexandersherikov

1.0.19 (2018-07-24)
-------------------
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
* Merge branch 'moving_support' into 'erbium-devel'
  Allow no control for head and torso.
  See merge request robots/talos_robot!34
* Allow no control for head and torso.
* Contributors: alexandersherikov

1.0.17 (2018-07-16)
-------------------
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

1.0.15 (2018-07-11)
-------------------

1.0.14 (2018-07-10)
-------------------
* Merge branch 'as_plus_head' into 'erbium-devel'
  Add head to arm-less configuration
  See merge request robots/talos_robot!30
* Add head to arm-less configuration
* Contributors: alexandersherikov

1.0.13 (2018-07-09)
-------------------

1.0.12 (2018-07-04)
-------------------
* Merge branch 'as_selective_loading' into 'erbium-devel'
  Refactoring to allow partial robot loading.
  See merge request robots/talos_robot!26
* Add default locomotion state, fix controller configs
* Fixed typo in default_controllers.launch
* partial models: launch file renames & refactoring
* Refactoring to allow partial robot loading.
* Contributors: alexandersherikov

1.0.11 (2018-07-04)
-------------------

1.0.10 (2018-07-04)
-------------------
* 1.0.9
* Updated changelog
* Contributors: alexandersherikov

1.0.8 (2018-06-20)
------------------
* Merge branch 'as_fixes' into 'erbium-devel'
  As fixes
  See merge request robots/talos_robot!21
* full_body_position_controllers: parametrize controllers
* Contributors: Hilario Tome, alexandersherikov

1.0.7 (2018-06-19)
------------------

1.0.6 (2018-06-19)
------------------
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

1.0.4 (2018-06-12)
------------------

1.0.3 (2018-05-29)
------------------
* Parameters tuning for default robot
* Contributors: Luca Marchionni

1.0.2 (2018-04-18)
------------------
* Merge branch 'fix_simulation' into 'erbium-devel'
  fixed gripper command mode:
  See merge request robots/talos_robot!16
* fixed merge
* fixed gripper command mode:
* Contributors: Hilario Tome

1.0.1 (2018-04-13)
------------------

1.0.0 (2018-04-12)
------------------

0.0.24 (2018-04-04)
-------------------

0.0.23 (2018-02-19)
-------------------
* changed grippers to effort control for now
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* added local joint control
* Contributors: Hilario Tome

0.0.22 (2017-11-11)
-------------------

0.0.21 (2017-11-10)
-------------------

0.0.20 (2017-08-10)
-------------------

0.0.19 (2017-08-10)
-------------------

0.0.18 (2017-07-26)
-------------------
* added missing depend walk utils
* Contributors: Hilario Tomé

0.0.17 (2017-07-18)
-------------------
* Added version v1, v2 for urdf and restored walk_pose
* Contributors: luca

0.0.16 (2017-02-17)
-------------------
* added use safe mode to joint trajectory controllers
* 0.0.15
* Add changelog
* 0.0.14
* Add changelog
* Params tuning and motions
* Added hardware bringup controllers
* Contributors: Hilario Tome, Luca

0.0.13 (2016-11-15)
-------------------
* Lipm z higher because of covers
* Add missing dependency. Walking params and fixed talos motion
* Contributors: Luca

0.0.12 (2016-11-15)
-------------------
* Remove --stopped param from init_offset_controller
* Cleaninng and renaming v2 to default
* Contributors: Luca

0.0.11 (2016-11-12)
-------------------

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
* Change gripper motor joint to just side_gripper_joint
* Fix gripper controller and add controller launchers for follow joint trajectory controllers
* Fixing
* Renamed tor to talos
* Contributors: Hilario Tome, Sam Pfeiffer
