# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/2.8.12.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/2.8.12.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/local/Cellar/cmake/2.8.12.2/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/rodrigopex/Teaching/p1/2014.1/code/aula_cmake/AB

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rodrigopex/Teaching/p1/2014.1/code/aula_cmake/AB/build

# Include any dependencies generated for this target.
include CMakeFiles/AB.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AB.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AB.dir/flags.make

CMakeFiles/AB.dir/a.c.o: CMakeFiles/AB.dir/flags.make
CMakeFiles/AB.dir/a.c.o: ../a.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/rodrigopex/Teaching/p1/2014.1/code/aula_cmake/AB/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/AB.dir/a.c.o"
	/usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/AB.dir/a.c.o   -c /Users/rodrigopex/Teaching/p1/2014.1/code/aula_cmake/AB/a.c

CMakeFiles/AB.dir/a.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/AB.dir/a.c.i"
	/usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -E /Users/rodrigopex/Teaching/p1/2014.1/code/aula_cmake/AB/a.c > CMakeFiles/AB.dir/a.c.i

CMakeFiles/AB.dir/a.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/AB.dir/a.c.s"
	/usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -S /Users/rodrigopex/Teaching/p1/2014.1/code/aula_cmake/AB/a.c -o CMakeFiles/AB.dir/a.c.s

CMakeFiles/AB.dir/a.c.o.requires:
.PHONY : CMakeFiles/AB.dir/a.c.o.requires

CMakeFiles/AB.dir/a.c.o.provides: CMakeFiles/AB.dir/a.c.o.requires
	$(MAKE) -f CMakeFiles/AB.dir/build.make CMakeFiles/AB.dir/a.c.o.provides.build
.PHONY : CMakeFiles/AB.dir/a.c.o.provides

CMakeFiles/AB.dir/a.c.o.provides.build: CMakeFiles/AB.dir/a.c.o

CMakeFiles/AB.dir/b.c.o: CMakeFiles/AB.dir/flags.make
CMakeFiles/AB.dir/b.c.o: ../b.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/rodrigopex/Teaching/p1/2014.1/code/aula_cmake/AB/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/AB.dir/b.c.o"
	/usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/AB.dir/b.c.o   -c /Users/rodrigopex/Teaching/p1/2014.1/code/aula_cmake/AB/b.c

CMakeFiles/AB.dir/b.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/AB.dir/b.c.i"
	/usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -E /Users/rodrigopex/Teaching/p1/2014.1/code/aula_cmake/AB/b.c > CMakeFiles/AB.dir/b.c.i

CMakeFiles/AB.dir/b.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/AB.dir/b.c.s"
	/usr/bin/clang  $(C_DEFINES) $(C_FLAGS) -S /Users/rodrigopex/Teaching/p1/2014.1/code/aula_cmake/AB/b.c -o CMakeFiles/AB.dir/b.c.s

CMakeFiles/AB.dir/b.c.o.requires:
.PHONY : CMakeFiles/AB.dir/b.c.o.requires

CMakeFiles/AB.dir/b.c.o.provides: CMakeFiles/AB.dir/b.c.o.requires
	$(MAKE) -f CMakeFiles/AB.dir/build.make CMakeFiles/AB.dir/b.c.o.provides.build
.PHONY : CMakeFiles/AB.dir/b.c.o.provides

CMakeFiles/AB.dir/b.c.o.provides.build: CMakeFiles/AB.dir/b.c.o

# Object files for target AB
AB_OBJECTS = \
"CMakeFiles/AB.dir/a.c.o" \
"CMakeFiles/AB.dir/b.c.o"

# External object files for target AB
AB_EXTERNAL_OBJECTS =

libAB.dylib: CMakeFiles/AB.dir/a.c.o
libAB.dylib: CMakeFiles/AB.dir/b.c.o
libAB.dylib: CMakeFiles/AB.dir/build.make
libAB.dylib: CMakeFiles/AB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C shared library libAB.dylib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AB.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AB.dir/build: libAB.dylib
.PHONY : CMakeFiles/AB.dir/build

CMakeFiles/AB.dir/requires: CMakeFiles/AB.dir/a.c.o.requires
CMakeFiles/AB.dir/requires: CMakeFiles/AB.dir/b.c.o.requires
.PHONY : CMakeFiles/AB.dir/requires

CMakeFiles/AB.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AB.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AB.dir/clean

CMakeFiles/AB.dir/depend:
	cd /Users/rodrigopex/Teaching/p1/2014.1/code/aula_cmake/AB/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rodrigopex/Teaching/p1/2014.1/code/aula_cmake/AB /Users/rodrigopex/Teaching/p1/2014.1/code/aula_cmake/AB /Users/rodrigopex/Teaching/p1/2014.1/code/aula_cmake/AB/build /Users/rodrigopex/Teaching/p1/2014.1/code/aula_cmake/AB/build /Users/rodrigopex/Teaching/p1/2014.1/code/aula_cmake/AB/build/CMakeFiles/AB.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AB.dir/depend

