# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ning/WorkSpace/DataAlgorithms/redBlackTree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ning/WorkSpace/DataAlgorithms/redBlackTree/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/redBlackTree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/redBlackTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/redBlackTree.dir/flags.make

CMakeFiles/redBlackTree.dir/main.cpp.o: CMakeFiles/redBlackTree.dir/flags.make
CMakeFiles/redBlackTree.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ning/WorkSpace/DataAlgorithms/redBlackTree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/redBlackTree.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/redBlackTree.dir/main.cpp.o -c /Users/ning/WorkSpace/DataAlgorithms/redBlackTree/main.cpp

CMakeFiles/redBlackTree.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/redBlackTree.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ning/WorkSpace/DataAlgorithms/redBlackTree/main.cpp > CMakeFiles/redBlackTree.dir/main.cpp.i

CMakeFiles/redBlackTree.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/redBlackTree.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ning/WorkSpace/DataAlgorithms/redBlackTree/main.cpp -o CMakeFiles/redBlackTree.dir/main.cpp.s

# Object files for target redBlackTree
redBlackTree_OBJECTS = \
"CMakeFiles/redBlackTree.dir/main.cpp.o"

# External object files for target redBlackTree
redBlackTree_EXTERNAL_OBJECTS =

redBlackTree: CMakeFiles/redBlackTree.dir/main.cpp.o
redBlackTree: CMakeFiles/redBlackTree.dir/build.make
redBlackTree: CMakeFiles/redBlackTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ning/WorkSpace/DataAlgorithms/redBlackTree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable redBlackTree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/redBlackTree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/redBlackTree.dir/build: redBlackTree

.PHONY : CMakeFiles/redBlackTree.dir/build

CMakeFiles/redBlackTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/redBlackTree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/redBlackTree.dir/clean

CMakeFiles/redBlackTree.dir/depend:
	cd /Users/ning/WorkSpace/DataAlgorithms/redBlackTree/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ning/WorkSpace/DataAlgorithms/redBlackTree /Users/ning/WorkSpace/DataAlgorithms/redBlackTree /Users/ning/WorkSpace/DataAlgorithms/redBlackTree/cmake-build-debug /Users/ning/WorkSpace/DataAlgorithms/redBlackTree/cmake-build-debug /Users/ning/WorkSpace/DataAlgorithms/redBlackTree/cmake-build-debug/CMakeFiles/redBlackTree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/redBlackTree.dir/depend
