cmake_minimum_required(VERSION 2.8.3)
project(tor_controller_configuration)

find_package(catkin REQUIRED)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES tor_controller_configuration
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

foreach(dir config launch)
    install(DIRECTORY ${dir}/
        DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/${dir})
endforeach(dir)


