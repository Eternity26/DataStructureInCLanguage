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
include CMakeFiles/SelectionSort.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/SelectionSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SelectionSort.dir/flags.make

CMakeFiles/SelectionSort.dir/Sort/SelectionSort.cpp.obj: CMakeFiles/SelectionSort.dir/flags.make
CMakeFiles/SelectionSort.dir/Sort/SelectionSort.cpp.obj: ../Sort/SelectionSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SelectionSort.dir/Sort/SelectionSort.cpp.obj"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SelectionSort.dir\Sort\SelectionSort.cpp.obj -c D:\repo\DataStructureInCLanguage\Sort\SelectionSort.cpp

CMakeFiles/SelectionSort.dir/Sort/SelectionSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SelectionSort.dir/Sort/SelectionSort.cpp.i"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\repo\DataStructureInCLanguage\Sort\SelectionSort.cpp > CMakeFiles\SelectionSort.dir\Sort\SelectionSort.cpp.i

CMakeFiles/SelectionSort.dir/Sort/SelectionSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SelectionSort.dir/Sort/SelectionSort.cpp.s"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\repo\DataStructureInCLanguage\Sort\SelectionSort.cpp -o CMakeFiles\SelectionSort.dir\Sort\SelectionSort.cpp.s

CMakeFiles/SelectionSort.dir/Sort/QuickSort.cpp.obj: CMakeFiles/SelectionSort.dir/flags.make
CMakeFiles/SelectionSort.dir/Sort/QuickSort.cpp.obj: ../Sort/QuickSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SelectionSort.dir/Sort/QuickSort.cpp.obj"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SelectionSort.dir\Sort\QuickSort.cpp.obj -c D:\repo\DataStructureInCLanguage\Sort\QuickSort.cpp

CMakeFiles/SelectionSort.dir/Sort/QuickSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SelectionSort.dir/Sort/QuickSort.cpp.i"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\repo\DataStructureInCLanguage\Sort\QuickSort.cpp > CMakeFiles\SelectionSort.dir\Sort\QuickSort.cpp.i

CMakeFiles/SelectionSort.dir/Sort/QuickSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SelectionSort.dir/Sort/QuickSort.cpp.s"
	D:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\repo\DataStructureInCLanguage\Sort\QuickSort.cpp -o CMakeFiles\SelectionSort.dir\Sort\QuickSort.cpp.s

# Object files for target SelectionSort
SelectionSort_OBJECTS = \
"CMakeFiles/SelectionSort.dir/Sort/SelectionSort.cpp.obj" \
"CMakeFiles/SelectionSort.dir/Sort/QuickSort.cpp.obj"

# External object files for target SelectionSort
SelectionSort_EXTERNAL_OBJECTS =

SelectionSort.exe: CMakeFiles/SelectionSort.dir/Sort/SelectionSort.cpp.obj
SelectionSort.exe: CMakeFiles/SelectionSort.dir/Sort/QuickSort.cpp.obj
SelectionSort.exe: CMakeFiles/SelectionSort.dir/build.make
SelectionSort.exe: CMakeFiles/SelectionSort.dir/linklibs.rsp
SelectionSort.exe: CMakeFiles/SelectionSort.dir/objects1.rsp
SelectionSort.exe: CMakeFiles/SelectionSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable SelectionSort.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SelectionSort.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SelectionSort.dir/build: SelectionSort.exe
.PHONY : CMakeFiles/SelectionSort.dir/build

CMakeFiles/SelectionSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SelectionSort.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SelectionSort.dir/clean

CMakeFiles/SelectionSort.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\repo\DataStructureInCLanguage D:\repo\DataStructureInCLanguage D:\repo\DataStructureInCLanguage\cmake-build-debug D:\repo\DataStructureInCLanguage\cmake-build-debug D:\repo\DataStructureInCLanguage\cmake-build-debug\CMakeFiles\SelectionSort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SelectionSort.dir/depend

