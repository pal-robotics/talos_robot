cmake_minimum_required(VERSION 2.8.3)
project(talos_controller_configuration)

find_package(catkin REQUIRED)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES talos_controller_configuration
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

install(PROGRAMS scripts/joints_to_control.sh
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

foreach(dir config launch utils)
    install(DIRECTORY ${dir}/
        DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/${dir})
endforeach(dir)


