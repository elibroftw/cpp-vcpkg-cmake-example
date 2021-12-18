# CMakeList.txt : CMake project for CMakeProject4, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.22)

# set($ENV{VCPKG_MANIFEST_MODE} OFF)
set(VCPKG_MANIFEST_MODE OFF)
# set($ENV{VCPKG_PREFER_SYSTEM_LIBS} ON)
# set(VCPKG_PREFER_SYSTEM_LIBS ON)
project ("CMakeProject4")

# Add source to this project's executable.
add_executable (CMakeProject4 "CMakeProject4.cpp" "CMakeProject4.h")

# TODO: Add tests and install targets if needed.

find_package(cpr CONFIG REQUIRED)
target_link_libraries(CMakeProject4 PRIVATE cpr::cpr)

add_custom_target(run
    COMMAND ${PROJECT_NAME}
    DEPENDS ${PROJECT_NAME}
    WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
)
