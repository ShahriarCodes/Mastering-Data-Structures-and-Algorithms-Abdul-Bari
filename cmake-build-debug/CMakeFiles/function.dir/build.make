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
include CMakeFiles/function.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/function.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/function.dir/flags.make

CMakeFiles/function.dir/section02_essential_c_and_cpp_concepts/parameter_passing.cpp.o: CMakeFiles/function.dir/flags.make
CMakeFiles/function.dir/section02_essential_c_and_cpp_concepts/parameter_passing.cpp.o: ../section02_essential_c_and_cpp_concepts/parameter_passing.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/function.dir/section02_essential_c_and_cpp_concepts/parameter_passing.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/function.dir/section02_essential_c_and_cpp_concepts/parameter_passing.cpp.o -c /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/section02_essential_c_and_cpp_concepts/parameter_passing.cpp

CMakeFiles/function.dir/section02_essential_c_and_cpp_concepts/parameter_passing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/function.dir/section02_essential_c_and_cpp_concepts/parameter_passing.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/section02_essential_c_and_cpp_concepts/parameter_passing.cpp > CMakeFiles/function.dir/section02_essential_c_and_cpp_concepts/parameter_passing.cpp.i

CMakeFiles/function.dir/section02_essential_c_and_cpp_concepts/parameter_passing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/function.dir/section02_essential_c_and_cpp_concepts/parameter_passing.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/section02_essential_c_and_cpp_concepts/parameter_passing.cpp -o CMakeFiles/function.dir/section02_essential_c_and_cpp_concepts/parameter_passing.cpp.s

# Object files for target function
function_OBJECTS = \
"CMakeFiles/function.dir/section02_essential_c_and_cpp_concepts/parameter_passing.cpp.o"

# External object files for target function
function_EXTERNAL_OBJECTS =

function: CMakeFiles/function.dir/section02_essential_c_and_cpp_concepts/parameter_passing.cpp.o
function: CMakeFiles/function.dir/build.make
function: CMakeFiles/function.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable function"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/function.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/function.dir/build: function

.PHONY : CMakeFiles/function.dir/build

CMakeFiles/function.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/function.dir/cmake_clean.cmake
.PHONY : CMakeFiles/function.dir/clean

CMakeFiles/function.dir/depend:
	cd /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug /home/sal/CLionProjects/Mastering_Data_Stuctures_and_Algorithms_Abdul_bari/cmake-build-debug/CMakeFiles/function.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/function.dir/depend

