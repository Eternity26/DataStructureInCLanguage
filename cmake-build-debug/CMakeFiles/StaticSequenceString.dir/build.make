# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2021.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\repo\DataStructureInCLanguage

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\repo\DataStructureInCLanguage\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StaticSequenceString.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/StaticSequenceString.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StaticSequenceString.dir/flags.make

CMakeFiles/StaticSequenceString.dir/String/StaticSequenceString.cpp.obj: CMakeFiles/StaticSequenceString.dir/flags.make
CMakeFiles/StaticSequenceString.dir/String/StaticSequenceString.cpp.obj: ../String/StaticSequenceString.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StaticSequenceString.dir/String/StaticSequenceString.cpp.obj"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StaticSequenceString.dir\String\StaticSequenceString.cpp.obj -c D:\repo\DataStructureInCLanguage\String\StaticSequenceString.cpp

CMakeFiles/StaticSequenceString.dir/String/StaticSequenceString.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StaticSequenceString.dir/String/StaticSequenceString.cpp.i"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\repo\DataStructureInCLanguage\String\StaticSequenceString.cpp > CMakeFiles\StaticSequenceString.dir\String\StaticSequenceString.cpp.i

CMakeFiles/StaticSequenceString.dir/String/StaticSequenceString.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StaticSequenceString.dir/String/StaticSequenceString.cpp.s"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\repo\DataStructureInCLanguage\String\StaticSequenceString.cpp -o CMakeFiles\StaticSequenceString.dir\String\StaticSequenceString.cpp.s

# Object files for target StaticSequenceString
StaticSequenceString_OBJECTS = \
"CMakeFiles/StaticSequenceString.dir/String/StaticSequenceString.cpp.obj"

# External object files for target StaticSequenceString
StaticSequenceString_EXTERNAL_OBJECTS =

StaticSequenceString.exe: CMakeFiles/StaticSequenceString.dir/String/StaticSequenceString.cpp.obj
StaticSequenceString.exe: CMakeFiles/StaticSequenceString.dir/build.make
StaticSequenceString.exe: CMakeFiles/StaticSequenceString.dir/linklibs.rsp
StaticSequenceString.exe: CMakeFiles/StaticSequenceString.dir/objects1.rsp
StaticSequenceString.exe: CMakeFiles/StaticSequenceString.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable StaticSequenceString.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\StaticSequenceString.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StaticSequenceString.dir/build: StaticSequenceString.exe
.PHONY : CMakeFiles/StaticSequenceString.dir/build

CMakeFiles/StaticSequenceString.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\StaticSequenceString.dir\cmake_clean.cmake
.PHONY : CMakeFiles/StaticSequenceString.dir/clean

CMakeFiles/StaticSequenceString.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\repo\DataStructureInCLanguage D:\repo\DataStructureInCLanguage D:\repo\DataStructureInCLanguage\cmake-build-debug D:\repo\DataStructureInCLanguage\cmake-build-debug D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles\StaticSequenceString.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StaticSequenceString.dir/depend

