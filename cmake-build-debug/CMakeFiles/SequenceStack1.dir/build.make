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
include CMakeFiles/SequenceStack1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/SequenceStack1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SequenceStack1.dir/flags.make

CMakeFiles/SequenceStack1.dir/Stack/SequenceStack/SequenceStack1.cpp.obj: CMakeFiles/SequenceStack1.dir/flags.make
CMakeFiles/SequenceStack1.dir/Stack/SequenceStack/SequenceStack1.cpp.obj: ../Stack/SequenceStack/SequenceStack1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SequenceStack1.dir/Stack/SequenceStack/SequenceStack1.cpp.obj"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SequenceStack1.dir\Stack\SequenceStack\SequenceStack1.cpp.obj -c D:\repo\DataStructureInCLanguage\Stack\SequenceStack\SequenceStack1.cpp

CMakeFiles/SequenceStack1.dir/Stack/SequenceStack/SequenceStack1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SequenceStack1.dir/Stack/SequenceStack/SequenceStack1.cpp.i"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\repo\DataStructureInCLanguage\Stack\SequenceStack\SequenceStack1.cpp > CMakeFiles\SequenceStack1.dir\Stack\SequenceStack\SequenceStack1.cpp.i

CMakeFiles/SequenceStack1.dir/Stack/SequenceStack/SequenceStack1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SequenceStack1.dir/Stack/SequenceStack/SequenceStack1.cpp.s"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\repo\DataStructureInCLanguage\Stack\SequenceStack\SequenceStack1.cpp -o CMakeFiles\SequenceStack1.dir\Stack\SequenceStack\SequenceStack1.cpp.s

# Object files for target SequenceStack1
SequenceStack1_OBJECTS = \
"CMakeFiles/SequenceStack1.dir/Stack/SequenceStack/SequenceStack1.cpp.obj"

# External object files for target SequenceStack1
SequenceStack1_EXTERNAL_OBJECTS =

SequenceStack1.exe: CMakeFiles/SequenceStack1.dir/Stack/SequenceStack/SequenceStack1.cpp.obj
SequenceStack1.exe: CMakeFiles/SequenceStack1.dir/build.make
SequenceStack1.exe: CMakeFiles/SequenceStack1.dir/linklibs.rsp
SequenceStack1.exe: CMakeFiles/SequenceStack1.dir/objects1.rsp
SequenceStack1.exe: CMakeFiles/SequenceStack1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SequenceStack1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SequenceStack1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SequenceStack1.dir/build: SequenceStack1.exe
.PHONY : CMakeFiles/SequenceStack1.dir/build

CMakeFiles/SequenceStack1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SequenceStack1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SequenceStack1.dir/clean

CMakeFiles/SequenceStack1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\repo\DataStructureInCLanguage D:\repo\DataStructureInCLanguage D:\repo\DataStructureInCLanguage\cmake-build-debug D:\repo\DataStructureInCLanguage\cmake-build-debug D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles\SequenceStack1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SequenceStack1.dir/depend
