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
include CMakeFiles/exercise_problems.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exercise_problems.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exercise_problems.dir/flags.make

CMakeFiles/exercise_problems.dir/section05_recursion/exercise/exercise_problems.cpp.o: CMakeFiles/exercise_problems.dir/flags.make
CMakeFiles/exercise_problems.dir/section05_recursion/exercise/exercise_problems.cpp.o: ../section05_recursion/exercise/exercise_problems.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exercise_problems.dir/section05_recursion/exercise/exercise_problems.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exercise_problems.dir/section05_recursion/exercise/exercise_problems.cpp.o -c /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/section05_recursion/exercise/exercise_problems.cpp

CMakeFiles/exercise_problems.dir/section05_recursion/exercise/exercise_problems.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exercise_problems.dir/section05_recursion/exercise/exercise_problems.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/section05_recursion/exercise/exercise_problems.cpp > CMakeFiles/exercise_problems.dir/section05_recursion/exercise/exercise_problems.cpp.i

CMakeFiles/exercise_problems.dir/section05_recursion/exercise/exercise_problems.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exercise_problems.dir/section05_recursion/exercise/exercise_problems.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/section05_recursion/exercise/exercise_problems.cpp -o CMakeFiles/exercise_problems.dir/section05_recursion/exercise/exercise_problems.cpp.s

# Object files for target exercise_problems
exercise_problems_OBJECTS = \
"CMakeFiles/exercise_problems.dir/section05_recursion/exercise/exercise_problems.cpp.o"

# External object files for target exercise_problems
exercise_problems_EXTERNAL_OBJECTS =

exercise_problems: CMakeFiles/exercise_problems.dir/section05_recursion/exercise/exercise_problems.cpp.o
exercise_problems: CMakeFiles/exercise_problems.dir/build.make
exercise_problems: CMakeFiles/exercise_problems.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable exercise_problems"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exercise_problems.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exercise_problems.dir/build: exercise_problems

.PHONY : CMakeFiles/exercise_problems.dir/build

CMakeFiles/exercise_problems.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exercise_problems.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exercise_problems.dir/clean

CMakeFiles/exercise_problems.dir/depend:
	cd /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug/CMakeFiles/exercise_problems.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exercise_problems.dir/depend

