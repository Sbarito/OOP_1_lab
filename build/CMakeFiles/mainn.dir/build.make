# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\OOP\laba 1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\OOP\laba 1\build"

# Include any dependencies generated for this target.
include CMakeFiles/mainn.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/mainn.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/mainn.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mainn.dir/flags.make

CMakeFiles/mainn.dir/main.cpp.obj: CMakeFiles/mainn.dir/flags.make
CMakeFiles/mainn.dir/main.cpp.obj: C:/OOP/laba\ 1/main.cpp
CMakeFiles/mainn.dir/main.cpp.obj: CMakeFiles/mainn.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\OOP\laba 1\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mainn.dir/main.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mainn.dir/main.cpp.obj -MF CMakeFiles\mainn.dir\main.cpp.obj.d -o CMakeFiles\mainn.dir\main.cpp.obj -c "C:\OOP\laba 1\main.cpp"

CMakeFiles/mainn.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/mainn.dir/main.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\OOP\laba 1\main.cpp" > CMakeFiles\mainn.dir\main.cpp.i

CMakeFiles/mainn.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/mainn.dir/main.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\OOP\laba 1\main.cpp" -o CMakeFiles\mainn.dir\main.cpp.s

# Object files for target mainn
mainn_OBJECTS = \
"CMakeFiles/mainn.dir/main.cpp.obj"

# External object files for target mainn
mainn_EXTERNAL_OBJECTS =

mainn.exe: CMakeFiles/mainn.dir/main.cpp.obj
mainn.exe: CMakeFiles/mainn.dir/build.make
mainn.exe: CMakeFiles/mainn.dir/linkLibs.rsp
mainn.exe: CMakeFiles/mainn.dir/objects1.rsp
mainn.exe: CMakeFiles/mainn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\OOP\laba 1\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mainn.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mainn.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mainn.dir/build: mainn.exe
.PHONY : CMakeFiles/mainn.dir/build

CMakeFiles/mainn.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mainn.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mainn.dir/clean

CMakeFiles/mainn.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\OOP\laba 1" "C:\OOP\laba 1" "C:\OOP\laba 1\build" "C:\OOP\laba 1\build" "C:\OOP\laba 1\build\CMakeFiles\mainn.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/mainn.dir/depend

