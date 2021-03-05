/*
 * Copyright 2021 PAL Robotics SL. All Rights Reserved
 *
 * Unauthorized copying of this file, via any medium is strictly prohibited,
 * unless it was supplied under the terms of a license agreement or
 * nondisclosure agreement with PAL Robotics SL. In this case it may not be
 * copied or disclosed except in accordance with the terms of that agreement.
 */

#include <math_utils/math_utils.h>
#include "calibration_parameters_test.h"
#include <eigen_checks/gtest.h>

void compareOffsets(const Eigen::VectorXd &known_offsets_6D,
                    const Eigen::Vector3d &translational_computed_offset,
                    const Eigen::Matrix3d &rotational_computed_offset)
{
  eMatrixRot rotation_from_known_values =
      matrixRollPitchYaw(known_offsets_6D(3), known_offsets_6D(4), known_offsets_6D(5)).transpose();

  EXPECT_TRUE(EIGEN_MATRIX_NEAR(known_offsets_6D.segment(0, 3),
                                translational_computed_offset, 1.e-10));
  EXPECT_TRUE(EIGEN_MATRIX_NEAR(rotation_from_known_values, rotational_computed_offset, 1.e-10));
}

void getComputedOffsets(const std::vector<std::string> &link_names,
                        RigidBodyDynamics::Model *model_no_offset_,
                        RigidBodyDynamics::Model *model_with_offset_,
                        std::vector<Eigen::Vector3d> &translational_offsets,
                        std::vector<Eigen::Matrix3d> &rotational_offsets)
{
  translational_offsets.clear();
  rotational_offsets.clear();

  for (size_t i = 0; i < link_names.size(); ++i)
  {
    std::string body_name = link_names[i];
    int body_id = model_no_offset_->GetBodyId(body_name.c_str());

    auto joint_frame = model_no_offset_->GetJointFrame(body_id);
    Eigen::Vector3d translation_no_offset = joint_frame.r;
    Eigen::Matrix3d rotation_no_offset = joint_frame.E;

    joint_frame = model_with_offset_->GetJointFrame(body_id);
    Eigen::Vector3d translation_with_offset = joint_frame.r;
    Eigen::Matrix3d rotation_with_offset = joint_frame.E;

    Eigen::Matrix3d rotation_difference = rotation_with_offset * rotation_no_offset.inverse();

    translational_offsets.push_back(translation_with_offset - translation_no_offset);
    rotational_offsets.push_back(rotation_difference);
  }
}

TEST_F(CalibrationParametersTest, TestLeftLegOffsets)
{
  std::vector<std::string> leg_left_link_names_;
  leg_left_link_names_.push_back("leg_left_1_link");
  leg_left_link_names_.push_back("leg_left_2_link");
  leg_left_link_names_.push_back("leg_left_3_link");
  leg_left_link_names_.push_back("leg_left_4_link");
  leg_left_link_names_.push_back("leg_left_5_link");
  leg_left_link_names_.push_back("leg_left_6_link");

  getComputedOffsets(leg_left_link_names_, model_no_offset_, model_with_offset_,
                     translational_offsets_, rotational_offsets_);
  compareOffsets(leg_left_1_joint_offset, translational_offsets_[0], rotational_offsets_[0]);
  compareOffsets(leg_left_2_joint_offset, translational_offsets_[1], rotational_offsets_[1]);
  compareOffsets(leg_left_3_joint_offset, translational_offsets_[2], rotational_offsets_[2]);
  compareOffsets(leg_left_4_joint_offset, translational_offsets_[3], rotational_offsets_[3]);
  compareOffsets(leg_left_5_joint_offset, translational_offsets_[4], rotational_offsets_[4]);
  compareOffsets(leg_left_6_joint_offset, translational_offsets_[5], rotational_offsets_[5]);
}

TEST_F(CalibrationParametersTest, TestRightLegOffsets)
{
  std::vector<std::string> leg_right_link_names_;
  leg_right_link_names_.push_back("leg_right_1_link");
  leg_right_link_names_.push_back("leg_right_2_link");
  leg_right_link_names_.push_back("leg_right_3_link");
  leg_right_link_names_.push_back("leg_right_4_link");
  leg_right_link_names_.push_back("leg_right_5_link");
  leg_right_link_names_.push_back("leg_right_6_link");

  getComputedOffsets(leg_right_link_names_, model_no_offset_, model_with_offset_,
                     translational_offsets_, rotational_offsets_);
  compareOffsets(leg_right_1_joint_offset, translational_offsets_[0], rotational_offsets_[0]);
  compareOffsets(leg_right_2_joint_offset, translational_offsets_[1], rotational_offsets_[1]);
  compareOffsets(leg_right_3_joint_offset, translational_offsets_[2], rotational_offsets_[2]);
  compareOffsets(leg_right_4_joint_offset, translational_offsets_[3], rotational_offsets_[3]);
  compareOffsets(leg_right_5_joint_offset, translational_offsets_[4], rotational_offsets_[4]);
  compareOffsets(leg_right_6_joint_offset, translational_offsets_[5], rotational_offsets_[5]);
}

