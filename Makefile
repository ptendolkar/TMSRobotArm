# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:
.PHONY : .NOTPARALLEL

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/Pleb/Documents/RobotArmHeadAvoid

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/Pleb/Documents/RobotArmHeadAvoid

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/Pleb/Documents/RobotArmHeadAvoid/CMakeFiles /home/Pleb/Documents/RobotArmHeadAvoid/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/Pleb/Documents/RobotArmHeadAvoid/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named cgal_transform

# Build rule for target.
cgal_transform: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 cgal_transform
.PHONY : cgal_transform

# fast build rule for target.
cgal_transform/fast:
	$(MAKE) -f CMakeFiles/cgal_transform.dir/build.make CMakeFiles/cgal_transform.dir/build
.PHONY : cgal_transform/fast

#=============================================================================
# Target rules for targets named testsfml

# Build rule for target.
testsfml: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 testsfml
.PHONY : testsfml

# fast build rule for target.
testsfml/fast:
	$(MAKE) -f CMakeFiles/testsfml.dir/build.make CMakeFiles/testsfml.dir/build
.PHONY : testsfml/fast

#=============================================================================
# Target rules for targets named meshconv

# Build rule for target.
meshconv: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 meshconv
.PHONY : meshconv

# fast build rule for target.
meshconv/fast:
	$(MAKE) -f MeshConverter/CMakeFiles/meshconv.dir/build.make MeshConverter/CMakeFiles/meshconv.dir/build
.PHONY : meshconv/fast

cgal_transform_example.o: cgal_transform_example.cpp.o
.PHONY : cgal_transform_example.o

# target to build an object file
cgal_transform_example.cpp.o:
	$(MAKE) -f CMakeFiles/cgal_transform.dir/build.make CMakeFiles/cgal_transform.dir/cgal_transform_example.cpp.o
.PHONY : cgal_transform_example.cpp.o

cgal_transform_example.i: cgal_transform_example.cpp.i
.PHONY : cgal_transform_example.i

# target to preprocess a source file
cgal_transform_example.cpp.i:
	$(MAKE) -f CMakeFiles/cgal_transform.dir/build.make CMakeFiles/cgal_transform.dir/cgal_transform_example.cpp.i
.PHONY : cgal_transform_example.cpp.i

cgal_transform_example.s: cgal_transform_example.cpp.s
.PHONY : cgal_transform_example.s

# target to generate assembly for a file
cgal_transform_example.cpp.s:
	$(MAKE) -f CMakeFiles/cgal_transform.dir/build.make CMakeFiles/cgal_transform.dir/cgal_transform_example.cpp.s
.PHONY : cgal_transform_example.cpp.s

testsfml.o: testsfml.cpp.o
.PHONY : testsfml.o

# target to build an object file
testsfml.cpp.o:
	$(MAKE) -f CMakeFiles/testsfml.dir/build.make CMakeFiles/testsfml.dir/testsfml.cpp.o
.PHONY : testsfml.cpp.o

testsfml.i: testsfml.cpp.i
.PHONY : testsfml.i

# target to preprocess a source file
testsfml.cpp.i:
	$(MAKE) -f CMakeFiles/testsfml.dir/build.make CMakeFiles/testsfml.dir/testsfml.cpp.i
.PHONY : testsfml.cpp.i

testsfml.s: testsfml.cpp.s
.PHONY : testsfml.s

# target to generate assembly for a file
testsfml.cpp.s:
	$(MAKE) -f CMakeFiles/testsfml.dir/build.make CMakeFiles/testsfml.dir/testsfml.cpp.s
.PHONY : testsfml.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... cgal_transform"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... testsfml"
	@echo "... meshconv"
	@echo "... cgal_transform_example.o"
	@echo "... cgal_transform_example.i"
	@echo "... cgal_transform_example.s"
	@echo "... testsfml.o"
	@echo "... testsfml.i"
	@echo "... testsfml.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

