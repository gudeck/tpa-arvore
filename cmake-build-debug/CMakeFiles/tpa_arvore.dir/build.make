# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\guzuc\Desktop\dev_c_cpp\CLion\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\guzuc\Desktop\dev_c_cpp\CLion\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\guzuc\CLionProjects\tpa-arvore

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\guzuc\CLionProjects\tpa-arvore\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/tpa_arvore.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tpa_arvore.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tpa_arvore.dir/flags.make

CMakeFiles/tpa_arvore.dir/src/main.c.obj: CMakeFiles/tpa_arvore.dir/flags.make
CMakeFiles/tpa_arvore.dir/src/main.c.obj: ../src/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\guzuc\CLionProjects\tpa-arvore\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/tpa_arvore.dir/src/main.c.obj"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\tpa_arvore.dir\src\main.c.obj   -c C:\Users\guzuc\CLionProjects\tpa-arvore\src\main.c

CMakeFiles/tpa_arvore.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tpa_arvore.dir/src/main.c.i"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\guzuc\CLionProjects\tpa-arvore\src\main.c > CMakeFiles\tpa_arvore.dir\src\main.c.i

CMakeFiles/tpa_arvore.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tpa_arvore.dir/src/main.c.s"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\guzuc\CLionProjects\tpa-arvore\src\main.c -o CMakeFiles\tpa_arvore.dir\src\main.c.s

CMakeFiles/tpa_arvore.dir/src/cliente.c.obj: CMakeFiles/tpa_arvore.dir/flags.make
CMakeFiles/tpa_arvore.dir/src/cliente.c.obj: ../src/cliente.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\guzuc\CLionProjects\tpa-arvore\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/tpa_arvore.dir/src/cliente.c.obj"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\tpa_arvore.dir\src\cliente.c.obj   -c C:\Users\guzuc\CLionProjects\tpa-arvore\src\cliente.c

CMakeFiles/tpa_arvore.dir/src/cliente.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tpa_arvore.dir/src/cliente.c.i"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\guzuc\CLionProjects\tpa-arvore\src\cliente.c > CMakeFiles\tpa_arvore.dir\src\cliente.c.i

CMakeFiles/tpa_arvore.dir/src/cliente.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tpa_arvore.dir/src/cliente.c.s"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\guzuc\CLionProjects\tpa-arvore\src\cliente.c -o CMakeFiles\tpa_arvore.dir\src\cliente.c.s

CMakeFiles/tpa_arvore.dir/src/arvoreFechada.c.obj: CMakeFiles/tpa_arvore.dir/flags.make
CMakeFiles/tpa_arvore.dir/src/arvoreFechada.c.obj: ../src/arvoreFechada.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\guzuc\CLionProjects\tpa-arvore\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/tpa_arvore.dir/src/arvoreFechada.c.obj"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\tpa_arvore.dir\src\arvoreFechada.c.obj   -c C:\Users\guzuc\CLionProjects\tpa-arvore\src\arvoreFechada.c

CMakeFiles/tpa_arvore.dir/src/arvoreFechada.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tpa_arvore.dir/src/arvoreFechada.c.i"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\guzuc\CLionProjects\tpa-arvore\src\arvoreFechada.c > CMakeFiles\tpa_arvore.dir\src\arvoreFechada.c.i

CMakeFiles/tpa_arvore.dir/src/arvoreFechada.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tpa_arvore.dir/src/arvoreFechada.c.s"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\guzuc\CLionProjects\tpa-arvore\src\arvoreFechada.c -o CMakeFiles\tpa_arvore.dir\src\arvoreFechada.c.s

CMakeFiles/tpa_arvore.dir/src/arvoreAberta.c.obj: CMakeFiles/tpa_arvore.dir/flags.make
CMakeFiles/tpa_arvore.dir/src/arvoreAberta.c.obj: ../src/arvoreAberta.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\guzuc\CLionProjects\tpa-arvore\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/tpa_arvore.dir/src/arvoreAberta.c.obj"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\tpa_arvore.dir\src\arvoreAberta.c.obj   -c C:\Users\guzuc\CLionProjects\tpa-arvore\src\arvoreAberta.c

CMakeFiles/tpa_arvore.dir/src/arvoreAberta.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tpa_arvore.dir/src/arvoreAberta.c.i"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\guzuc\CLionProjects\tpa-arvore\src\arvoreAberta.c > CMakeFiles\tpa_arvore.dir\src\arvoreAberta.c.i

CMakeFiles/tpa_arvore.dir/src/arvoreAberta.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tpa_arvore.dir/src/arvoreAberta.c.s"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\guzuc\CLionProjects\tpa-arvore\src\arvoreAberta.c -o CMakeFiles\tpa_arvore.dir\src\arvoreAberta.c.s

CMakeFiles/tpa_arvore.dir/src/arvore.c.obj: CMakeFiles/tpa_arvore.dir/flags.make
CMakeFiles/tpa_arvore.dir/src/arvore.c.obj: ../src/arvore.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\guzuc\CLionProjects\tpa-arvore\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/tpa_arvore.dir/src/arvore.c.obj"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\tpa_arvore.dir\src\arvore.c.obj   -c C:\Users\guzuc\CLionProjects\tpa-arvore\src\arvore.c

