/*
 * Copyright 2021 PAL Robotics SL. All Rights Reserved
 *
 * Unauthorized copying of this file, via any medium is strictly prohibited,
 * unless it was supplied under the terms of a license agreement or
 * nondisclosure agreement with PAL Robotics SL. In this case it may not be
 * copied or disclosed except in accordance with the terms of that agreement.
 */
#ifndef CALIBRATION_PARAMETERS_TEST_H
#define CALIBRATION_PARAMETERS_TEST_H

#include <ros/ros.h>
#include <ros/package.h>
#include <gtest/gtest.h>
#include <rbdl/addons/urdfreader/urdfreader.h>
#include "offsets_list.h"

class CalibrationParametersTest : public ::testing::Test
{
protected:
  void SetUp() override
  {
    package_path_ = ros::package::getPath("talos_description");
    urdf_no_offset_path_ = package_path_ + "/test/calibration/all_zero.urdf";
    urdf_with_offset_path_ = package_path_ + "/test/calibration/displaced.urdf";

    model_no_offset_ = new RigidBodyDynamics::Model();
    model_with_offset_ = new RigidBodyDynamics::Model();
    if (!RigidBodyDynamics::Addons::URDFReadFromFile(
            urdf_no_offset_path_.c_str(), model_no_offset_,
            RigidBodyDynamics::FloatingBaseType::FixedBase))
    {
      ROS_ERROR_STREAM("Error loading model ./calibration/all_zero.urdf");
      exit(1);
    }
    if (!RigidBodyDynamics::Addons::URDFReadFromFile(
            urdf_with_offset_path_.c_str(), model_with_offset_,
            RigidBodyDynamics::FloatingBaseType::FixedBase))
    {
      ROS_ERROR_STREAM("Error loading model ./calibration/displaced.urdf");
      exit(1);
    }

    leg_left_1_joint_offset.resize(6);
    leg_left_2_joint_offset.resize(6);
    leg_left_3_joint_offset.resize(6);
    leg_left_4_joint_offset.resize(6);
    leg_left_5_joint_offset.resize(6);
    leg_left_6_joint_offset.resize(6);

    leg_right_1_joint_offset.resize(6);
    leg_right_2_joint_offset.resize(6);
    leg_right_3_joint_offset.resize(6);
    leg_right_4_joint_offset.resize(6);
    leg_right_5_joint_offset.resize(6);
    leg_right_6_joint_offset.resize(6);

    arm_left_1_joint_offset.resize(6);
    arm_left_2_joint_offset.resize(6);
    arm_left_3_joint_offset.resize(6);
    arm_left_4_joint_offset.resize(6);
    arm_left_5_joint_offset.resize(6);
    arm_left_6_joint_offset.resize(6);
    arm_left_7_joint_offset.resize(6);

    arm_right_1_joint_offset.resize(6);
    arm_right_2_joint_offset.resize(6);
    arm_right_3_joint_offset.resize(6);
    arm_right_4_joint_offset.resize(6);
    arm_right_5_joint_offset.resize(6);
    arm_right_6_joint_offset.resize(6);
    arm_right_7_joint_offset.resize(6);

    head_1_joint_offset.resize(6);
    head_2_joint_offset.resize(6);

    torso_1_joint_offset.resize(6);
    torso_2_joint_offset.resize(6);

    leg_left_1_joint_offset << leg_left_1_joint_x_offset, leg_left_1_joint_y_offset,
        leg_left_1_joint_z_offset, leg_left_1_joint_roll_offset,
        leg_left_1_joint_pitch_offset, leg_left_1_joint_yaw_offset;
    leg_left_2_joint_offset << leg_left_2_joint_x_offset, leg_left_2_joint_y_offset,
        leg_left_2_joint_z_offset, leg_left_2_joint_roll_offset,
        leg_left_2_joint_pitch_offset, leg_left_2_joint_yaw_offset;
    leg_left_3_joint_offset << leg_left_3_joint_x_offset, leg_left_3_joint_y_offset,
        leg_left_3_joint_z_offset, leg_left_3_joint_roll_offset,
        leg_left_3_joint_pitch_offset, leg_left_3_joint_yaw_offset;
    leg_left_4_joint_offset << leg_left_4_joint_x_offset, leg_left_4_joint_y_offset,
        leg_left_4_joint_z_offset, leg_left_4_joint_roll_offset,
        leg_left_4_joint_pitch_offset, leg_left_4_joint_yaw_offset;
    leg_left_5_joint_offset << leg_left_5_joint_x_offset, leg_left_5_joint_y_offset,
        leg_left_5_joint_z_offset, leg_left_5_joint_roll_offset,
        leg_left_5_joint_pitch_offset, leg_left_5_joint_yaw_offset;
    leg_left_6_joint_offset << leg_left_6_joint_x_offset, leg_left_6_joint_y_offset,
        leg_left_6_joint_z_offset, leg_left_6_joint_roll_offset,
        leg_left_6_joint_pitch_offset, leg_left_6_joint_yaw_offset;

    leg_right_1_joint_offset << leg_right_1_joint_x_offset, leg_right_1_joint_y_offset,
        leg_right_1_joint_z_offset, leg_right_1_joint_roll_offset,
        leg_right_1_joint_pitch_offset, leg_right_1_joint_yaw_offset;
    leg_right_2_joint_offset << leg_right_2_joint_x_offset, leg_right_2_joint_y_offset,
        leg_right_2_joint_z_offset, leg_right_2_joint_roll_offset,
        leg_right_2_joint_pitch_offset, leg_right_2_joint_yaw_offset;
    leg_right_3_joint_offset << leg_right_3_joint_x_offset, leg_right_3_joint_y_offset,
        leg_right_3_joint_z_offset, leg_right_3_joint_roll_offset,
        leg_right_3_joint_pitch_offset, leg_right_3_joint_yaw_offset;
    leg_right_4_joint_offset << leg_right_4_joint_x_offset, leg_right_4_joint_y_offset,
        leg_right_4_joint_z_offset, leg_right_4_joint_roll_offset,
        leg_right_4_joint_pitch_offset, leg_right_4_joint_yaw_offset;
    leg_right_5_joint_offset << leg_right_5_joint_x_offset, leg_right_5_joint_y_offset,
        leg_right_5_joint_z_offset, leg_right_5_joint_roll_offset,
        leg_right_5_joint_pitch_offset, leg_right_5_joint_yaw_offset;
    leg_right_6_joint_offset << leg_right_6_joint_x_offset, leg_right_6_joint_y_offset,
        leg_right_6_joint_z_offset, leg_right_6_joint_roll_offset,
        leg_right_6_joint_pitch_offset, leg_right_6_joint_yaw_offset;

    arm_left_1_joint_offset << arm_left_1_joint_x_offset, arm_left_1_joint_y_offset,
        arm_left_1_joint_z_offset, arm_left_1_joint_roll_offset,
        arm_left_1_joint_pitch_offset, arm_left_1_joint_yaw_offset;
    arm_left_2_joint_offset << arm_left_2_joint_x_offset, arm_left_2_joint_y_offset,
        arm_left_2_joint_z_offset, arm_left_2_joint_roll_offset,
        arm_left_2_joint_pitch_offset, arm_left_2_joint_yaw_offset;
    arm_left_3_joint_offset << arm_left_3_joint_x_offset, arm_left_3_joint_y_offset,
        arm_left_3_joint_z_offset, arm_left_3_joint_roll_offset,
        arm_left_3_joint_pitch_offset, arm_left_3_joint_yaw_offset;
    arm_left_4_joint_offset << arm_left_4_joint_x_offset, arm_left_4_joint_y_offset,
        arm_left_4_joint_z_offset, arm_left_4_joint_roll_offset,
        arm_left_4_joint_pitch_offset, arm_left_4_joint_yaw_offset;
    arm_left_5_joint_offset << arm_left_5_joint_x_offset, arm_left_5_joint_y_offset,
        arm_left_5_joint_z_offset, arm_left_5_joint_roll_offset,
        arm_left_5_joint_pitch_offset, arm_left_5_joint_yaw_offset;
    arm_left_6_joint_offset << arm_left_6_joint_x_offset, arm_left_6_joint_y_offset,
        arm_left_6_joint_z_offset, arm_left_6_joint_roll_offset,
        arm_left_6_joint_pitch_offset, arm_left_6_joint_yaw_offset;
    arm_left_7_joint_offset << arm_left_7_joint_x_offset, arm_left_7_joint_y_offset,
        arm_left_7_joint_z_offset, arm_left_7_joint_roll_offset,
        arm_left_7_joint_pitch_offset, arm_left_7_joint_yaw_offset;

    arm_right_1_joint_offset << arm_right_1_joint_x_offset, arm_right_1_joint_y_offset,
        arm_right_1_joint_z_offset, arm_right_1_joint_roll_offset,
        arm_right_1_joint_pitch_offset, arm_right_1_joint_yaw_offset;
    arm_right_2_joint_offset << arm_right_2_joint_x_offset, arm_right_2_joint_y_offset,
        arm_right_2_joint_z_offset, arm_right_2_joint_roll_offset,
        arm_right_2_joint_pitch_offset, arm_right_2_joint_yaw_offset;
    arm_right_3_joint_offset << arm_right_3_joint_x_offset, arm_right_3_joint_y_offset,
        arm_right_3_joint_z_offset, arm_right_3_joint_roll_offset,
        arm_right_3_joint_pitch_offset, arm_right_3_joint_yaw_offset;
    arm_right_4_joint_offset << arm_right_4_joint_x_offset, arm_right_4_joint_y_offset,
        arm_right_4_joint_z_offset, arm_right_4_joint_roll_offset,
        arm_right_4_joint_pitch_offset, arm_right_4_joint_yaw_offset;
    arm_right_5_joint_offset << arm_right_5_joint_x_offset, arm_right_5_joint_y_offset,
        arm_right_5_joint_z_offset, arm_right_5_joint_roll_offset,
        arm_right_5_joint_pitch_offset, arm_right_5_joint_yaw_offset;
    arm_right_6_joint_offset << arm_right_6_joint_x_offset, arm_right_6_joint_y_offset,
        arm_right_6_joint_z_offset, arm_right_6_joint_roll_offset,
        arm_right_6_joint_pitch_offset, arm_right_6_joint_yaw_offset;
    arm_right_7_joint_offset << arm_right_7_joint_x_offset, arm_right_7_joint_y_offset,
        arm_right_7_joint_z_offset, arm_right_7_joint_roll_offset,
        arm_right_7_joint_pitch_offset, arm_right_7_joint_yaw_offset;

    head_1_joint_offset << head_1_joint_x_offset, head_1_joint_y_offset, head_1_joint_z_offset,
        head_1_joint_roll_offset, head_1_joint_pitch_offset, head_1_joint_yaw_offset;
    head_2_joint_offset << head_2_joint_x_offset, head_2_joint_y_offset, head_2_joint_z_offset,
        head_2_joint_roll_offset, head_2_joint_pitch_offset, head_2_joint_yaw_offset;

    torso_1_joint_offset << torso_1_joint_x_offset, torso_1_joint_y_offset,
        torso_1_joint_z_offset, torso_1_joint_roll_offset, torso_1_joint_pitch_offset,
        torso_1_joint_yaw_offset;
    torso_2_joint_offset << torso_2_joint_x_offset, torso_2_joint_y_offset,
        torso_2_joint_z_offset, torso_2_joint_roll_offset, torso_2_joint_pitch_offset,
        torso_2_joint_yaw_offset;
  }

