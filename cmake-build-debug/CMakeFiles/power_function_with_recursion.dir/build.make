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
include CMakeFiles/power_function_with_recursion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/power_function_with_recursion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/power_function_with_recursion.dir/flags.make

CMakeFiles/power_function_with_recursion.dir/section05_recursion/power_function_with_recursion.cpp.o: CMakeFiles/power_function_with_recursion.dir/flags.make
CMakeFiles/power_function_with_recursion.dir/section05_recursion/power_function_with_recursion.cpp.o: ../section05_recursion/power_function_with_recursion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/power_function_with_recursion.dir/section05_recursion/power_function_with_recursion.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/power_function_with_recursion.dir/section05_recursion/power_function_with_recursion.cpp.o -c /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/section05_recursion/power_function_with_recursion.cpp

CMakeFiles/power_function_with_recursion.dir/section05_recursion/power_function_with_recursion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/power_function_with_recursion.dir/section05_recursion/power_function_with_recursion.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/section05_recursion/power_function_with_recursion.cpp > CMakeFiles/power_function_with_recursion.dir/section05_recursion/power_function_with_recursion.cpp.i

CMakeFiles/power_function_with_recursion.dir/section05_recursion/power_function_with_recursion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/power_function_with_recursion.dir/section05_recursion/power_function_with_recursion.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/section05_recursion/power_function_with_recursion.cpp -o CMakeFiles/power_function_with_recursion.dir/section05_recursion/power_function_with_recursion.cpp.s

# Object files for target power_function_with_recursion
power_function_with_recursion_OBJECTS = \
"CMakeFiles/power_function_with_recursion.dir/section05_recursion/power_function_with_recursion.cpp.o"

# External object files for target power_function_with_recursion
power_function_with_recursion_EXTERNAL_OBJECTS =

power_function_with_recursion: CMakeFiles/power_function_with_recursion.dir/section05_recursion/power_function_with_recursion.cpp.o
power_function_with_recursion: CMakeFiles/power_function_with_recursion.dir/build.make
power_function_with_recursion: CMakeFiles/power_function_with_recursion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable power_function_with_recursion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/power_function_with_recursion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/power_function_with_recursion.dir/build: power_function_with_recursion

.PHONY : CMakeFiles/power_function_with_recursion.dir/build

CMakeFiles/power_function_with_recursion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/power_function_with_recursion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/power_function_with_recursion.dir/clean

CMakeFiles/power_function_with_recursion.dir/depend:
	cd /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug/CMakeFiles/power_function_with_recursion.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/power_function_with_recursion.dir/depend

