cmake_minimum_required(VERSION 2.8.3)
project(tor_description)

find_package(catkin REQUIRED)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES tor_description
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

foreach(dir config gazebo meshes robots urdf)
    install(DIRECTORY ${dir}/
        DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/${dir})
endforeach(dir)

