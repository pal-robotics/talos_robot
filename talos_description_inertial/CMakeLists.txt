cmake_minimum_required(VERSION 2.8.3)
project(talos_description_inertial)

find_package(catkin REQUIRED)

catkin_package()

foreach(dir urdf)
    install(DIRECTORY ${dir}/
        DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/${dir})
endforeach(dir)
