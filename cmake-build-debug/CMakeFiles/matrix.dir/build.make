# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /home/moroshma/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/moroshma/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/moroshma/matrix-c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/moroshma/matrix-c/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/matrix.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/matrix.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/matrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/matrix.dir/flags.make

CMakeFiles/matrix.dir/s21_matrix.c.o: CMakeFiles/matrix.dir/flags.make
CMakeFiles/matrix.dir/s21_matrix.c.o: /home/moroshma/matrix-c/s21_matrix.c
CMakeFiles/matrix.dir/s21_matrix.c.o: CMakeFiles/matrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/moroshma/matrix-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/matrix.dir/s21_matrix.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/matrix.dir/s21_matrix.c.o -MF CMakeFiles/matrix.dir/s21_matrix.c.o.d -o CMakeFiles/matrix.dir/s21_matrix.c.o -c /home/moroshma/matrix-c/s21_matrix.c

CMakeFiles/matrix.dir/s21_matrix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/matrix.dir/s21_matrix.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/moroshma/matrix-c/s21_matrix.c > CMakeFiles/matrix.dir/s21_matrix.c.i

CMakeFiles/matrix.dir/s21_matrix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/matrix.dir/s21_matrix.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/moroshma/matrix-c/s21_matrix.c -o CMakeFiles/matrix.dir/s21_matrix.c.s

CMakeFiles/matrix.dir/unit_tests/s21_calc_complements_test.c.o: CMakeFiles/matrix.dir/flags.make
CMakeFiles/matrix.dir/unit_tests/s21_calc_complements_test.c.o: /home/moroshma/matrix-c/unit_tests/s21_calc_complements_test.c
CMakeFiles/matrix.dir/unit_tests/s21_calc_complements_test.c.o: CMakeFiles/matrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/moroshma/matrix-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/matrix.dir/unit_tests/s21_calc_complements_test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/matrix.dir/unit_tests/s21_calc_complements_test.c.o -MF CMakeFiles/matrix.dir/unit_tests/s21_calc_complements_test.c.o.d -o CMakeFiles/matrix.dir/unit_tests/s21_calc_complements_test.c.o -c /home/moroshma/matrix-c/unit_tests/s21_calc_complements_test.c

CMakeFiles/matrix.dir/unit_tests/s21_calc_complements_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/matrix.dir/unit_tests/s21_calc_complements_test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/moroshma/matrix-c/unit_tests/s21_calc_complements_test.c > CMakeFiles/matrix.dir/unit_tests/s21_calc_complements_test.c.i

CMakeFiles/matrix.dir/unit_tests/s21_calc_complements_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/matrix.dir/unit_tests/s21_calc_complements_test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/moroshma/matrix-c/unit_tests/s21_calc_complements_test.c -o CMakeFiles/matrix.dir/unit_tests/s21_calc_complements_test.c.s

CMakeFiles/matrix.dir/unit_tests/s21_create_test.c.o: CMakeFiles/matrix.dir/flags.make
CMakeFiles/matrix.dir/unit_tests/s21_create_test.c.o: /home/moroshma/matrix-c/unit_tests/s21_create_test.c
CMakeFiles/matrix.dir/unit_tests/s21_create_test.c.o: CMakeFiles/matrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/moroshma/matrix-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/matrix.dir/unit_tests/s21_create_test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/matrix.dir/unit_tests/s21_create_test.c.o -MF CMakeFiles/matrix.dir/unit_tests/s21_create_test.c.o.d -o CMakeFiles/matrix.dir/unit_tests/s21_create_test.c.o -c /home/moroshma/matrix-c/unit_tests/s21_create_test.c

CMakeFiles/matrix.dir/unit_tests/s21_create_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/matrix.dir/unit_tests/s21_create_test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/moroshma/matrix-c/unit_tests/s21_create_test.c > CMakeFiles/matrix.dir/unit_tests/s21_create_test.c.i

