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
include CMakeFiles/PreOrderTraverse.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/PreOrderTraverse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PreOrderTraverse.dir/flags.make

CMakeFiles/PreOrderTraverse.dir/Tree/PreOrderTraverse.cpp.obj: CMakeFiles/PreOrderTraverse.dir/flags.make
CMakeFiles/PreOrderTraverse.dir/Tree/PreOrderTraverse.cpp.obj: ../Tree/PreOrderTraverse.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PreOrderTraverse.dir/Tree/PreOrderTraverse.cpp.obj"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\PreOrderTraverse.dir\Tree\PreOrderTraverse.cpp.obj -c D:\repo\DataStructureInCLanguage\Tree\PreOrderTraverse.cpp

CMakeFiles/PreOrderTraverse.dir/Tree/PreOrderTraverse.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PreOrderTraverse.dir/Tree/PreOrderTraverse.cpp.i"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\repo\DataStructureInCLanguage\Tree\PreOrderTraverse.cpp > CMakeFiles\PreOrderTraverse.dir\Tree\PreOrderTraverse.cpp.i

CMakeFiles/PreOrderTraverse.dir/Tree/PreOrderTraverse.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PreOrderTraverse.dir/Tree/PreOrderTraverse.cpp.s"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\repo\DataStructureInCLanguage\Tree\PreOrderTraverse.cpp -o CMakeFiles\PreOrderTraverse.dir\Tree\PreOrderTraverse.cpp.s

# Object files for target PreOrderTraverse
PreOrderTraverse_OBJECTS = \
"CMakeFiles/PreOrderTraverse.dir/Tree/PreOrderTraverse.cpp.obj"

# External object files for target PreOrderTraverse
PreOrderTraverse_EXTERNAL_OBJECTS =

PreOrderTraverse.exe: CMakeFiles/PreOrderTraverse.dir/Tree/PreOrderTraverse.cpp.obj
PreOrderTraverse.exe: CMakeFiles/PreOrderTraverse.dir/build.make
PreOrderTraverse.exe: CMakeFiles/PreOrderTraverse.dir/linklibs.rsp
PreOrderTraverse.exe: CMakeFiles/PreOrderTraverse.dir/objects1.rsp
PreOrderTraverse.exe: CMakeFiles/PreOrderTraverse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PreOrderTraverse.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PreOrderTraverse.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PreOrderTraverse.dir/build: PreOrderTraverse.exe
.PHONY : CMakeFiles/PreOrderTraverse.dir/build

CMakeFiles/PreOrderTraverse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PreOrderTraverse.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PreOrderTraverse.dir/clean

CMakeFiles/PreOrderTraverse.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\repo\DataStructureInCLanguage D:\repo\DataStructureInCLanguage D:\repo\DataStructureInCLanguage\cmake-build-debug D:\repo\DataStructureInCLanguage\cmake-build-debug D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles\PreOrderTraverse.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PreOrderTraverse.dir/depend
