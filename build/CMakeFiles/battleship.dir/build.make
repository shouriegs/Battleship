# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ecn/ecn_arpro/Battleship

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ecn/ecn_arpro/Battleship/build

# Include any dependencies generated for this target.
include CMakeFiles/battleship.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/battleship.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/battleship.dir/flags.make

CMakeFiles/battleship.dir/battleshipplayer.cpp.o: CMakeFiles/battleship.dir/flags.make
CMakeFiles/battleship.dir/battleshipplayer.cpp.o: ../battleshipplayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ecn/ecn_arpro/Battleship/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/battleship.dir/battleshipplayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/battleship.dir/battleshipplayer.cpp.o -c /home/ecn/ecn_arpro/Battleship/battleshipplayer.cpp

CMakeFiles/battleship.dir/battleshipplayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/battleship.dir/battleshipplayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ecn/ecn_arpro/Battleship/battleshipplayer.cpp > CMakeFiles/battleship.dir/battleshipplayer.cpp.i

CMakeFiles/battleship.dir/battleshipplayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/battleship.dir/battleshipplayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ecn/ecn_arpro/Battleship/battleshipplayer.cpp -o CMakeFiles/battleship.dir/battleshipplayer.cpp.s

CMakeFiles/battleship.dir/vehicle.cpp.o: CMakeFiles/battleship.dir/flags.make
CMakeFiles/battleship.dir/vehicle.cpp.o: ../vehicle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ecn/ecn_arpro/Battleship/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/battleship.dir/vehicle.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/battleship.dir/vehicle.cpp.o -c /home/ecn/ecn_arpro/Battleship/vehicle.cpp

CMakeFiles/battleship.dir/vehicle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/battleship.dir/vehicle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ecn/ecn_arpro/Battleship/vehicle.cpp > CMakeFiles/battleship.dir/vehicle.cpp.i

CMakeFiles/battleship.dir/vehicle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/battleship.dir/vehicle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ecn/ecn_arpro/Battleship/vehicle.cpp -o CMakeFiles/battleship.dir/vehicle.cpp.s

CMakeFiles/battleship.dir/battleship.cpp.o: CMakeFiles/battleship.dir/flags.make
CMakeFiles/battleship.dir/battleship.cpp.o: ../battleship.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ecn/ecn_arpro/Battleship/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/battleship.dir/battleship.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/battleship.dir/battleship.cpp.o -c /home/ecn/ecn_arpro/Battleship/battleship.cpp

CMakeFiles/battleship.dir/battleship.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/battleship.dir/battleship.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ecn/ecn_arpro/Battleship/battleship.cpp > CMakeFiles/battleship.dir/battleship.cpp.i

CMakeFiles/battleship.dir/battleship.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/battleship.dir/battleship.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ecn/ecn_arpro/Battleship/battleship.cpp -o CMakeFiles/battleship.dir/battleship.cpp.s

# Object files for target battleship
battleship_OBJECTS = \
"CMakeFiles/battleship.dir/battleshipplayer.cpp.o" \
"CMakeFiles/battleship.dir/vehicle.cpp.o" \
"CMakeFiles/battleship.dir/battleship.cpp.o"

# External object files for target battleship
battleship_EXTERNAL_OBJECTS =

battleship: CMakeFiles/battleship.dir/battleshipplayer.cpp.o
battleship: CMakeFiles/battleship.dir/vehicle.cpp.o
battleship: CMakeFiles/battleship.dir/battleship.cpp.o
battleship: CMakeFiles/battleship.dir/build.make
battleship: CMakeFiles/battleship.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ecn/ecn_arpro/Battleship/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable battleship"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/battleship.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/battleship.dir/build: battleship

.PHONY : CMakeFiles/battleship.dir/build

CMakeFiles/battleship.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/battleship.dir/cmake_clean.cmake
.PHONY : CMakeFiles/battleship.dir/clean

CMakeFiles/battleship.dir/depend:
	cd /home/ecn/ecn_arpro/Battleship/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ecn/ecn_arpro/Battleship /home/ecn/ecn_arpro/Battleship /home/ecn/ecn_arpro/Battleship/build /home/ecn/ecn_arpro/Battleship/build /home/ecn/ecn_arpro/Battleship/build/CMakeFiles/battleship.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/battleship.dir/depend

