#!/bin/bash
# Joints to Control Script - The Script that sets the joitns to control based on the choosen robot type
# Written by - Sai Kishor Kothakota
# PAL-Robotics, SL
# Rights Reserved

function print_usage
{
    tabs 4
    local script_name="$(basename $0)"
    echo -e "\n************************************************************"
    echo -e "Usage:"
    echo -e "${script_name} namespace robot_type"
    echo -e "\nChoose desired option for running the script"
    echo -e "optional arguments:"
    echo -e "\t-h, --help   Show this help message and exit"

    echo -e "\nExample:"
    echo -e "${script_name} whole_body_dynamic_controller upper_arm_right"
    echo -e "************************************************************\n"
}

function joint_to_control_robot_type
{
    if [[ "$#" -lt 2 ]]; then
        print_usage
        exit 1
    fi
    local param_name="${1}/joints_to_control"

    rosparam list | grep "${1}" > /dev/null 2>&1
    local ns_status="$?"
    if [[ "$ns_status" != "0" ]]; then
        echo -e "Error namespace param : ${1} doesn't exist to set the joints to control!. Aborting!"
        exit 1
    fi

    local arm_left="'arm_left_1_joint', 'arm_left_2_joint', 'arm_left_3_joint', 'arm_left_4_joint'"
    local wrist_left="'arm_left_5_joint','arm_left_6_joint', 'arm_left_7_joint'"
    local gripper_left="'gripper_left_joint'"
    local leg_left="'leg_left_1_joint', 'leg_left_2_joint', 'leg_left_3_joint', 'leg_left_4_joint', 'leg_left_5_joint', 'leg_left_6_joint'"
    local arm_right="'arm_right_1_joint', 'arm_right_2_joint', 'arm_right_3_joint', 'arm_right_4_joint'"
    local wrist_right="'arm_right_5_joint','arm_right_6_joint', 'arm_right_7_joint'"
    local gripper_right="'gripper_right_joint'"
    local leg_right="'leg_right_1_joint', 'leg_right_2_joint', 'leg_right_3_joint', 'leg_right_4_joint', 'leg_right_5_joint', 'leg_right_6_joint'"
    local head="'head_1_joint', 'head_2_joint'"
    local torso="'torso_1_joint', 'torso_2_joint'"

    local robot_joint_configuration=""
    rosparam list | grep "${param_name}" > /dev/null 2>&1
    local old_param_status="$?"
    if [[ "$old_param_status" == "0" ]]; then
        robot_joint_configuration="$(rosparam get ${param_name})"
        # To remove the square brackets at both ends
        robot_joint_configuration="$(echo ${robot_joint_configuration} | sed 's/[][]//g')"
        # To add single apostrophe at each string
        robot_joint_configuration="$(echo  ${robot_joint_configuration} | awk -F ', ' "{for (i=1;i<=NF-1;i++) printf(\"'%s',\",\$i); printf(\"'%s'\",\$i);}")"
    fi

    for var in "${@:2}"
    do
        echo ${var} | grep -v  "__name:\|__log:" > /dev/null 2>&1
        local arg_status="$?"
        if [[ "$arg_status" != "0" ]]; then
            continue
        fi
        if [[ -z "${!var}" ]]; then
            echo "ERROR: Parsed invalid joint group : $var. Aborting!"
            exit 1
        fi
        robot_joint_configuration="${!var}, ${robot_joint_configuration}"
    done
    echo "Setting robot configuration to control joints : ${robot_joint_configuration}"
    rosparam set "${param_name}" "[${robot_joint_configuration}]"
    local param_status="$?"
    if [[ "$param_status" != "0" ]]; then
        echo -e "Error setting the param : ${param_name} with value : ${robot_joint_configuration}"
        exit 1
    fi
}

joint_to_control_robot_type "$@"