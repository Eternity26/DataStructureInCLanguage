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
include CMakeFiles/SequenceBinaryTree.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/SequenceBinaryTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SequenceBinaryTree.dir/flags.make

CMakeFiles/SequenceBinaryTree.dir/Tree/SequenceBinaryTree.cpp.obj: CMakeFiles/SequenceBinaryTree.dir/flags.make
CMakeFiles/SequenceBinaryTree.dir/Tree/SequenceBinaryTree.cpp.obj: ../Tree/SequenceBinaryTree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SequenceBinaryTree.dir/Tree/SequenceBinaryTree.cpp.obj"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SequenceBinaryTree.dir\Tree\SequenceBinaryTree.cpp.obj -c D:\repo\DataStructureInCLanguage\Tree\SequenceBinaryTree.cpp

CMakeFiles/SequenceBinaryTree.dir/Tree/SequenceBinaryTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SequenceBinaryTree.dir/Tree/SequenceBinaryTree.cpp.i"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\repo\DataStructureInCLanguage\Tree\SequenceBinaryTree.cpp > CMakeFiles\SequenceBinaryTree.dir\Tree\SequenceBinaryTree.cpp.i

CMakeFiles/SequenceBinaryTree.dir/Tree/SequenceBinaryTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SequenceBinaryTree.dir/Tree/SequenceBinaryTree.cpp.s"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\repo\DataStructureInCLanguage\Tree\SequenceBinaryTree.cpp -o CMakeFiles\SequenceBinaryTree.dir\Tree\SequenceBinaryTree.cpp.s

# Object files for target SequenceBinaryTree
SequenceBinaryTree_OBJECTS = \
"CMakeFiles/SequenceBinaryTree.dir/Tree/SequenceBinaryTree.cpp.obj"

# External object files for target SequenceBinaryTree
SequenceBinaryTree_EXTERNAL_OBJECTS =

SequenceBinaryTree.exe: CMakeFiles/SequenceBinaryTree.dir/Tree/SequenceBinaryTree.cpp.obj
SequenceBinaryTree.exe: CMakeFiles/SequenceBinaryTree.dir/build.make
SequenceBinaryTree.exe: CMakeFiles/SequenceBinaryTree.dir/linklibs.rsp
SequenceBinaryTree.exe: CMakeFiles/SequenceBinaryTree.dir/objects1.rsp
SequenceBinaryTree.exe: CMakeFiles/SequenceBinaryTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SequenceBinaryTree.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SequenceBinaryTree.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SequenceBinaryTree.dir/build: SequenceBinaryTree.exe
.PHONY : CMakeFiles/SequenceBinaryTree.dir/build

CMakeFiles/SequenceBinaryTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SequenceBinaryTree.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SequenceBinaryTree.dir/clean

CMakeFiles/SequenceBinaryTree.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\repo\DataStructureInCLanguage D:\repo\DataStructureInCLanguage D:\repo\DataStructureInCLanguage\cmake-build-debug D:\repo\DataStructureInCLanguage\cmake-build-debug D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles\SequenceBinaryTree.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SequenceBinaryTree.dir/depend

