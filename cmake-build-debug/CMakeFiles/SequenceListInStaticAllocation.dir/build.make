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
include CMakeFiles/SequenceListInStaticAllocation.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/SequenceListInStaticAllocation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SequenceListInStaticAllocation.dir/flags.make

CMakeFiles/SequenceListInStaticAllocation.dir/LinearList/SequenceList/SequenceListInStaticAllocation.cpp.obj: CMakeFiles/SequenceListInStaticAllocation.dir/flags.make
CMakeFiles/SequenceListInStaticAllocation.dir/LinearList/SequenceList/SequenceListInStaticAllocation.cpp.obj: ../LinearList/SequenceList/SequenceListInStaticAllocation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SequenceListInStaticAllocation.dir/LinearList/SequenceList/SequenceListInStaticAllocation.cpp.obj"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SequenceListInStaticAllocation.dir\LinearList\SequenceList\SequenceListInStaticAllocation.cpp.obj -c D:\repo\DataStructureInCLanguage\LinearList\SequenceList\SequenceListInStaticAllocation.cpp

CMakeFiles/SequenceListInStaticAllocation.dir/LinearList/SequenceList/SequenceListInStaticAllocation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SequenceListInStaticAllocation.dir/LinearList/SequenceList/SequenceListInStaticAllocation.cpp.i"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\repo\DataStructureInCLanguage\LinearList\SequenceList\SequenceListInStaticAllocation.cpp > CMakeFiles\SequenceListInStaticAllocation.dir\LinearList\SequenceList\SequenceListInStaticAllocation.cpp.i

CMakeFiles/SequenceListInStaticAllocation.dir/LinearList/SequenceList/SequenceListInStaticAllocation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SequenceListInStaticAllocation.dir/LinearList/SequenceList/SequenceListInStaticAllocation.cpp.s"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\repo\DataStructureInCLanguage\LinearList\SequenceList\SequenceListInStaticAllocation.cpp -o CMakeFiles\SequenceListInStaticAllocation.dir\LinearList\SequenceList\SequenceListInStaticAllocation.cpp.s

# Object files for target SequenceListInStaticAllocation
SequenceListInStaticAllocation_OBJECTS = \
"CMakeFiles/SequenceListInStaticAllocation.dir/LinearList/SequenceList/SequenceListInStaticAllocation.cpp.obj"

# External object files for target SequenceListInStaticAllocation
SequenceListInStaticAllocation_EXTERNAL_OBJECTS =

SequenceListInStaticAllocation.exe: CMakeFiles/SequenceListInStaticAllocation.dir/LinearList/SequenceList/SequenceListInStaticAllocation.cpp.obj
SequenceListInStaticAllocation.exe: CMakeFiles/SequenceListInStaticAllocation.dir/build.make
SequenceListInStaticAllocation.exe: CMakeFiles/SequenceListInStaticAllocation.dir/linklibs.rsp
SequenceListInStaticAllocation.exe: CMakeFiles/SequenceListInStaticAllocation.dir/objects1.rsp
SequenceListInStaticAllocation.exe: CMakeFiles/SequenceListInStaticAllocation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SequenceListInStaticAllocation.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SequenceListInStaticAllocation.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SequenceListInStaticAllocation.dir/build: SequenceListInStaticAllocation.exe
.PHONY : CMakeFiles/SequenceListInStaticAllocation.dir/build

CMakeFiles/SequenceListInStaticAllocation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SequenceListInStaticAllocation.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SequenceListInStaticAllocation.dir/clean

CMakeFiles/SequenceListInStaticAllocation.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\repo\DataStructureInCLanguage D:\repo\DataStructureInCLanguage D:\repo\DataStructureInCLanguage\cmake-build-debug D:\repo\DataStructureInCLanguage\cmake-build-debug D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles\SequenceListInStaticAllocation.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SequenceListInStaticAllocation.dir/depend

