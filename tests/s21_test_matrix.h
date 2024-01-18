#ifndef SRC_UNIT_TESTS_S21_MATRIX_H_
#define SRC_UNIT_TESTS_S21_MATRIX_H_

#include "../s21_matrix.h"

Suite *suite_matrix_gather();
Suite *suite_create_matrix();
Suite *suite_transpose_matrix();
Suite *suite_eq_matrix();
Suite *suite_sum_matrix();
Suite *suite_sub_matrix();
Suite *suite_mult_matrix();
Suite *suite_mult_number_matrix();

Suite *suite_calc_complements();
Suite *suite_determinant();
Suite *suite_inverse_matrix();
double get_rand(double min, double max);

#endif // SRC_UNIT_TESTS_S21_MATRIX_H_