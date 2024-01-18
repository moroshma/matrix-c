cmake_minimum_required(VERSION 3.27)
project(matrix C)

set(CMAKE_C_STANDARD 11)

add_executable(matrix
        s21_matrix.c
        s21_matrix.h
        tests/s21_calc_complements_test.c
        tests/s21_create_test.c
        tests/s21_determinant_test.c
        tests/s21_eq_test.c
        tests/s21_inverse_test.c
        tests/s21_matrix_gather_test.c
        tests/s21_mult_matrix_test.c
        tests/s21_mult_number_test.c
        tests/s21_sub_test.c
        tests/s21_sum_test.c
        tests/s21_transpose_test.c
        s21_arithmetic.c
        s21_converter.c
        s21_control.c
)
target_link_libraries(matrix check pthread m)