  std::string package_path_;
  std::string urdf_no_offset_path_;
  std::string urdf_with_offset_path_;

  RigidBodyDynamics::Model *model_no_offset_;
  RigidBodyDynamics::Model *model_with_offset_;

  std::vector<Eigen::Vector3d> translational_offsets_;
  std::vector<Eigen::Matrix3d> rotational_offsets_;

  Eigen::VectorXd leg_left_1_joint_offset;
  Eigen::VectorXd leg_left_2_joint_offset;
  Eigen::VectorXd leg_left_3_joint_offset;
  Eigen::VectorXd leg_left_4_joint_offset;
  Eigen::VectorXd leg_left_5_joint_offset;
  Eigen::VectorXd leg_left_6_joint_offset;

  Eigen::VectorXd leg_right_1_joint_offset;
  Eigen::VectorXd leg_right_2_joint_offset;
  Eigen::VectorXd leg_right_3_joint_offset;
  Eigen::VectorXd leg_right_4_joint_offset;
  Eigen::VectorXd leg_right_5_joint_offset;
  Eigen::VectorXd leg_right_6_joint_offset;

  Eigen::VectorXd arm_left_1_joint_offset;
  Eigen::VectorXd arm_left_2_joint_offset;
  Eigen::VectorXd arm_left_3_joint_offset;
  Eigen::VectorXd arm_left_4_joint_offset;
  Eigen::VectorXd arm_left_5_joint_offset;
  Eigen::VectorXd arm_left_6_joint_offset;
  Eigen::VectorXd arm_left_7_joint_offset;

  Eigen::VectorXd arm_right_1_joint_offset;
  Eigen::VectorXd arm_right_2_joint_offset;
  Eigen::VectorXd arm_right_3_joint_offset;
  Eigen::VectorXd arm_right_4_joint_offset;
  Eigen::VectorXd arm_right_5_joint_offset;
  Eigen::VectorXd arm_right_6_joint_offset;
  Eigen::VectorXd arm_right_7_joint_offset;

  Eigen::VectorXd head_1_joint_offset;
  Eigen::VectorXd head_2_joint_offset;

  Eigen::VectorXd torso_1_joint_offset;
  Eigen::VectorXd torso_2_joint_offset;
};


#endif  // CALIBRATION_PARAMETERS_TEST_H
