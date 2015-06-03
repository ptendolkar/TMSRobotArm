cmake_minimum_required(VERSION 2.8)
project(TMSRobotArm)

add_subdirectory(MeshConverter)

add_executable(testsfml testsfml.cpp)
target_link_libraries(testsfml sfml-graphics)
target_link_libraries(testsfml sfml-window)
target_link_libraries(testsfml sfml-system)
target_link_libraries(testsfml GLEW)

add_executable(cgal_transform cgal_transform_example.cpp)
target_link_libraries(cgal_transform CGAL)
set_target_properties(cgal_transform PROPERTIES COMPILE_FLAGS "-g")
