# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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

# Include any dependencies generated for this target.
include CMakeFiles/testsfml.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testsfml.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testsfml.dir/flags.make

CMakeFiles/testsfml.dir/testsfml.cpp.o: CMakeFiles/testsfml.dir/flags.make
CMakeFiles/testsfml.dir/testsfml.cpp.o: testsfml.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/Pleb/Documents/RobotArmHeadAvoid/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/testsfml.dir/testsfml.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testsfml.dir/testsfml.cpp.o -c /home/Pleb/Documents/RobotArmHeadAvoid/testsfml.cpp

CMakeFiles/testsfml.dir/testsfml.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testsfml.dir/testsfml.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/Pleb/Documents/RobotArmHeadAvoid/testsfml.cpp > CMakeFiles/testsfml.dir/testsfml.cpp.i

CMakeFiles/testsfml.dir/testsfml.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testsfml.dir/testsfml.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/Pleb/Documents/RobotArmHeadAvoid/testsfml.cpp -o CMakeFiles/testsfml.dir/testsfml.cpp.s

CMakeFiles/testsfml.dir/testsfml.cpp.o.requires:
.PHONY : CMakeFiles/testsfml.dir/testsfml.cpp.o.requires

CMakeFiles/testsfml.dir/testsfml.cpp.o.provides: CMakeFiles/testsfml.dir/testsfml.cpp.o.requires
	$(MAKE) -f CMakeFiles/testsfml.dir/build.make CMakeFiles/testsfml.dir/testsfml.cpp.o.provides.build
.PHONY : CMakeFiles/testsfml.dir/testsfml.cpp.o.provides

CMakeFiles/testsfml.dir/testsfml.cpp.o.provides.build: CMakeFiles/testsfml.dir/testsfml.cpp.o

# Object files for target testsfml
testsfml_OBJECTS = \
"CMakeFiles/testsfml.dir/testsfml.cpp.o"

# External object files for target testsfml
testsfml_EXTERNAL_OBJECTS =

testsfml: CMakeFiles/testsfml.dir/testsfml.cpp.o
testsfml: CMakeFiles/testsfml.dir/build.make
testsfml: CMakeFiles/testsfml.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable testsfml"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testsfml.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testsfml.dir/build: testsfml
.PHONY : CMakeFiles/testsfml.dir/build

CMakeFiles/testsfml.dir/requires: CMakeFiles/testsfml.dir/testsfml.cpp.o.requires
.PHONY : CMakeFiles/testsfml.dir/requires

CMakeFiles/testsfml.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testsfml.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testsfml.dir/clean

CMakeFiles/testsfml.dir/depend:
	cd /home/Pleb/Documents/RobotArmHeadAvoid && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/Pleb/Documents/RobotArmHeadAvoid /home/Pleb/Documents/RobotArmHeadAvoid /home/Pleb/Documents/RobotArmHeadAvoid /home/Pleb/Documents/RobotArmHeadAvoid /home/Pleb/Documents/RobotArmHeadAvoid/CMakeFiles/testsfml.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testsfml.dir/depend
