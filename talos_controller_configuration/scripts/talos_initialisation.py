#!/usr/bin/python

from pal_python.shell_cmd import ShellCmd
from pal_interaction_msgs.msg import TtsAction, TtsGoal
from actionlib import SimpleActionClient, GoalStatus
import argparse
import rospy
import time

DFLT_CTRLS_RBT_PKG = "talos_controller_configuration"
DFLT_CTRLS_SIM_PKG = "talos_controller_configuration_gazebo"
DFLT_CTRLS_LAUNCH = "default_controllers.launch"
DFLT_CTRLS_TIME = 20

INTR_CTRL_PKG = "introspection_controller"
INTR_CTRL_LAUNCH = "introspection_controller.launch"
INTR_CTRL_TIME = 5

RESET_FT_ETHERCAT_PKG = "zero_set_calibration"
RESET_FT_ETHERCAT_EXEC = "reset_ft_sensors.py --with_ankle --with_wrist --zero_ethercat --filter 32Hz"
RESET_FT_ETHERCAT_TIME = 5

RESET_FT_ANKLES_PKG = "zero_set_calibration"
RESET_FT_ANKLES_EXEC = "reset_ft_sensors.py --with_ankle --reset_ft"
RESET_FT_ANKLES_TIME = 10

RESET_FT_WRISTS_PKG = "zero_set_calibration"
RESET_FT_WRISTS_EXEC = "reset_ft_sensors.py --with_wrist --reset_ft"
RESET_FT_WRISTS_TIME = 10
WRISTS_MOTION_NAME = "arms_down"
WRISTS_MOTION_TIME = 10
WRISTS_WAIT_TIME = 3

RBT_STATUS_CHECK_PKG = "robot_status_check"
RBT_STATUS_CHECK_LAUNCH = "robot_status_check.launch"
RBT_STATUS_CHECK_RESULT_PARAM = "/talos_status_check/result"
RBT_STATUS_CHECK_TIME = 10

INIT_RESULT_PARAM = "/talos_initialisation/result"

INIT_LOG_FILE = "/home/pal/.ros/log/talos_initialisation.log"

