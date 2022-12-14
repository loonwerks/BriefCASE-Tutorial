# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build

# Utility rule file for hacl-star.

# Include the progress variables for this target.
include system/crypto/CMakeFiles/hacl-star.dir/progress.make

system/crypto/CMakeFiles/hacl-star: system/crypto/CMakeFiles/hacl-star-complete


system/crypto/CMakeFiles/hacl-star-complete: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-install
system/crypto/CMakeFiles/hacl-star-complete: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-mkdir
system/crypto/CMakeFiles/hacl-star-complete: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-download
system/crypto/CMakeFiles/hacl-star-complete: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-update
system/crypto/CMakeFiles/hacl-star-complete: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-patch
system/crypto/CMakeFiles/hacl-star-complete: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-configure
system/crypto/CMakeFiles/hacl-star-complete: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-build
system/crypto/CMakeFiles/hacl-star-complete: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'hacl-star'"
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto && /usr/bin/cmake -E make_directory /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/CMakeFiles
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto && /usr/bin/cmake -E touch /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/CMakeFiles/hacl-star-complete
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto && /usr/bin/cmake -E touch /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-done

system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-install: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No install step for 'hacl-star'"
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-build && /usr/bin/cmake -E echo_append
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-build && /usr/bin/cmake -E touch /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-install

system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Creating directories for 'hacl-star'"
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto && /usr/bin/cmake -E make_directory /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto && /usr/bin/cmake -E make_directory /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-build
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto && /usr/bin/cmake -E make_directory /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto && /usr/bin/cmake -E make_directory /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/tmp
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto && /usr/bin/cmake -E make_directory /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-stamp
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto && /usr/bin/cmake -E make_directory /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto && /usr/bin/cmake -E make_directory /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-stamp
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto && /usr/bin/cmake -E touch /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-mkdir

system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-download: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-gitinfo.txt
system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-download: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'hacl-star'"
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto && /usr/bin/cmake -P /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/tmp/hacl-star-gitclone.cmake
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto && /usr/bin/cmake -E touch /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-download

system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-update: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Performing update step for 'hacl-star'"
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star && /usr/bin/cmake -P /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/tmp/hacl-star-gitupdate.cmake

system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-patch: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "No patch step for 'hacl-star'"
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto && /usr/bin/cmake -E echo_append
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto && /usr/bin/cmake -E touch /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-patch

system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-configure: system/crypto/hacl-star-prefix/tmp/hacl-star-cfgcmd.txt
system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-configure: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No configure step for 'hacl-star'"
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-build && /usr/bin/cmake -E echo_append
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-build && /usr/bin/cmake -E touch /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-configure

system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-build: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No build step for 'hacl-star'"
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-build && /usr/bin/cmake -E echo_append
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-build && /usr/bin/cmake -E touch /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-build

hacl-star: system/crypto/CMakeFiles/hacl-star
hacl-star: system/crypto/CMakeFiles/hacl-star-complete
hacl-star: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-install
hacl-star: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-mkdir
hacl-star: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-download
hacl-star: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-update
hacl-star: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-patch
hacl-star: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-configure
hacl-star: system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-build
hacl-star: system/crypto/CMakeFiles/hacl-star.dir/build.make

.PHONY : hacl-star

# Rule to build all files generated by this target.
system/crypto/CMakeFiles/hacl-star.dir/build: hacl-star

.PHONY : system/crypto/CMakeFiles/hacl-star.dir/build

system/crypto/CMakeFiles/hacl-star.dir/clean:
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto && $(CMAKE_COMMAND) -P CMakeFiles/hacl-star.dir/cmake_clean.cmake
.PHONY : system/crypto/CMakeFiles/hacl-star.dir/clean

system/crypto/CMakeFiles/hacl-star.dir/depend:
	cd /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/system/crypto /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto /home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/CMakeFiles/hacl-star.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : system/crypto/CMakeFiles/hacl-star.dir/depend

