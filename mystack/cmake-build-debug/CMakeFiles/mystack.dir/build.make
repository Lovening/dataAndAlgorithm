# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "G:\program File\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "G:\program File\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\workSpace\algorithm\mystack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\workSpace\algorithm\mystack\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mystack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mystack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mystack.dir/flags.make

CMakeFiles/mystack.dir/main.cpp.obj: CMakeFiles/mystack.dir/flags.make
CMakeFiles/mystack.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\workSpace\algorithm\mystack\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mystack.dir/main.cpp.obj"
	C:\PROGRA~2\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mystack.dir\main.cpp.obj -c F:\workSpace\algorithm\mystack\main.cpp

CMakeFiles/mystack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mystack.dir/main.cpp.i"
	C:\PROGRA~2\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\workSpace\algorithm\mystack\main.cpp > CMakeFiles\mystack.dir\main.cpp.i

CMakeFiles/mystack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mystack.dir/main.cpp.s"
	C:\PROGRA~2\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\workSpace\algorithm\mystack\main.cpp -o CMakeFiles\mystack.dir\main.cpp.s

CMakeFiles/mystack.dir/myUntil.cpp.obj: CMakeFiles/mystack.dir/flags.make
CMakeFiles/mystack.dir/myUntil.cpp.obj: ../myUntil.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\workSpace\algorithm\mystack\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/mystack.dir/myUntil.cpp.obj"
	C:\PROGRA~2\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mystack.dir\myUntil.cpp.obj -c F:\workSpace\algorithm\mystack\myUntil.cpp

CMakeFiles/mystack.dir/myUntil.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mystack.dir/myUntil.cpp.i"
	C:\PROGRA~2\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\workSpace\algorithm\mystack\myUntil.cpp > CMakeFiles\mystack.dir\myUntil.cpp.i

CMakeFiles/mystack.dir/myUntil.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mystack.dir/myUntil.cpp.s"
	C:\PROGRA~2\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\workSpace\algorithm\mystack\myUntil.cpp -o CMakeFiles\mystack.dir\myUntil.cpp.s

CMakeFiles/mystack.dir/myStack.cpp.obj: CMakeFiles/mystack.dir/flags.make
CMakeFiles/mystack.dir/myStack.cpp.obj: ../myStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\workSpace\algorithm\mystack\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/mystack.dir/myStack.cpp.obj"
	C:\PROGRA~2\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mystack.dir\myStack.cpp.obj -c F:\workSpace\algorithm\mystack\myStack.cpp

CMakeFiles/mystack.dir/myStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mystack.dir/myStack.cpp.i"
	C:\PROGRA~2\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\workSpace\algorithm\mystack\myStack.cpp > CMakeFiles\mystack.dir\myStack.cpp.i

CMakeFiles/mystack.dir/myStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mystack.dir/myStack.cpp.s"
	C:\PROGRA~2\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\workSpace\algorithm\mystack\myStack.cpp -o CMakeFiles\mystack.dir\myStack.cpp.s

# Object files for target mystack
mystack_OBJECTS = \
"CMakeFiles/mystack.dir/main.cpp.obj" \
"CMakeFiles/mystack.dir/myUntil.cpp.obj" \
"CMakeFiles/mystack.dir/myStack.cpp.obj"

# External object files for target mystack
mystack_EXTERNAL_OBJECTS =

mystack.exe: CMakeFiles/mystack.dir/main.cpp.obj
mystack.exe: CMakeFiles/mystack.dir/myUntil.cpp.obj
mystack.exe: CMakeFiles/mystack.dir/myStack.cpp.obj
mystack.exe: CMakeFiles/mystack.dir/build.make
mystack.exe: CMakeFiles/mystack.dir/linklibs.rsp
mystack.exe: CMakeFiles/mystack.dir/objects1.rsp
mystack.exe: CMakeFiles/mystack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\workSpace\algorithm\mystack\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable mystack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mystack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mystack.dir/build: mystack.exe

.PHONY : CMakeFiles/mystack.dir/build

CMakeFiles/mystack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mystack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mystack.dir/clean

CMakeFiles/mystack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\workSpace\algorithm\mystack F:\workSpace\algorithm\mystack F:\workSpace\algorithm\mystack\cmake-build-debug F:\workSpace\algorithm\mystack\cmake-build-debug F:\workSpace\algorithm\mystack\cmake-build-debug\CMakeFiles\mystack.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mystack.dir/depend

