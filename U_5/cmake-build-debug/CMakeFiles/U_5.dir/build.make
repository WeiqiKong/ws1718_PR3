# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/xuexi/PR3/U_5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/xuexi/PR3/U_5/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/U_5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/U_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/U_5.dir/flags.make

CMakeFiles/U_5.dir/U_5.c.o: CMakeFiles/U_5.dir/flags.make
CMakeFiles/U_5.dir/U_5.c.o: ../U_5.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xuexi/PR3/U_5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/U_5.dir/U_5.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/U_5.dir/U_5.c.o   -c /Users/xuexi/PR3/U_5/U_5.c

CMakeFiles/U_5.dir/U_5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/U_5.dir/U_5.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/xuexi/PR3/U_5/U_5.c > CMakeFiles/U_5.dir/U_5.c.i

CMakeFiles/U_5.dir/U_5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/U_5.dir/U_5.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/xuexi/PR3/U_5/U_5.c -o CMakeFiles/U_5.dir/U_5.c.s

CMakeFiles/U_5.dir/U_5.c.o.requires:

.PHONY : CMakeFiles/U_5.dir/U_5.c.o.requires

CMakeFiles/U_5.dir/U_5.c.o.provides: CMakeFiles/U_5.dir/U_5.c.o.requires
	$(MAKE) -f CMakeFiles/U_5.dir/build.make CMakeFiles/U_5.dir/U_5.c.o.provides.build
.PHONY : CMakeFiles/U_5.dir/U_5.c.o.provides

CMakeFiles/U_5.dir/U_5.c.o.provides.build: CMakeFiles/U_5.dir/U_5.c.o


# Object files for target U_5
U_5_OBJECTS = \
"CMakeFiles/U_5.dir/U_5.c.o"

# External object files for target U_5
U_5_EXTERNAL_OBJECTS =

U_5: CMakeFiles/U_5.dir/U_5.c.o
U_5: CMakeFiles/U_5.dir/build.make
U_5: CMakeFiles/U_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/xuexi/PR3/U_5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable U_5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/U_5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/U_5.dir/build: U_5

.PHONY : CMakeFiles/U_5.dir/build

CMakeFiles/U_5.dir/requires: CMakeFiles/U_5.dir/U_5.c.o.requires

.PHONY : CMakeFiles/U_5.dir/requires

CMakeFiles/U_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/U_5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/U_5.dir/clean

CMakeFiles/U_5.dir/depend:
	cd /Users/xuexi/PR3/U_5/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/xuexi/PR3/U_5 /Users/xuexi/PR3/U_5 /Users/xuexi/PR3/U_5/cmake-build-debug /Users/xuexi/PR3/U_5/cmake-build-debug /Users/xuexi/PR3/U_5/cmake-build-debug/CMakeFiles/U_5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/U_5.dir/depend
