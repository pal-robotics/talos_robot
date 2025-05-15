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
from pathlib import Path

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch.substitutions import LaunchConfiguration
from launch_pal.arg_utils import read_launch_argument
from launch_param_builder import load_xacro
from launch_ros.actions import Node


def declare_args(context, *args, **kwargs):

    fixed_base_arg = DeclareLaunchArgument(
        "fixed_base", default_value="False", description="Fix the robot in the air."
    )

    use_sim_time_arg = DeclareLaunchArgument(
        "use_sim_time", default_value="False", description="Use simulation time"
    )

    robot_model_arg = DeclareLaunchArgument(
        "robot_model", default_value="full_v2", description="Robot model"
    )

    flexibility_arg = DeclareLaunchArgument(
        "flexibility", default_value="False", description="Enable the flexibility for the leg")

    foot_collision_arg = DeclareLaunchArgument(
        "foot_collision", default_value="thinbox", description="Collision foot"
    )

    enable_crane_arg = DeclareLaunchArgument(
        "enable_crane", default_value="False", description="Enable crane"
    )

    head_type_arg = DeclareLaunchArgument(
        "head_type", default_value="default", description="Head type"
    )

    parameter_name_arg = DeclareLaunchArgument(
        "parameter_name",
        default_value="robot_description",
        description="Robot description",
    )

    disable_gazebo_camera_arg = DeclareLaunchArgument(
        "disable_gazebo_camera",
        default_value="False",
        description="Enable/Disable camera in simulation",
    )

    test_arg = DeclareLaunchArgument(
        "test", default_value="False", description="test")

    default_configuration_type_arg = DeclareLaunchArgument(
        "default_configuration_type",
        default_value="zeros",
        description="configuration of the robot",
    )
    
    return [
        robot_model_arg,
        foot_collision_arg,
        enable_crane_arg,
        head_type_arg,
        parameter_name_arg,
        disable_gazebo_camera_arg,
        test_arg,
        default_configuration_type_arg,
        use_sim_time_arg,
        flexibility_arg,
        fixed_base_arg,
    ]


def launch_setup(context, *args, **kwargs):
    robot_model = read_launch_argument("robot_model", context)

    robot_description = {
        "robot_description": load_xacro(
            Path(
                os.path.join(
                    get_package_share_directory("talos_description"),
                    "robots",
                    f"talos_{robot_model}.urdf.xacro",
                )
            ),
            {
                "use_fixed_base": read_launch_argument("fixed_base", context),
                "use_sim": read_launch_argument("use_sim_time", context),
                "test": read_launch_argument("test", context),
                "robot_model": read_launch_argument("robot_model", context),
                "enable_crane": read_launch_argument("enable_crane", context),
                "foot_collision": read_launch_argument("foot_collision", context),
                "disable_gazebo_camera": read_launch_argument(
                    "disable_gazebo_camera", context
                ),
                "head_type": read_launch_argument("head_type", context),
                "flexibility": read_launch_argument("flexibility", context),
                "default_configuration_type": read_launch_argument(
                    "default_configuration_type", context),
            },
        )
    }

    rsp = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="both",
        parameters=[
            {"use_sim_time": LaunchConfiguration("use_sim_time")},
            {"publish_frequency": 100.0},
            robot_description,
        ],
    )

    return [rsp]


def generate_launch_description():
    ld = LaunchDescription()

    # Declare arguments
    # we use OpaqueFunction so the callbacks have access to the context
    ld.add_action(OpaqueFunction(function=declare_args))

    # Execute robot_state_publisher node
    ld.add_action(OpaqueFunction(function=launch_setup))

    return ld
