# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 4.0

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/25gaddy/Desktop/ADV CS III/Projects/Real-Time API Capstone Project"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/25gaddy/Desktop/ADV CS III/Projects/Real-Time API Capstone Project"

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake cache editor..."
	/opt/homebrew/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake to regenerate build system..."
	/opt/homebrew/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start "/Users/25gaddy/Desktop/ADV CS III/Projects/Real-Time API Capstone Project/CMakeFiles" "/Users/25gaddy/Desktop/ADV CS III/Projects/Real-Time API Capstone Project//CMakeFiles/progress.marks"
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start "/Users/25gaddy/Desktop/ADV CS III/Projects/Real-Time API Capstone Project/CMakeFiles" 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named weather_market_app

# Build rule for target.
weather_market_app: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 weather_market_app
.PHONY : weather_market_app

# fast build rule for target.
weather_market_app/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/weather_market_app.dir/build.make CMakeFiles/weather_market_app.dir/build
.PHONY : weather_market_app/fast

src/ConfigManager.o: src/ConfigManager.cpp.o
.PHONY : src/ConfigManager.o

# target to build an object file
src/ConfigManager.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/weather_market_app.dir/build.make CMakeFiles/weather_market_app.dir/src/ConfigManager.cpp.o
.PHONY : src/ConfigManager.cpp.o

src/ConfigManager.i: src/ConfigManager.cpp.i
.PHONY : src/ConfigManager.i

# target to preprocess a source file
src/ConfigManager.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/weather_market_app.dir/build.make CMakeFiles/weather_market_app.dir/src/ConfigManager.cpp.i
.PHONY : src/ConfigManager.cpp.i

src/ConfigManager.s: src/ConfigManager.cpp.s
.PHONY : src/ConfigManager.s

# target to generate assembly for a file
src/ConfigManager.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/weather_market_app.dir/build.make CMakeFiles/weather_market_app.dir/src/ConfigManager.cpp.s
.PHONY : src/ConfigManager.cpp.s

src/main.o: src/main.cpp.o
.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/weather_market_app.dir/build.make CMakeFiles/weather_market_app.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/weather_market_app.dir/build.make CMakeFiles/weather_market_app.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/weather_market_app.dir/build.make CMakeFiles/weather_market_app.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/weatherAPI.o: src/weatherAPI.cpp.o
.PHONY : src/weatherAPI.o

# target to build an object file
src/weatherAPI.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/weather_market_app.dir/build.make CMakeFiles/weather_market_app.dir/src/weatherAPI.cpp.o
.PHONY : src/weatherAPI.cpp.o

src/weatherAPI.i: src/weatherAPI.cpp.i
.PHONY : src/weatherAPI.i

# target to preprocess a source file
src/weatherAPI.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/weather_market_app.dir/build.make CMakeFiles/weather_market_app.dir/src/weatherAPI.cpp.i
.PHONY : src/weatherAPI.cpp.i

src/weatherAPI.s: src/weatherAPI.cpp.s
.PHONY : src/weatherAPI.s

# target to generate assembly for a file
src/weatherAPI.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/weather_market_app.dir/build.make CMakeFiles/weather_market_app.dir/src/weatherAPI.cpp.s
.PHONY : src/weatherAPI.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... weather_market_app"
	@echo "... src/ConfigManager.o"
	@echo "... src/ConfigManager.i"
	@echo "... src/ConfigManager.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/weatherAPI.o"
	@echo "... src/weatherAPI.i"
	@echo "... src/weatherAPI.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

