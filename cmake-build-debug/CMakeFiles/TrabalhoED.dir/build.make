# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TrabalhoED.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TrabalhoED.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TrabalhoED.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TrabalhoED.dir/flags.make

CMakeFiles/TrabalhoED.dir/main.c.o: CMakeFiles/TrabalhoED.dir/flags.make
CMakeFiles/TrabalhoED.dir/main.c.o: ../main.c
CMakeFiles/TrabalhoED.dir/main.c.o: CMakeFiles/TrabalhoED.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TrabalhoED.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/TrabalhoED.dir/main.c.o -MF CMakeFiles/TrabalhoED.dir/main.c.o.d -o CMakeFiles/TrabalhoED.dir/main.c.o -c /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/main.c

CMakeFiles/TrabalhoED.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TrabalhoED.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/main.c > CMakeFiles/TrabalhoED.dir/main.c.i

CMakeFiles/TrabalhoED.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TrabalhoED.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/main.c -o CMakeFiles/TrabalhoED.dir/main.c.s

CMakeFiles/TrabalhoED.dir/FilaNavios.c.o: CMakeFiles/TrabalhoED.dir/flags.make
CMakeFiles/TrabalhoED.dir/FilaNavios.c.o: ../FilaNavios.c
CMakeFiles/TrabalhoED.dir/FilaNavios.c.o: CMakeFiles/TrabalhoED.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/TrabalhoED.dir/FilaNavios.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/TrabalhoED.dir/FilaNavios.c.o -MF CMakeFiles/TrabalhoED.dir/FilaNavios.c.o.d -o CMakeFiles/TrabalhoED.dir/FilaNavios.c.o -c /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/FilaNavios.c

CMakeFiles/TrabalhoED.dir/FilaNavios.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TrabalhoED.dir/FilaNavios.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/FilaNavios.c > CMakeFiles/TrabalhoED.dir/FilaNavios.c.i

CMakeFiles/TrabalhoED.dir/FilaNavios.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TrabalhoED.dir/FilaNavios.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/FilaNavios.c -o CMakeFiles/TrabalhoED.dir/FilaNavios.c.s

CMakeFiles/TrabalhoED.dir/pilhaContainers.c.o: CMakeFiles/TrabalhoED.dir/flags.make
CMakeFiles/TrabalhoED.dir/pilhaContainers.c.o: ../pilhaContainers.c
CMakeFiles/TrabalhoED.dir/pilhaContainers.c.o: CMakeFiles/TrabalhoED.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/TrabalhoED.dir/pilhaContainers.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/TrabalhoED.dir/pilhaContainers.c.o -MF CMakeFiles/TrabalhoED.dir/pilhaContainers.c.o.d -o CMakeFiles/TrabalhoED.dir/pilhaContainers.c.o -c /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/pilhaContainers.c

CMakeFiles/TrabalhoED.dir/pilhaContainers.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TrabalhoED.dir/pilhaContainers.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/pilhaContainers.c > CMakeFiles/TrabalhoED.dir/pilhaContainers.c.i

CMakeFiles/TrabalhoED.dir/pilhaContainers.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TrabalhoED.dir/pilhaContainers.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/pilhaContainers.c -o CMakeFiles/TrabalhoED.dir/pilhaContainers.c.s

CMakeFiles/TrabalhoED.dir/funcoesPorto.c.o: CMakeFiles/TrabalhoED.dir/flags.make
CMakeFiles/TrabalhoED.dir/funcoesPorto.c.o: ../funcoesPorto.c
CMakeFiles/TrabalhoED.dir/funcoesPorto.c.o: CMakeFiles/TrabalhoED.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/TrabalhoED.dir/funcoesPorto.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/TrabalhoED.dir/funcoesPorto.c.o -MF CMakeFiles/TrabalhoED.dir/funcoesPorto.c.o.d -o CMakeFiles/TrabalhoED.dir/funcoesPorto.c.o -c /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/funcoesPorto.c

CMakeFiles/TrabalhoED.dir/funcoesPorto.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TrabalhoED.dir/funcoesPorto.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/funcoesPorto.c > CMakeFiles/TrabalhoED.dir/funcoesPorto.c.i

CMakeFiles/TrabalhoED.dir/funcoesPorto.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TrabalhoED.dir/funcoesPorto.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/funcoesPorto.c -o CMakeFiles/TrabalhoED.dir/funcoesPorto.c.s

# Object files for target TrabalhoED
TrabalhoED_OBJECTS = \
"CMakeFiles/TrabalhoED.dir/main.c.o" \
"CMakeFiles/TrabalhoED.dir/FilaNavios.c.o" \
"CMakeFiles/TrabalhoED.dir/pilhaContainers.c.o" \
"CMakeFiles/TrabalhoED.dir/funcoesPorto.c.o"

# External object files for target TrabalhoED
TrabalhoED_EXTERNAL_OBJECTS =

TrabalhoED: CMakeFiles/TrabalhoED.dir/main.c.o
TrabalhoED: CMakeFiles/TrabalhoED.dir/FilaNavios.c.o
TrabalhoED: CMakeFiles/TrabalhoED.dir/pilhaContainers.c.o
TrabalhoED: CMakeFiles/TrabalhoED.dir/funcoesPorto.c.o
TrabalhoED: CMakeFiles/TrabalhoED.dir/build.make
TrabalhoED: CMakeFiles/TrabalhoED.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable TrabalhoED"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TrabalhoED.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TrabalhoED.dir/build: TrabalhoED
.PHONY : CMakeFiles/TrabalhoED.dir/build

CMakeFiles/TrabalhoED.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TrabalhoED.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TrabalhoED.dir/clean

CMakeFiles/TrabalhoED.dir/depend:
	cd /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/cmake-build-debug /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/cmake-build-debug /mnt/c/Users/higor/CLionProjects/TrabalhoEDaa/cmake-build-debug/CMakeFiles/TrabalhoED.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TrabalhoED.dir/depend

