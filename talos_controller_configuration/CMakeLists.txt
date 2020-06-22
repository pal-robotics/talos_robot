cmake_minimum_required(VERSION 2.8.3)
project(talos_controller_configuration)

find_package(catkin REQUIRED)

catkin_package()

foreach(dir config launch utils)
    install(DIRECTORY ${dir}/
        DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/${dir})
endforeach(dir)

install(
    PROGRAMS
        scripts/talos_initialisation.py
    DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
