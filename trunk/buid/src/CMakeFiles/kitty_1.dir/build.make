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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /net/i/smaghraoui/projets5-3715/trunk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /net/i/smaghraoui/projets5-3715/trunk/buid

# Include any dependencies generated for this target.
include src/CMakeFiles/kitty_1.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/kitty_1.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/kitty_1.dir/flags.make

src/CMakeFiles/kitty_1.dir/board.c.o: src/CMakeFiles/kitty_1.dir/flags.make
src/CMakeFiles/kitty_1.dir/board.c.o: ../src/board.c
	$(CMAKE_COMMAND) -E cmake_progress_report /net/i/smaghraoui/projets5-3715/trunk/buid/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/CMakeFiles/kitty_1.dir/board.c.o"
	cd /net/i/smaghraoui/projets5-3715/trunk/buid/src && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/kitty_1.dir/board.c.o   -c /net/i/smaghraoui/projets5-3715/trunk/src/board.c

src/CMakeFiles/kitty_1.dir/board.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/kitty_1.dir/board.c.i"
	cd /net/i/smaghraoui/projets5-3715/trunk/buid/src && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /net/i/smaghraoui/projets5-3715/trunk/src/board.c > CMakeFiles/kitty_1.dir/board.c.i

src/CMakeFiles/kitty_1.dir/board.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/kitty_1.dir/board.c.s"
	cd /net/i/smaghraoui/projets5-3715/trunk/buid/src && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /net/i/smaghraoui/projets5-3715/trunk/src/board.c -o CMakeFiles/kitty_1.dir/board.c.s

src/CMakeFiles/kitty_1.dir/board.c.o.requires:
.PHONY : src/CMakeFiles/kitty_1.dir/board.c.o.requires

src/CMakeFiles/kitty_1.dir/board.c.o.provides: src/CMakeFiles/kitty_1.dir/board.c.o.requires
	$(MAKE) -f src/CMakeFiles/kitty_1.dir/build.make src/CMakeFiles/kitty_1.dir/board.c.o.provides.build
.PHONY : src/CMakeFiles/kitty_1.dir/board.c.o.provides

src/CMakeFiles/kitty_1.dir/board.c.o.provides.build: src/CMakeFiles/kitty_1.dir/board.c.o

src/CMakeFiles/kitty_1.dir/game.c.o: src/CMakeFiles/kitty_1.dir/flags.make
src/CMakeFiles/kitty_1.dir/game.c.o: ../src/game.c
	$(CMAKE_COMMAND) -E cmake_progress_report /net/i/smaghraoui/projets5-3715/trunk/buid/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/CMakeFiles/kitty_1.dir/game.c.o"
	cd /net/i/smaghraoui/projets5-3715/trunk/buid/src && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/kitty_1.dir/game.c.o   -c /net/i/smaghraoui/projets5-3715/trunk/src/game.c

src/CMakeFiles/kitty_1.dir/game.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/kitty_1.dir/game.c.i"
	cd /net/i/smaghraoui/projets5-3715/trunk/buid/src && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /net/i/smaghraoui/projets5-3715/trunk/src/game.c > CMakeFiles/kitty_1.dir/game.c.i

src/CMakeFiles/kitty_1.dir/game.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/kitty_1.dir/game.c.s"
	cd /net/i/smaghraoui/projets5-3715/trunk/buid/src && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /net/i/smaghraoui/projets5-3715/trunk/src/game.c -o CMakeFiles/kitty_1.dir/game.c.s

src/CMakeFiles/kitty_1.dir/game.c.o.requires:
.PHONY : src/CMakeFiles/kitty_1.dir/game.c.o.requires

src/CMakeFiles/kitty_1.dir/game.c.o.provides: src/CMakeFiles/kitty_1.dir/game.c.o.requires
	$(MAKE) -f src/CMakeFiles/kitty_1.dir/build.make src/CMakeFiles/kitty_1.dir/game.c.o.provides.build
.PHONY : src/CMakeFiles/kitty_1.dir/game.c.o.provides

src/CMakeFiles/kitty_1.dir/game.c.o.provides.build: src/CMakeFiles/kitty_1.dir/game.c.o

src/CMakeFiles/kitty_1.dir/cards.c.o: src/CMakeFiles/kitty_1.dir/flags.make
src/CMakeFiles/kitty_1.dir/cards.c.o: ../src/cards.c
	$(CMAKE_COMMAND) -E cmake_progress_report /net/i/smaghraoui/projets5-3715/trunk/buid/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/CMakeFiles/kitty_1.dir/cards.c.o"
	cd /net/i/smaghraoui/projets5-3715/trunk/buid/src && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/kitty_1.dir/cards.c.o   -c /net/i/smaghraoui/projets5-3715/trunk/src/cards.c

src/CMakeFiles/kitty_1.dir/cards.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/kitty_1.dir/cards.c.i"
	cd /net/i/smaghraoui/projets5-3715/trunk/buid/src && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /net/i/smaghraoui/projets5-3715/trunk/src/cards.c > CMakeFiles/kitty_1.dir/cards.c.i

src/CMakeFiles/kitty_1.dir/cards.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/kitty_1.dir/cards.c.s"
	cd /net/i/smaghraoui/projets5-3715/trunk/buid/src && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /net/i/smaghraoui/projets5-3715/trunk/src/cards.c -o CMakeFiles/kitty_1.dir/cards.c.s

