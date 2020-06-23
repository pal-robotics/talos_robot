#!/usr/bin/python

from pal_python.shell_cmd import ShellCmd
import argparse
import rospy
import time

DFLT_CTRLS_RBT_PKG = "talos_controller_configuration"
DFLT_CTRLS_SIM_PKG = "talos_controller_configuration_gazebo"
DFLT_CTRLS_LAUNCH = "default_controllers.launch"
DFLT_CTRLS_TIME = 20
DFLT_CTRLS_RETRY_TIME = 10

RESET_FT_ANKLES_PKG = "zero_set_calibration"
RESET_FT_ANKLES_EXEC = "reset_ankles_fts.sh"

RBT_STATUS_CHECK_PKG = "robot_status_check"
RBT_STATUS_CHECK_LAUNCH = "robot_status_check.launch"
RBT_STATUS_CHECK_RESULT_PARAM = "/talos_status_check/result"

INIT_RESULT_PARAM = "/robot_initialisation"

class TalosInitialisation:

    def __init__(self, is_simulation=False, is_robot_floating=False):
        self.is_simulation = is_simulation
        self.is_robot_floating = is_robot_floating

        if not self.is_simulation:
            self.dflt_ctrls_cmd = "roslaunch {} {}".format(
                DFLT_CTRLS_RBT_PKG, DFLT_CTRLS_LAUNCH)
        else:
            self.dflt_ctrls_cmd = "roslaunch {} {}".format(
                DFLT_CTRLS_SIM_PKG, DFLT_CTRLS_LAUNCH)

        self.reset_ft_ankles_cmd = "rosrun {} {}".format(
            RESET_FT_ANKLES_PKG, RESET_FT_ANKLES_EXEC)

        self.rbt_status_check_cmd = "roslaunch {} {}".format(
            RBT_STATUS_CHECK_PKG, RBT_STATUS_CHECK_LAUNCH)

    def check_floating(self):
        if not self.is_robot_floating:
            # wait for robot in air confirmation
            rospy.loginfo("Initialisation must be performed with the robot in "
                          "the air. Is TALOS suspended above the ground? y/n")
            name = raw_input()
            if name is not "y":
                return False
        return True

    def launch_default_controllers(self):
        # start, wait and stop default controllers
        rospy.loginfo("Launching default controllers")
        shell = ShellCmd(self.dflt_ctrls_cmd, stdin=None,
                         stdout=None, stderr=None)
        time.sleep(DFLT_CTRLS_TIME)
        rospy.loginfo("Stopping default controllers")
        if not shell.nice_kill(
                retry_time=DFLT_CTRLS_RETRY_TIME, max_retries=2):
            rospy.logwarn(
                "Could not kill default controllers nicely, terminating")
            shell.kill()
        return True

    def reset_ft_ankles_offset(self):
        # run ankles ati ft reset script
        if not self.is_simulation:
            rospy.loginfo("Resetting ankles ATI FT offsets")
            shell = ShellCmd(self.reset_ft_ankles_cmd,
                             stdin=None, stdout=None, stderr=None)
            time.sleep(20)
            result = False
            if shell.is_done():
                rospy.loginfo("Resetting ankles ATI FT finished")
                result = shell.get_retcode()
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

    def launch_robot_status_check(self):
        # launch robot_status_check and check result
        rospy.loginfo("Launching robot status check")
        shell = ShellCmd(self.rbt_status_check_cmd, stdin=None,
                         stdout=None, stderr=None)
        time.sleep(20)
        result = False
        if shell.is_done():
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
        else:
            rospy.logerr("Initialisation failed")
            rospy.set_param(INIT_RESULT_PARAM, False)

    def do_initialisation(self):
        result = self.check_floating() and self.launch_default_controllers() \
            and self.reset_ft_ankles_offset() and self.launch_robot_status_check()

        self.set_result(result)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(
        description='TALOS initialisation and checks')
    parser.add_argument('--simulation', action="store_true",
                        help="Run initialisation in simulation")
    parser.add_argument('-y', '--yes', action="store_true",
                        help="Robot is already in the air")
    args = parser.parse_args()

    is_simulation = args.simulation
    is_robot_floating = args.yes

    rospy.init_node("talos_initialisation")

    talos_initialisation = TalosInitialisation(
        is_simulation, is_robot_floating)
    talos_initialisation.do_initialisation()