CMakeFiles/matrix.dir/unit_tests/s21_create_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/matrix.dir/unit_tests/s21_create_test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/moroshma/matrix-c/unit_tests/s21_create_test.c -o CMakeFiles/matrix.dir/unit_tests/s21_create_test.c.s

CMakeFiles/matrix.dir/unit_tests/s21_determinant_test.c.o: CMakeFiles/matrix.dir/flags.make
CMakeFiles/matrix.dir/unit_tests/s21_determinant_test.c.o: /home/moroshma/matrix-c/unit_tests/s21_determinant_test.c
CMakeFiles/matrix.dir/unit_tests/s21_determinant_test.c.o: CMakeFiles/matrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/moroshma/matrix-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/matrix.dir/unit_tests/s21_determinant_test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/matrix.dir/unit_tests/s21_determinant_test.c.o -MF CMakeFiles/matrix.dir/unit_tests/s21_determinant_test.c.o.d -o CMakeFiles/matrix.dir/unit_tests/s21_determinant_test.c.o -c /home/moroshma/matrix-c/unit_tests/s21_determinant_test.c

CMakeFiles/matrix.dir/unit_tests/s21_determinant_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/matrix.dir/unit_tests/s21_determinant_test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/moroshma/matrix-c/unit_tests/s21_determinant_test.c > CMakeFiles/matrix.dir/unit_tests/s21_determinant_test.c.i

CMakeFiles/matrix.dir/unit_tests/s21_determinant_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/matrix.dir/unit_tests/s21_determinant_test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/moroshma/matrix-c/unit_tests/s21_determinant_test.c -o CMakeFiles/matrix.dir/unit_tests/s21_determinant_test.c.s

CMakeFiles/matrix.dir/unit_tests/s21_eq_test.c.o: CMakeFiles/matrix.dir/flags.make
CMakeFiles/matrix.dir/unit_tests/s21_eq_test.c.o: /home/moroshma/matrix-c/unit_tests/s21_eq_test.c
CMakeFiles/matrix.dir/unit_tests/s21_eq_test.c.o: CMakeFiles/matrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/moroshma/matrix-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/matrix.dir/unit_tests/s21_eq_test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/matrix.dir/unit_tests/s21_eq_test.c.o -MF CMakeFiles/matrix.dir/unit_tests/s21_eq_test.c.o.d -o CMakeFiles/matrix.dir/unit_tests/s21_eq_test.c.o -c /home/moroshma/matrix-c/unit_tests/s21_eq_test.c

CMakeFiles/matrix.dir/unit_tests/s21_eq_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/matrix.dir/unit_tests/s21_eq_test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/moroshma/matrix-c/unit_tests/s21_eq_test.c > CMakeFiles/matrix.dir/unit_tests/s21_eq_test.c.i

CMakeFiles/matrix.dir/unit_tests/s21_eq_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/matrix.dir/unit_tests/s21_eq_test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/moroshma/matrix-c/unit_tests/s21_eq_test.c -o CMakeFiles/matrix.dir/unit_tests/s21_eq_test.c.s

CMakeFiles/matrix.dir/unit_tests/s21_inverse_test.c.o: CMakeFiles/matrix.dir/flags.make
CMakeFiles/matrix.dir/unit_tests/s21_inverse_test.c.o: /home/moroshma/matrix-c/unit_tests/s21_inverse_test.c
CMakeFiles/matrix.dir/unit_tests/s21_inverse_test.c.o: CMakeFiles/matrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/moroshma/matrix-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/matrix.dir/unit_tests/s21_inverse_test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/matrix.dir/unit_tests/s21_inverse_test.c.o -MF CMakeFiles/matrix.dir/unit_tests/s21_inverse_test.c.o.d -o CMakeFiles/matrix.dir/unit_tests/s21_inverse_test.c.o -c /home/moroshma/matrix-c/unit_tests/s21_inverse_test.c

CMakeFiles/matrix.dir/unit_tests/s21_inverse_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/matrix.dir/unit_tests/s21_inverse_test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/moroshma/matrix-c/unit_tests/s21_inverse_test.c > CMakeFiles/matrix.dir/unit_tests/s21_inverse_test.c.i

