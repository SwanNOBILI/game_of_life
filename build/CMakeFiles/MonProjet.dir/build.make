# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

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
CMAKE_SOURCE_DIR = C:\Users\nobil\Desktop\Projets\game_of_life

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\nobil\Desktop\Projets\game_of_life\build

# Include any dependencies generated for this target.
include CMakeFiles/MonProjet.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MonProjet.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MonProjet.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MonProjet.dir/flags.make

CMakeFiles/MonProjet.dir/codegen:
.PHONY : CMakeFiles/MonProjet.dir/codegen

CMakeFiles/MonProjet.dir/src/main.cpp.obj: CMakeFiles/MonProjet.dir/flags.make
CMakeFiles/MonProjet.dir/src/main.cpp.obj: CMakeFiles/MonProjet.dir/includes_CXX.rsp
CMakeFiles/MonProjet.dir/src/main.cpp.obj: C:/Users/nobil/Desktop/Projets/game_of_life/src/main.cpp
CMakeFiles/MonProjet.dir/src/main.cpp.obj: CMakeFiles/MonProjet.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\nobil\Desktop\Projets\game_of_life\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MonProjet.dir/src/main.cpp.obj"
	C:\mingw32\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MonProjet.dir/src/main.cpp.obj -MF CMakeFiles\MonProjet.dir\src\main.cpp.obj.d -o CMakeFiles\MonProjet.dir\src\main.cpp.obj -c C:\Users\nobil\Desktop\Projets\game_of_life\src\main.cpp

CMakeFiles/MonProjet.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MonProjet.dir/src/main.cpp.i"
	C:\mingw32\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\nobil\Desktop\Projets\game_of_life\src\main.cpp > CMakeFiles\MonProjet.dir\src\main.cpp.i

CMakeFiles/MonProjet.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MonProjet.dir/src/main.cpp.s"
	C:\mingw32\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\nobil\Desktop\Projets\game_of_life\src\main.cpp -o CMakeFiles\MonProjet.dir\src\main.cpp.s

# Object files for target MonProjet
MonProjet_OBJECTS = \
"CMakeFiles/MonProjet.dir/src/main.cpp.obj"

# External object files for target MonProjet
MonProjet_EXTERNAL_OBJECTS =

bin/MonProjet.exe: CMakeFiles/MonProjet.dir/src/main.cpp.obj
bin/MonProjet.exe: CMakeFiles/MonProjet.dir/build.make
bin/MonProjet.exe: C:/SFML-2.6.1/lib/libsfml-graphics-d.a
bin/MonProjet.exe: C:/SFML-2.6.1/lib/libsfml-window-d.a
bin/MonProjet.exe: C:/SFML-2.6.1/lib/libsfml-system-d.a
bin/MonProjet.exe: CMakeFiles/MonProjet.dir/linkLibs.rsp
bin/MonProjet.exe: CMakeFiles/MonProjet.dir/objects1.rsp
bin/MonProjet.exe: CMakeFiles/MonProjet.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\nobil\Desktop\Projets\game_of_life\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin\MonProjet.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MonProjet.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MonProjet.dir/build: bin/MonProjet.exe
.PHONY : CMakeFiles/MonProjet.dir/build

CMakeFiles/MonProjet.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MonProjet.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MonProjet.dir/clean

CMakeFiles/MonProjet.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\nobil\Desktop\Projets\game_of_life C:\Users\nobil\Desktop\Projets\game_of_life C:\Users\nobil\Desktop\Projets\game_of_life\build C:\Users\nobil\Desktop\Projets\game_of_life\build C:\Users\nobil\Desktop\Projets\game_of_life\build\CMakeFiles\MonProjet.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/MonProjet.dir/depend
