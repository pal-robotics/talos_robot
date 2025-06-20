cmake_minimum_required(VERSION 3.8)
project(talos_controller_configuration)

find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

if(pal_module_cmake_FOUND)
  pal_register_modules(
    module/20_default_broadcasters.yaml
  )
elseif(DEFINED ENV{PAL_DISTRO})
  message(FATAL_ERROR "The pal_module_cmake package was not found. Modules not registered.")
endif()

install(
  PROGRAMS scripts/talos_initialisation.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_auto_package(INSTALL_TO_SHARE config launch)