CMakeFiles/matrix.dir/unit_tests/s21_inverse_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/matrix.dir/unit_tests/s21_inverse_test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/moroshma/matrix-c/unit_tests/s21_inverse_test.c -o CMakeFiles/matrix.dir/unit_tests/s21_inverse_test.c.s

CMakeFiles/matrix.dir/unit_tests/s21_matrix_gather.c.o: CMakeFiles/matrix.dir/flags.make
CMakeFiles/matrix.dir/unit_tests/s21_matrix_gather.c.o: /home/moroshma/matrix-c/unit_tests/s21_matrix_gather.c
CMakeFiles/matrix.dir/unit_tests/s21_matrix_gather.c.o: CMakeFiles/matrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/moroshma/matrix-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/matrix.dir/unit_tests/s21_matrix_gather.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/matrix.dir/unit_tests/s21_matrix_gather.c.o -MF CMakeFiles/matrix.dir/unit_tests/s21_matrix_gather.c.o.d -o CMakeFiles/matrix.dir/unit_tests/s21_matrix_gather.c.o -c /home/moroshma/matrix-c/unit_tests/s21_matrix_gather.c

CMakeFiles/matrix.dir/unit_tests/s21_matrix_gather.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/matrix.dir/unit_tests/s21_matrix_gather.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/moroshma/matrix-c/unit_tests/s21_matrix_gather.c > CMakeFiles/matrix.dir/unit_tests/s21_matrix_gather.c.i

CMakeFiles/matrix.dir/unit_tests/s21_matrix_gather.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/matrix.dir/unit_tests/s21_matrix_gather.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/moroshma/matrix-c/unit_tests/s21_matrix_gather.c -o CMakeFiles/matrix.dir/unit_tests/s21_matrix_gather.c.s

CMakeFiles/matrix.dir/unit_tests/s21_mult_matrix_test.c.o: CMakeFiles/matrix.dir/flags.make
CMakeFiles/matrix.dir/unit_tests/s21_mult_matrix_test.c.o: /home/moroshma/matrix-c/unit_tests/s21_mult_matrix_test.c
CMakeFiles/matrix.dir/unit_tests/s21_mult_matrix_test.c.o: CMakeFiles/matrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/moroshma/matrix-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/matrix.dir/unit_tests/s21_mult_matrix_test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/matrix.dir/unit_tests/s21_mult_matrix_test.c.o -MF CMakeFiles/matrix.dir/unit_tests/s21_mult_matrix_test.c.o.d -o CMakeFiles/matrix.dir/unit_tests/s21_mult_matrix_test.c.o -c /home/moroshma/matrix-c/unit_tests/s21_mult_matrix_test.c

CMakeFiles/matrix.dir/unit_tests/s21_mult_matrix_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/matrix.dir/unit_tests/s21_mult_matrix_test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/moroshma/matrix-c/unit_tests/s21_mult_matrix_test.c > CMakeFiles/matrix.dir/unit_tests/s21_mult_matrix_test.c.i

CMakeFiles/matrix.dir/unit_tests/s21_mult_matrix_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/matrix.dir/unit_tests/s21_mult_matrix_test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/moroshma/matrix-c/unit_tests/s21_mult_matrix_test.c -o CMakeFiles/matrix.dir/unit_tests/s21_mult_matrix_test.c.s

CMakeFiles/matrix.dir/unit_tests/s21_mult_number_test.c.o: CMakeFiles/matrix.dir/flags.make
CMakeFiles/matrix.dir/unit_tests/s21_mult_number_test.c.o: /home/moroshma/matrix-c/unit_tests/s21_mult_number_test.c
CMakeFiles/matrix.dir/unit_tests/s21_mult_number_test.c.o: CMakeFiles/matrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/moroshma/matrix-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/matrix.dir/unit_tests/s21_mult_number_test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/matrix.dir/unit_tests/s21_mult_number_test.c.o -MF CMakeFiles/matrix.dir/unit_tests/s21_mult_number_test.c.o.d -o CMakeFiles/matrix.dir/unit_tests/s21_mult_number_test.c.o -c /home/moroshma/matrix-c/unit_tests/s21_mult_number_test.c

