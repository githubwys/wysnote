# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_SOURCE_DIR = /home/tonglu/slam/wysnote/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tonglu/slam/wysnote/cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/pointer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pointer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pointer.dir/flags.make

CMakeFiles/pointer.dir/pointer.cpp.o: CMakeFiles/pointer.dir/flags.make
CMakeFiles/pointer.dir/pointer.cpp.o: ../pointer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tonglu/slam/wysnote/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pointer.dir/pointer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointer.dir/pointer.cpp.o -c /home/tonglu/slam/wysnote/cpp/pointer.cpp

CMakeFiles/pointer.dir/pointer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointer.dir/pointer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tonglu/slam/wysnote/cpp/pointer.cpp > CMakeFiles/pointer.dir/pointer.cpp.i

CMakeFiles/pointer.dir/pointer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointer.dir/pointer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tonglu/slam/wysnote/cpp/pointer.cpp -o CMakeFiles/pointer.dir/pointer.cpp.s

CMakeFiles/pointer.dir/pointer.cpp.o.requires:

.PHONY : CMakeFiles/pointer.dir/pointer.cpp.o.requires

CMakeFiles/pointer.dir/pointer.cpp.o.provides: CMakeFiles/pointer.dir/pointer.cpp.o.requires
	$(MAKE) -f CMakeFiles/pointer.dir/build.make CMakeFiles/pointer.dir/pointer.cpp.o.provides.build
.PHONY : CMakeFiles/pointer.dir/pointer.cpp.o.provides

CMakeFiles/pointer.dir/pointer.cpp.o.provides.build: CMakeFiles/pointer.dir/pointer.cpp.o


# Object files for target pointer
pointer_OBJECTS = \
"CMakeFiles/pointer.dir/pointer.cpp.o"

# External object files for target pointer
pointer_EXTERNAL_OBJECTS =

pointer: CMakeFiles/pointer.dir/pointer.cpp.o
pointer: CMakeFiles/pointer.dir/build.make
pointer: CMakeFiles/pointer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tonglu/slam/wysnote/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pointer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pointer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pointer.dir/build: pointer

.PHONY : CMakeFiles/pointer.dir/build

CMakeFiles/pointer.dir/requires: CMakeFiles/pointer.dir/pointer.cpp.o.requires

.PHONY : CMakeFiles/pointer.dir/requires

CMakeFiles/pointer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pointer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pointer.dir/clean

CMakeFiles/pointer.dir/depend:
	cd /home/tonglu/slam/wysnote/cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tonglu/slam/wysnote/cpp /home/tonglu/slam/wysnote/cpp /home/tonglu/slam/wysnote/cpp/build /home/tonglu/slam/wysnote/cpp/build /home/tonglu/slam/wysnote/cpp/build/CMakeFiles/pointer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pointer.dir/depend
