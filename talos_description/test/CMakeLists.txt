find_package(rostest REQUIRED)
find_package(catkin REQUIRED COMPONENTS
    rbdl
    roscpp
    pal_ros_utils
    eigen_checks
    math_utils
)
find_package(Eigen3 REQUIRED)

include_directories(SYSTEM
 ${catkin_INCLUDE_DIRS}
 ${Eigen_INCLUDE_DIRS}
)

add_rostest(test_model_load.test ARGS robot:=full_v1)
add_rostest(test_model_load.test ARGS robot:=full_v2)
add_rostest(test_model_load.test ARGS robot:=full_no_grippers)
add_rostest(test_model_load.test ARGS robot:=lower_body)
add_rostest(test_model_load.test ARGS robot:=arm_right)
add_rostest_gtest(calibration_parameters-test calibration_parameters.test calibration_parameters_test.cpp)
target_link_libraries(calibration_parameters-test ${catkin_LIBRARIES} ${Eigen_LIBRARIES})