CMakeFiles/matrix.dir/unit_tests/s21_mult_number_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/matrix.dir/unit_tests/s21_mult_number_test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/moroshma/matrix-c/unit_tests/s21_mult_number_test.c > CMakeFiles/matrix.dir/unit_tests/s21_mult_number_test.c.i

CMakeFiles/matrix.dir/unit_tests/s21_mult_number_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/matrix.dir/unit_tests/s21_mult_number_test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/moroshma/matrix-c/unit_tests/s21_mult_number_test.c -o CMakeFiles/matrix.dir/unit_tests/s21_mult_number_test.c.s

CMakeFiles/matrix.dir/unit_tests/s21_sub_test.c.o: CMakeFiles/matrix.dir/flags.make
CMakeFiles/matrix.dir/unit_tests/s21_sub_test.c.o: /home/moroshma/matrix-c/unit_tests/s21_sub_test.c
CMakeFiles/matrix.dir/unit_tests/s21_sub_test.c.o: CMakeFiles/matrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/moroshma/matrix-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/matrix.dir/unit_tests/s21_sub_test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/matrix.dir/unit_tests/s21_sub_test.c.o -MF CMakeFiles/matrix.dir/unit_tests/s21_sub_test.c.o.d -o CMakeFiles/matrix.dir/unit_tests/s21_sub_test.c.o -c /home/moroshma/matrix-c/unit_tests/s21_sub_test.c

CMakeFiles/matrix.dir/unit_tests/s21_sub_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/matrix.dir/unit_tests/s21_sub_test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/moroshma/matrix-c/unit_tests/s21_sub_test.c > CMakeFiles/matrix.dir/unit_tests/s21_sub_test.c.i

CMakeFiles/matrix.dir/unit_tests/s21_sub_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/matrix.dir/unit_tests/s21_sub_test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/moroshma/matrix-c/unit_tests/s21_sub_test.c -o CMakeFiles/matrix.dir/unit_tests/s21_sub_test.c.s

CMakeFiles/matrix.dir/unit_tests/s21_sum_test.c.o: CMakeFiles/matrix.dir/flags.make
CMakeFiles/matrix.dir/unit_tests/s21_sum_test.c.o: /home/moroshma/matrix-c/unit_tests/s21_sum_test.c
CMakeFiles/matrix.dir/unit_tests/s21_sum_test.c.o: CMakeFiles/matrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/moroshma/matrix-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/matrix.dir/unit_tests/s21_sum_test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/matrix.dir/unit_tests/s21_sum_test.c.o -MF CMakeFiles/matrix.dir/unit_tests/s21_sum_test.c.o.d -o CMakeFiles/matrix.dir/unit_tests/s21_sum_test.c.o -c /home/moroshma/matrix-c/unit_tests/s21_sum_test.c

CMakeFiles/matrix.dir/unit_tests/s21_sum_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/matrix.dir/unit_tests/s21_sum_test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/moroshma/matrix-c/unit_tests/s21_sum_test.c > CMakeFiles/matrix.dir/unit_tests/s21_sum_test.c.i

CMakeFiles/matrix.dir/unit_tests/s21_sum_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/matrix.dir/unit_tests/s21_sum_test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/moroshma/matrix-c/unit_tests/s21_sum_test.c -o CMakeFiles/matrix.dir/unit_tests/s21_sum_test.c.s

CMakeFiles/matrix.dir/unit_tests/s21_transpose_test.c.o: CMakeFiles/matrix.dir/flags.make
CMakeFiles/matrix.dir/unit_tests/s21_transpose_test.c.o: /home/moroshma/matrix-c/unit_tests/s21_transpose_test.c
CMakeFiles/matrix.dir/unit_tests/s21_transpose_test.c.o: CMakeFiles/matrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/moroshma/matrix-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/matrix.dir/unit_tests/s21_transpose_test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/matrix.dir/unit_tests/s21_transpose_test.c.o -MF CMakeFiles/matrix.dir/unit_tests/s21_transpose_test.c.o.d -o CMakeFiles/matrix.dir/unit_tests/s21_transpose_test.c.o -c /home/moroshma/matrix-c/unit_tests/s21_transpose_test.c

