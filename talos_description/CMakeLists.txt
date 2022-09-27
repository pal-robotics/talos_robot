cmake_minimum_required(VERSION 2.8.3)
project(talos_description)

find_package(catkin REQUIRED COMPONENTS xacro)


catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES talos_description
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

xacro_add_xacro_file(robots/talos_full_v2.urdf.xacro REMAP enable_crane:=false foot_collision:=default head_type:=default test:=false disable_gazebo_camera:=true flexibility:=false)
xacro_install(xacro_target ${XACRO_OUTPUT_FILE} DESTINATION robots)

foreach(dir config gazebo meshes robots urdf srdf)
    install(DIRECTORY ${dir}/
        DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/${dir})
endforeach(dir)

#############
## Testing ##
#############

if(CATKIN_ENABLE_TESTING)
  add_subdirectory(test)
endif()
