cmake_minimum_required(VERSION 2.8)

project(TMSRobotArm)

add_executable(meshconv MeshConverter.cpp "${PROJECT_SOURCE_DIR}/vcglib/wrap/ply/plylib.cpp")
target_include_directories(meshconv PUBLIC "${PROJECT_SOURCE_DIR}/vcglib")
target_link_libraries(meshconv GL)
set_target_properties(meshconv PROPERTIES COMPILE_FLAGS "-g -std=c++11")