TEST_F(CalibrationParametersTest, TestLeftArmOffsets)
{
  std::vector<std::string> arm_left_link_names_;
  arm_left_link_names_.push_back("arm_left_1_link");
  arm_left_link_names_.push_back("arm_left_2_link");
  arm_left_link_names_.push_back("arm_left_3_link");
  arm_left_link_names_.push_back("arm_left_4_link");
  arm_left_link_names_.push_back("arm_left_5_link");
  arm_left_link_names_.push_back("arm_left_6_link");
  arm_left_link_names_.push_back("arm_left_7_link");

  getComputedOffsets(arm_left_link_names_, model_no_offset_, model_with_offset_,
                     translational_offsets_, rotational_offsets_);
  compareOffsets(arm_left_1_joint_offset, translational_offsets_[0], rotational_offsets_[0]);
  compareOffsets(arm_left_2_joint_offset, translational_offsets_[1], rotational_offsets_[1]);
  compareOffsets(arm_left_3_joint_offset, translational_offsets_[2], rotational_offsets_[2]);
  compareOffsets(arm_left_4_joint_offset, translational_offsets_[3], rotational_offsets_[3]);
  compareOffsets(arm_left_5_joint_offset, translational_offsets_[4], rotational_offsets_[4]);
  compareOffsets(arm_left_6_joint_offset, translational_offsets_[5], rotational_offsets_[5]);
  compareOffsets(arm_left_7_joint_offset, translational_offsets_[6], rotational_offsets_[6]);
}

TEST_F(CalibrationParametersTest, TestRightArmOffsets)
{
  std::vector<std::string> arm_right_link_names_;
  arm_right_link_names_.push_back("arm_right_1_link");
  arm_right_link_names_.push_back("arm_right_2_link");
  arm_right_link_names_.push_back("arm_right_3_link");
  arm_right_link_names_.push_back("arm_right_4_link");
  arm_right_link_names_.push_back("arm_right_5_link");
  arm_right_link_names_.push_back("arm_right_6_link");
  arm_right_link_names_.push_back("arm_right_7_link");


  getComputedOffsets(arm_right_link_names_, model_no_offset_, model_with_offset_,
                     translational_offsets_, rotational_offsets_);
  compareOffsets(arm_right_1_joint_offset, translational_offsets_[0], rotational_offsets_[0]);
  compareOffsets(arm_right_2_joint_offset, translational_offsets_[1], rotational_offsets_[1]);
  compareOffsets(arm_right_3_joint_offset, translational_offsets_[2], rotational_offsets_[2]);
  compareOffsets(arm_right_4_joint_offset, translational_offsets_[3], rotational_offsets_[3]);
  compareOffsets(arm_right_5_joint_offset, translational_offsets_[4], rotational_offsets_[4]);
  compareOffsets(arm_right_6_joint_offset, translational_offsets_[5], rotational_offsets_[5]);
  compareOffsets(arm_right_7_joint_offset, translational_offsets_[6], rotational_offsets_[6]);
}

TEST_F(CalibrationParametersTest, TestHeadOffsets)
{
  std::vector<std::string> head_link_names;
  head_link_names.push_back("head_1_link");
  head_link_names.push_back("head_2_link");

  getComputedOffsets(head_link_names, model_no_offset_, model_with_offset_,
                     translational_offsets_, rotational_offsets_);
  compareOffsets(head_1_joint_offset, translational_offsets_[0], rotational_offsets_[0]);
  compareOffsets(head_2_joint_offset, translational_offsets_[1], rotational_offsets_[1]);
}

TEST_F(CalibrationParametersTest, TestTorsoOffsets)
{
  std::vector<std::string> torso_link_names;
  torso_link_names.push_back("torso_1_link");
  torso_link_names.push_back("torso_2_link");

  getComputedOffsets(torso_link_names, model_no_offset_, model_with_offset_,
                     translational_offsets_, rotational_offsets_);
  compareOffsets(torso_1_joint_offset, translational_offsets_[0], rotational_offsets_[0]);
  compareOffsets(torso_2_joint_offset, translational_offsets_[1], rotational_offsets_[1]);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  ros::init(argc, argv, "calibration_parameters_test");
  ros::NodeHandle nh;
  return RUN_ALL_TESTS();
}
