^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package talos_description
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

0.0.15 (2016-11-16)
-------------------
* Safe range of motion for upper body
* Fix right wrist differential transmission sign
* Contributors: Luca

0.0.14 (2016-11-15)
-------------------

Forthcoming
-----------

1.0.0 (2018-04-12)
------------------
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
* Revert "increased effort limit in torso joint, use mesh collision for the feet."
  This reverts commit 79da15cf0422f552dae87f6bb7ccacd83059989f.
* increased effort limit in torso joint, use mesh collision for the feet.
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Contributors: Hilario Tome, alexandersherikov

0.0.22 (2017-11-11)
-------------------

0.0.21 (2017-11-10)
-------------------
* Use orbbec pro with correct resolution in simulation
* Collisions that better match the real shape of the gripper
* changed gripper plugin to use PID instead of position API
* Contributors: Hilario Tomé, Victor Lopez

0.0.20 (2017-08-10)
-------------------
* fixed type in urdf model
* Contributors: Hilario Tome

0.0.19 (2017-08-10)
-------------------
* modified limits of gripper, leg 5 joint,  and arm v2 1 joint
* clenaed lower body model
* Merge branch 'test_urdf' into 'dubnium-devel'
  Test urdf files
  See merge request !3
* Test urdf files
* Contributors: Hilario Tome, Hilario Tomé, davidfernandez

0.0.18 (2017-07-26)
-------------------

0.0.17 (2017-07-18)
-------------------
* Fix type in arm_v2 and rename arm_v1 urdf
* remove file with no version for arm
* Added version v1, v2 for urdf and restored walk_pose
* cleanup
* fixed lower body model
* Contributors: Hilario Tome, luca

0.0.16 (2017-02-17)
-------------------
* 0.0.15
* Add changelog
* Safe range of motion for upper body
* Fix right wrist differential transmission sign
* 0.0.14
* Add changelog
* Contributors: Luca

0.0.13 (2016-11-15)
-------------------

0.0.12 (2016-11-15)
-------------------
* Cleaninng and renaming v2 to default
* Update hip z link meshes
* Contributors: Luca

0.0.11 (2016-11-12)
-------------------
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
* Fix frame for wrist ft sensors
* Contributors: Hilario Tome, Luca

0.0.4 (2016-11-09)
------------------
* Updated changelog
* Merge branch 'dubnium-devel' of gitlab:robots/talos_robot into dubnium-devel
* Head talos finally working hardware, added wrists ft to pal hardware
* MoveIt and play_motion config files
* Fixed head differential
* Changed gazebo feedback to base_link
* Fix right wrist and gripper rotations
* Invert torso joints order. Check base_link
* Contributors: Hilario Tome, Luca

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