src/CMakeFiles/kitty_1.dir/cards.c.o.requires:
.PHONY : src/CMakeFiles/kitty_1.dir/cards.c.o.requires

src/CMakeFiles/kitty_1.dir/cards.c.o.provides: src/CMakeFiles/kitty_1.dir/cards.c.o.requires
	$(MAKE) -f src/CMakeFiles/kitty_1.dir/build.make src/CMakeFiles/kitty_1.dir/cards.c.o.provides.build
.PHONY : src/CMakeFiles/kitty_1.dir/cards.c.o.provides

src/CMakeFiles/kitty_1.dir/cards.c.o.provides.build: src/CMakeFiles/kitty_1.dir/cards.c.o

src/CMakeFiles/kitty_1.dir/deck.c.o: src/CMakeFiles/kitty_1.dir/flags.make
src/CMakeFiles/kitty_1.dir/deck.c.o: ../src/deck.c
	$(CMAKE_COMMAND) -E cmake_progress_report /net/i/smaghraoui/projets5-3715/trunk/buid/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/CMakeFiles/kitty_1.dir/deck.c.o"
	cd /net/i/smaghraoui/projets5-3715/trunk/buid/src && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/kitty_1.dir/deck.c.o   -c /net/i/smaghraoui/projets5-3715/trunk/src/deck.c

src/CMakeFiles/kitty_1.dir/deck.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/kitty_1.dir/deck.c.i"
	cd /net/i/smaghraoui/projets5-3715/trunk/buid/src && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /net/i/smaghraoui/projets5-3715/trunk/src/deck.c > CMakeFiles/kitty_1.dir/deck.c.i

src/CMakeFiles/kitty_1.dir/deck.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/kitty_1.dir/deck.c.s"
	cd /net/i/smaghraoui/projets5-3715/trunk/buid/src && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /net/i/smaghraoui/projets5-3715/trunk/src/deck.c -o CMakeFiles/kitty_1.dir/deck.c.s

src/CMakeFiles/kitty_1.dir/deck.c.o.requires:
.PHONY : src/CMakeFiles/kitty_1.dir/deck.c.o.requires

src/CMakeFiles/kitty_1.dir/deck.c.o.provides: src/CMakeFiles/kitty_1.dir/deck.c.o.requires
	$(MAKE) -f src/CMakeFiles/kitty_1.dir/build.make src/CMakeFiles/kitty_1.dir/deck.c.o.provides.build
.PHONY : src/CMakeFiles/kitty_1.dir/deck.c.o.provides

src/CMakeFiles/kitty_1.dir/deck.c.o.provides.build: src/CMakeFiles/kitty_1.dir/deck.c.o

# Object files for target kitty_1
kitty_1_OBJECTS = \
"CMakeFiles/kitty_1.dir/board.c.o" \
"CMakeFiles/kitty_1.dir/game.c.o" \
"CMakeFiles/kitty_1.dir/cards.c.o" \
"CMakeFiles/kitty_1.dir/deck.c.o"

# External object files for target kitty_1
kitty_1_EXTERNAL_OBJECTS =

src/kitty_1: src/CMakeFiles/kitty_1.dir/board.c.o
src/kitty_1: src/CMakeFiles/kitty_1.dir/game.c.o
src/kitty_1: src/CMakeFiles/kitty_1.dir/cards.c.o
src/kitty_1: src/CMakeFiles/kitty_1.dir/deck.c.o
src/kitty_1: src/CMakeFiles/kitty_1.dir/build.make
src/kitty_1: src/CMakeFiles/kitty_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable kitty_1"
	cd /net/i/smaghraoui/projets5-3715/trunk/buid/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kitty_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/kitty_1.dir/build: src/kitty_1
.PHONY : src/CMakeFiles/kitty_1.dir/build

src/CMakeFiles/kitty_1.dir/requires: src/CMakeFiles/kitty_1.dir/board.c.o.requires
src/CMakeFiles/kitty_1.dir/requires: src/CMakeFiles/kitty_1.dir/game.c.o.requires
src/CMakeFiles/kitty_1.dir/requires: src/CMakeFiles/kitty_1.dir/cards.c.o.requires
src/CMakeFiles/kitty_1.dir/requires: src/CMakeFiles/kitty_1.dir/deck.c.o.requires
.PHONY : src/CMakeFiles/kitty_1.dir/requires

src/CMakeFiles/kitty_1.dir/clean:
	cd /net/i/smaghraoui/projets5-3715/trunk/buid/src && $(CMAKE_COMMAND) -P CMakeFiles/kitty_1.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/kitty_1.dir/clean

src/CMakeFiles/kitty_1.dir/depend:
	cd /net/i/smaghraoui/projets5-3715/trunk/buid && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /net/i/smaghraoui/projets5-3715/trunk /net/i/smaghraoui/projets5-3715/trunk/src /net/i/smaghraoui/projets5-3715/trunk/buid /net/i/smaghraoui/projets5-3715/trunk/buid/src /net/i/smaghraoui/projets5-3715/trunk/buid/src/CMakeFiles/kitty_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/kitty_1.dir/depend

