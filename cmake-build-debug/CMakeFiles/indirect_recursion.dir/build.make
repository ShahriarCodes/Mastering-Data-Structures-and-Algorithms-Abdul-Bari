# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/sal/CLion-2021.1/clion-2021.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/sal/CLion-2021.1/clion-2021.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/indirect_recursion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/indirect_recursion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/indirect_recursion.dir/flags.make

CMakeFiles/indirect_recursion.dir/section05_recursion/indirect_recursion.cpp.o: CMakeFiles/indirect_recursion.dir/flags.make
CMakeFiles/indirect_recursion.dir/section05_recursion/indirect_recursion.cpp.o: ../section05_recursion/indirect_recursion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/indirect_recursion.dir/section05_recursion/indirect_recursion.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/indirect_recursion.dir/section05_recursion/indirect_recursion.cpp.o -c /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/section05_recursion/indirect_recursion.cpp

CMakeFiles/indirect_recursion.dir/section05_recursion/indirect_recursion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/indirect_recursion.dir/section05_recursion/indirect_recursion.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/section05_recursion/indirect_recursion.cpp > CMakeFiles/indirect_recursion.dir/section05_recursion/indirect_recursion.cpp.i

CMakeFiles/indirect_recursion.dir/section05_recursion/indirect_recursion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/indirect_recursion.dir/section05_recursion/indirect_recursion.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/section05_recursion/indirect_recursion.cpp -o CMakeFiles/indirect_recursion.dir/section05_recursion/indirect_recursion.cpp.s

# Object files for target indirect_recursion
indirect_recursion_OBJECTS = \
"CMakeFiles/indirect_recursion.dir/section05_recursion/indirect_recursion.cpp.o"

# External object files for target indirect_recursion
indirect_recursion_EXTERNAL_OBJECTS =

indirect_recursion: CMakeFiles/indirect_recursion.dir/section05_recursion/indirect_recursion.cpp.o
indirect_recursion: CMakeFiles/indirect_recursion.dir/build.make
indirect_recursion: CMakeFiles/indirect_recursion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable indirect_recursion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/indirect_recursion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/indirect_recursion.dir/build: indirect_recursion

.PHONY : CMakeFiles/indirect_recursion.dir/build

CMakeFiles/indirect_recursion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/indirect_recursion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/indirect_recursion.dir/clean

CMakeFiles/indirect_recursion.dir/depend:
	cd /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug/CMakeFiles/indirect_recursion.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/indirect_recursion.dir/depend
