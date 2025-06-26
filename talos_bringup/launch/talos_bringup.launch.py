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
from launch_pal.include_utils import include_launch_py_description, include_scoped_launch_py_description
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration


def generate_launch_description():

    fixed_base_arg = DeclareLaunchArgument(
        "fixed_base", default_value="False", description="Fix the robot in the air."
    )

    use_sim_time_arg = DeclareLaunchArgument(
        "use_sim_time", default_value="False", description="Use simulation time"
    )

    enable_crane_arg = DeclareLaunchArgument(
        "enable_crane", default_value="False", description="Enable crane"
    )

    head_type_arg = DeclareLaunchArgument(
        "head_type", default_value="default", description="Head type"
    )

    disable_gazebo_camera_arg = DeclareLaunchArgument(
        "disable_gazebo_camera",
        default_value="False",
        description="Enable/Disable camera in simulation",
    )

    default_configuration_type_arg = DeclareLaunchArgument(
        "default_configuration_type",
        default_value="zeros",
        description="configuration of the robot",
    )

    talos_common_hardware_path = os.path.join(
        get_package_share_directory('talos_bringup'), 'config', 'talos_common_hardware.yaml')

    declare_hardware_comp = DeclareLaunchArgument(
        'talos_common_hardware', default_value=talos_common_hardware_path,
        description='Hardware configuration file')

    default_broadcasters = include_launch_py_description(
        pkg_name='talos_controller_configuration',
        paths=['launch', 'default_broadcasters.launch.py'])

    play_motion2 = include_scoped_launch_py_description(
        pkg_name="talos_bringup",
        paths=["launch", "talos_play_motion2.launch.py"],
        launch_arguments={
            "use_sim_time": LaunchConfiguration('use_sim_time'),
        },
    )

    twist_mux = include_scoped_launch_py_description(
        pkg_name="talos_bringup",
        paths=["launch", "twist_mux.launch.py"],
        launch_arguments={
            "use_sim_time": LaunchConfiguration('use_sim_time'),
        }
    )

    robot_state_publisher = include_scoped_launch_py_description(
        pkg_name="talos_description",
        paths=["launch", "robot_state_publisher.launch.py"],
        launch_arguments={
            'fixed_base': LaunchConfiguration('fixed_base'),
            'use_sim_time': LaunchConfiguration('use_sim_time'),
            'enable_crane': LaunchConfiguration('enable_crane'),
            'head_type': LaunchConfiguration('head_type'),
            'disable_gazebo_camera': LaunchConfiguration('disable_gazebo_camera'),
            'default_configuration_type': LaunchConfiguration('default_configuration_type'),
        }
    )

    # @TODO: Uncomment when the hardware controllers are ready
    # bringup_controllers_hardware = include_launch_py_description(
    #     "talos_controller_configuration", [
    #         "launch", "bringup_controllers_hardware.launch.py"],
    # )

    ld = LaunchDescription()
    ld.add_action(fixed_base_arg)
    ld.add_action(enable_crane_arg)
    ld.add_action(head_type_arg)
    ld.add_action(disable_gazebo_camera_arg)
    ld.add_action(default_configuration_type_arg)
    ld.add_action(use_sim_time_arg)
    ld.add_action(robot_state_publisher)
    ld.add_action(default_broadcasters)
    ld.add_action(play_motion2)
    ld.add_action(twist_mux)
    # @TODO: ld.add_action(bringup_controllers_hardware)
    ld.add_action(declare_hardware_comp)

    return ld
