# Copyright (c) 2024 PAL Robotics S.L. All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import OpaqueFunction, DeclareLaunchArgument
from launch_pal.include_utils import include_launch_py_description, include_scoped_launch_py_description
from launch_pal.arg_utils import LaunchArgumentsBase, read_launch_argument
from launch.substitutions import LaunchConfiguration
from launch_pal.robot_arguments import CommonArgs
from dataclasses import dataclass

@dataclass(frozen=True)
class LaunchArguments(LaunchArgumentsBase):

    use_sim_time: DeclareLaunchArgument = CommonArgs.use_sim_time

def generate_launch_description():

    ld = LaunchDescription()
    launch_arguments = LaunchArguments()

    launch_arguments.add_to_launch_description(ld)

    declare_actions(ld, launch_arguments)

    return ld

def declare_actions(
    launch_description: LaunchDescription, launch_args: LaunchArguments
):

    motion_planner_file_path = os.path.join(
        get_package_share_directory("talos_bringup"),
        "config", "motion_planner.yaml"
    )

    motions_file = 'talos_motions.yaml'
    motions_file_path = os.path.join(
        get_package_share_directory(
            "talos_bringup"), "config", motions_file
    )

    play_motion2 = include_scoped_launch_py_description(
        pkg_name="play_motion2",
        paths=["launch", "play_motion2.launch.py"],
        launch_arguments={
            "use_sim_time": LaunchConfiguration("use_sim_time"),
            "motions_file": motions_file_path,
            "motion_planner_config": motion_planner_file_path,
        },
    )

    launch_description.add_action(play_motion2)

    return