CMakeFiles/tpa_arvore.dir/src/arvore.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tpa_arvore.dir/src/arvore.c.i"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\guzuc\CLionProjects\tpa-arvore\src\arvore.c > CMakeFiles\tpa_arvore.dir\src\arvore.c.i

CMakeFiles/tpa_arvore.dir/src/arvore.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tpa_arvore.dir/src/arvore.c.s"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\guzuc\CLionProjects\tpa-arvore\src\arvore.c -o CMakeFiles\tpa_arvore.dir\src\arvore.c.s

CMakeFiles/tpa_arvore.dir/src/hash.c.obj: CMakeFiles/tpa_arvore.dir/flags.make
CMakeFiles/tpa_arvore.dir/src/hash.c.obj: ../src/hash.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\guzuc\CLionProjects\tpa-arvore\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/tpa_arvore.dir/src/hash.c.obj"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\tpa_arvore.dir\src\hash.c.obj   -c C:\Users\guzuc\CLionProjects\tpa-arvore\src\hash.c

CMakeFiles/tpa_arvore.dir/src/hash.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tpa_arvore.dir/src/hash.c.i"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\guzuc\CLionProjects\tpa-arvore\src\hash.c > CMakeFiles\tpa_arvore.dir\src\hash.c.i

CMakeFiles/tpa_arvore.dir/src/hash.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tpa_arvore.dir/src/hash.c.s"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\guzuc\CLionProjects\tpa-arvore\src\hash.c -o CMakeFiles\tpa_arvore.dir\src\hash.c.s

CMakeFiles/tpa_arvore.dir/src/menu.c.obj: CMakeFiles/tpa_arvore.dir/flags.make
CMakeFiles/tpa_arvore.dir/src/menu.c.obj: ../src/menu.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\guzuc\CLionProjects\tpa-arvore\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/tpa_arvore.dir/src/menu.c.obj"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\tpa_arvore.dir\src\menu.c.obj   -c C:\Users\guzuc\CLionProjects\tpa-arvore\src\menu.c

CMakeFiles/tpa_arvore.dir/src/menu.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tpa_arvore.dir/src/menu.c.i"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\guzuc\CLionProjects\tpa-arvore\src\menu.c > CMakeFiles\tpa_arvore.dir\src\menu.c.i

CMakeFiles/tpa_arvore.dir/src/menu.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tpa_arvore.dir/src/menu.c.s"
	C:\Users\guzuc\Desktop\dev_c_cpp\MiniGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\guzuc\CLionProjects\tpa-arvore\src\menu.c -o CMakeFiles\tpa_arvore.dir\src\menu.c.s

# Object files for target tpa_arvore
tpa_arvore_OBJECTS = \
"CMakeFiles/tpa_arvore.dir/src/main.c.obj" \
"CMakeFiles/tpa_arvore.dir/src/cliente.c.obj" \
"CMakeFiles/tpa_arvore.dir/src/arvoreFechada.c.obj" \
"CMakeFiles/tpa_arvore.dir/src/arvoreAberta.c.obj" \
"CMakeFiles/tpa_arvore.dir/src/arvore.c.obj" \
"CMakeFiles/tpa_arvore.dir/src/hash.c.obj" \
"CMakeFiles/tpa_arvore.dir/src/menu.c.obj"

# External object files for target tpa_arvore
tpa_arvore_EXTERNAL_OBJECTS =

tpa_arvore.exe: CMakeFiles/tpa_arvore.dir/src/main.c.obj
tpa_arvore.exe: CMakeFiles/tpa_arvore.dir/src/cliente.c.obj
tpa_arvore.exe: CMakeFiles/tpa_arvore.dir/src/arvoreFechada.c.obj
tpa_arvore.exe: CMakeFiles/tpa_arvore.dir/src/arvoreAberta.c.obj
tpa_arvore.exe: CMakeFiles/tpa_arvore.dir/src/arvore.c.obj
tpa_arvore.exe: CMakeFiles/tpa_arvore.dir/src/hash.c.obj
tpa_arvore.exe: CMakeFiles/tpa_arvore.dir/src/menu.c.obj
tpa_arvore.exe: CMakeFiles/tpa_arvore.dir/build.make
tpa_arvore.exe: CMakeFiles/tpa_arvore.dir/linklibs.rsp
tpa_arvore.exe: CMakeFiles/tpa_arvore.dir/objects1.rsp
tpa_arvore.exe: CMakeFiles/tpa_arvore.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\guzuc\CLionProjects\tpa-arvore\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable tpa_arvore.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\tpa_arvore.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tpa_arvore.dir/build: tpa_arvore.exe

.PHONY : CMakeFiles/tpa_arvore.dir/build

CMakeFiles/tpa_arvore.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\tpa_arvore.dir\cmake_clean.cmake
.PHONY : CMakeFiles/tpa_arvore.dir/clean

CMakeFiles/tpa_arvore.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\guzuc\CLionProjects\tpa-arvore C:\Users\guzuc\CLionProjects\tpa-arvore C:\Users\guzuc\CLionProjects\tpa-arvore\cmake-build-debug C:\Users\guzuc\CLionProjects\tpa-arvore\cmake-build-debug C:\Users\guzuc\CLionProjects\tpa-arvore\cmake-build-debug\CMakeFiles\tpa_arvore.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tpa_arvore.dir/depend