CMakeFiles/matrix.dir/unit_tests/s21_transpose_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/matrix.dir/unit_tests/s21_transpose_test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/moroshma/matrix-c/unit_tests/s21_transpose_test.c > CMakeFiles/matrix.dir/unit_tests/s21_transpose_test.c.i

CMakeFiles/matrix.dir/unit_tests/s21_transpose_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/matrix.dir/unit_tests/s21_transpose_test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/moroshma/matrix-c/unit_tests/s21_transpose_test.c -o CMakeFiles/matrix.dir/unit_tests/s21_transpose_test.c.s

# Object files for target matrix
matrix_OBJECTS = \
"CMakeFiles/matrix.dir/s21_matrix.c.o" \
"CMakeFiles/matrix.dir/unit_tests/s21_calc_complements_test.c.o" \
"CMakeFiles/matrix.dir/unit_tests/s21_create_test.c.o" \
"CMakeFiles/matrix.dir/unit_tests/s21_determinant_test.c.o" \
"CMakeFiles/matrix.dir/unit_tests/s21_eq_test.c.o" \
"CMakeFiles/matrix.dir/unit_tests/s21_inverse_test.c.o" \
"CMakeFiles/matrix.dir/unit_tests/s21_matrix_gather.c.o" \
"CMakeFiles/matrix.dir/unit_tests/s21_mult_matrix_test.c.o" \
"CMakeFiles/matrix.dir/unit_tests/s21_mult_number_test.c.o" \
"CMakeFiles/matrix.dir/unit_tests/s21_sub_test.c.o" \
"CMakeFiles/matrix.dir/unit_tests/s21_sum_test.c.o" \
"CMakeFiles/matrix.dir/unit_tests/s21_transpose_test.c.o"

# External object files for target matrix
matrix_EXTERNAL_OBJECTS =

matrix: CMakeFiles/matrix.dir/s21_matrix.c.o
matrix: CMakeFiles/matrix.dir/unit_tests/s21_calc_complements_test.c.o
matrix: CMakeFiles/matrix.dir/unit_tests/s21_create_test.c.o
matrix: CMakeFiles/matrix.dir/unit_tests/s21_determinant_test.c.o
matrix: CMakeFiles/matrix.dir/unit_tests/s21_eq_test.c.o
matrix: CMakeFiles/matrix.dir/unit_tests/s21_inverse_test.c.o
matrix: CMakeFiles/matrix.dir/unit_tests/s21_matrix_gather.c.o
matrix: CMakeFiles/matrix.dir/unit_tests/s21_mult_matrix_test.c.o
matrix: CMakeFiles/matrix.dir/unit_tests/s21_mult_number_test.c.o
matrix: CMakeFiles/matrix.dir/unit_tests/s21_sub_test.c.o
matrix: CMakeFiles/matrix.dir/unit_tests/s21_sum_test.c.o
matrix: CMakeFiles/matrix.dir/unit_tests/s21_transpose_test.c.o
matrix: CMakeFiles/matrix.dir/build.make
matrix: CMakeFiles/matrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/moroshma/matrix-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking C executable matrix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/matrix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/matrix.dir/build: matrix
.PHONY : CMakeFiles/matrix.dir/build

CMakeFiles/matrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/matrix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/matrix.dir/clean

CMakeFiles/matrix.dir/depend:
	cd /home/moroshma/matrix-c/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/moroshma/matrix-c /home/moroshma/matrix-c /home/moroshma/matrix-c/cmake-build-debug /home/moroshma/matrix-c/cmake-build-debug /home/moroshma/matrix-c/cmake-build-debug/CMakeFiles/matrix.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/matrix.dir/depend