class TalosInitialisation:

    def __init__(self, is_simulation=False, is_robot_floating=False, reset_wrists=False):
        self.is_simulation = is_simulation
        self.is_robot_floating = is_robot_floating
        self.reset_wrists = reset_wrists

        if not self.is_simulation:
            self.dflt_ctrls_cmd = "roslaunch {} {}".format(
                DFLT_CTRLS_RBT_PKG, DFLT_CTRLS_LAUNCH)
        else:
            self.dflt_ctrls_cmd = "roslaunch {} {}".format(
                DFLT_CTRLS_SIM_PKG, DFLT_CTRLS_LAUNCH)

        self.intr_ctrl_cmd = "roslaunch {} {}".format(
            INTR_CTRL_PKG, INTR_CTRL_LAUNCH)

        self.reset_ft_ethercat_cmd = "rosrun {} {}".format(
            RESET_FT_ETHERCAT_PKG, RESET_FT_ETHERCAT_EXEC)

        self.reset_ft_ankles_cmd = "rosrun {} {}".format(
            RESET_FT_ANKLES_PKG, RESET_FT_ANKLES_EXEC)

        self.reset_ft_wrists_cmd = "rosrun {} {}".format(
            RESET_FT_WRISTS_PKG, RESET_FT_WRISTS_EXEC)

        self.reset_ft_wrists_motion_cmd =  "rosrun play_motion run_motion {}".format(WRISTS_MOTION_NAME)

        self.rbt_status_check_cmd = "roslaunch {} {}".format(
            RBT_STATUS_CHECK_PKG, RBT_STATUS_CHECK_LAUNCH)

        self.tts_client = SimpleActionClient("/tts", TtsAction)
        if not self.tts_client.wait_for_server(rospy.Duration(5.0)):
            rospy.logerr("No TTS server running. So, I won't be able to warn anything")

        self.log_fd = open(INIT_LOG_FILE, "w+")

    def __del__(self):
        self.log_fd.close()

    def speak_status(self, sentence, lang_id="en_GB"):
        tts_goal = TtsGoal()
        tts_goal.rawtext.text = sentence
        tts_goal.rawtext.lang_id = lang_id
        self.tts_client.send_goal(tts_goal)
        self.tts_client.wait_for_result()

    def check_floating(self):
        if not self.is_robot_floating:
            # wait for robot in air confirmation
            name = raw_input("Initialisation must be performed with the robot in "
                          "the air. Is TALOS suspended above the ground? [y/N]: ")
            if name is not "y":
                return False
        return True

    def launch_default_controllers(self):
        # set result so default controllers, that include the
        # walking controller, do not fail to start
        rospy.set_param(INIT_RESULT_PARAM, True)

        # start and wait for default controllers
        rospy.loginfo("Launching default controllers")
        self.dflt_ctrl_shell = ShellCmd(self.dflt_ctrls_cmd,
                                        stdout=self.log_fd, stderr=self.log_fd)
        time.sleep(DFLT_CTRLS_TIME)
        # don't stop it, killed on destruction
        result = not self.dflt_ctrl_shell.is_done()
        if result:
            rospy.loginfo("Default controllers launched successfully")
        else:
            rospy.logerr("Default controllers finished prematurely")

        # unset result once default controllers are launched
        rospy.set_param(INIT_RESULT_PARAM, False)
        return result

    def launch_intr_controller(self):
        # start and wait for introspection controller
        rospy.loginfo("Launching introspection controller")
        self.intr_ctrl_shell = ShellCmd(self.intr_ctrl_cmd,
                                        stdout=self.log_fd, stderr=self.log_fd)
        time.sleep(INTR_CTRL_TIME)
        # don't stop it, killed on destruction
        result = not self.intr_ctrl_shell.is_done()
        if result:
            rospy.loginfo("Introspection controller launched successfully")
        else:
            rospy.logerr("Introspection controller finished prematurely")
        return result

    def launch_reset_wrists_pose(self):
        rospy.loginfo("Move arms with wrists aligned with gravity")
        shell = ShellCmd(self.reset_ft_wrists_motion_cmd,
                         stdout=self.log_fd, stderr=self.log_fd)
        result = False
        if shell.wait(WRISTS_MOTION_TIME):
            rospy.loginfo("Moving arms finished")
            result = shell.get_retcode() == 0
            if result:
                rospy.loginfo("Moving arms successfull")
            else:
                rospy.logerr("Moving arms failed")
        else:
            rospy.logerr("Moving arms hanged")
            shell.kill()
        time.sleep(WRISTS_WAIT_TIME)# wait a little that the oscillations from the motion stop 
        return result

    def launch_walk_pose(self):
        rospy.loginfo("Move arms to walk pose")
        shell = ShellCmd("roslaunch talos_controller_configuration walk_pose.launch",
                         stdout=self.log_fd, stderr=self.log_fd)
        result = False
        time.sleep(DFLT_CTRLS_TIME)
        result = not shell.is_done()
        if result:
            rospy.loginfo("Moving arms successfull")
        else:
            rospy.logerr("Moving arms failed")
        return result


    def reset_ft_ethercat(self):
        # reset all force sensors control codes to 0, set the filter and reset the value.
        if not self.is_simulation:
            rospy.loginfo("Send initial ethercat configuration for ankles FT")
            shell = ShellCmd(self.reset_ft_ethercat_cmd,
                             stdout=self.log_fd, stderr=self.log_fd)
            result = False
            if shell.wait(RESET_FT_ETHERCAT_TIME):
                rospy.loginfo("Resetting ankles FT ethercat configuration finished")
                result = shell.get_retcode() == 0
                if result:
                    rospy.loginfo("Resetting ankles FT ethercat configuration successfull")
                else:
                    rospy.logerr("Resetting ankles FT ethercat configuration failed")
            else:
                rospy.logerr("Resetting ankles FT ethercat configuration hanged")
                shell.kill()
            return result
        else:
            return True


    def reset_ft_ankles_offset(self):
        # run ankles ati ft reset script
        if not self.is_simulation:
            rospy.loginfo("Resetting ankles ATI FT offsets")
            shell = ShellCmd(self.reset_ft_ankles_cmd,
                             stdout=self.log_fd, stderr=self.log_fd)
            result = False
            if shell.wait(RESET_FT_ANKLES_TIME):
                rospy.loginfo("Resetting ankles ATI FT finished")
                result = shell.get_retcode() == 0
                if result:
                    rospy.loginfo("Resetting ankles ATI FT successfull")
                else:
                    rospy.logerr("Resetting ankles ATI FT failed")
            else:
                rospy.logerr("Resetting ankles ATI FT hanged")
                shell.kill()
            return result
        else:
            return True

    def reset_ft_wrists_offset(self):
        # run wrists ati ft reset script
        if not self.is_simulation and self.reset_wrists:
            result_motion = self.launch_reset_wrists_pose()

            rospy.loginfo("Resetting wrists ATI FT offsets")
            shell = ShellCmd(self.reset_ft_wrists_cmd,
                             stdout=self.log_fd, stderr=self.log_fd)
            result = False
            if shell.wait(RESET_FT_WRISTS_TIME):
                rospy.loginfo("Resetting wrists ATI FT finished")
                result = shell.get_retcode() == 0
                if result:
                    rospy.loginfo("Resetting wrists ATI FT successfull")
                else:
                    rospy.logerr("Resetting wrists ATI FT failed")
            else:
                rospy.logerr("Resetting wrists ATI FT hanged")
                shell.kill()
            result_walk_pose = self.launch_walk_pose()
            return result and result_motion
        else:
            return True


    def launch_robot_status_check(self):
        # launch robot_status_check and check result
        rospy.loginfo("Launching robot status check")
        shell = ShellCmd(self.rbt_status_check_cmd,
                         stdout=self.log_fd, stderr=self.log_fd)
        result = False
        if shell.wait(RBT_STATUS_CHECK_TIME):
            rospy.loginfo("Robot status check finished")
            result = rospy.get_param(RBT_STATUS_CHECK_RESULT_PARAM)
            if result:
                rospy.loginfo("Robot status check successfull")
            else:
                rospy.logerr("Robot status check failed")
        else:
            rospy.logerr("Robot status check hanged")
            shell.kill()
        return result

    def set_result(self, result):
        # set initialisation param with the result
        if result:
            rospy.loginfo("Initialisation finished successfully")
            rospy.set_param(INIT_RESULT_PARAM, True)
            self.speak_status("Initialisation finished successfully!")
        else:
            rospy.logerr(
                "Initialisation failed. Check {} for errors".format(INIT_LOG_FILE))
            rospy.set_param(INIT_RESULT_PARAM, False)
            self.speak_status("Initialisation failed!")

    def do_initialisation(self):
        # We rest the FTs twice inorder to avoid the situations where the the default controllers
        # positioning is effected due to a pre-existing offsets in the FTs, doing it twice will
        # ensure that the robot is in proper walking pose and also FTs are set to zero finally
        result = self.check_floating() \
            and self.reset_ft_ethercat() \
            and self.reset_ft_ankles_offset() \
            and self.launch_default_controllers() \
            and self.launch_intr_controller() \
            and self.reset_ft_wrists_offset() \
            and self.reset_ft_ankles_offset() \
            and self.launch_robot_status_check()

        self.set_result(result)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(
        description='TALOS initialisation and checks')
    parser.add_argument('--simulation', action="store_true",
                        help="Run initialisation in simulation")
    parser.add_argument('-y', '--yes', action="store_true",
                        help="Robot is already in the air")
    parser.add_argument('-w', '--wrists', action="store_true",
                        help="Add intermediate pose with the arms down and reset the wrists FT sensors")
    args = parser.parse_args()

    is_simulation = args.simulation
    is_robot_floating = args.yes
    reset_wrists = args.wrists
    rospy.init_node("talos_initialisation")

    talos_initialisation = TalosInitialisation(
        is_simulation, is_robot_floating, reset_wrists)
    talos_initialisation.do_initialisation()

