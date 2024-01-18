//
// Created by moroshma on 12/28/23.
//

#include "tests/s21_test_matrix.h"

void run_tests() {
  Suite *suite = NULL;
  SRunner *sRunner = NULL;

  Suite *suite_array[] = {suite_create_matrix(),    suite_eq_matrix(),
                          suite_sub_matrix(),       suite_sum_matrix(),
                          suite_mult_matrix(),      suite_mult_number_matrix(),
                          suite_transpose_matrix(), suite_calc_complements(),
                          suite_determinant(),      suite_inverse_matrix(),
                          suite_matrix_gather()};

  int count_of_tests = sizeof(suite_array) / sizeof(Suite *);
  for (int i = 0; i < count_of_tests; i++) {
    suite = suite_array[i];
    sRunner = srunner_create(suite);
    srunner_set_fork_status(sRunner, CK_NOFORK);

    srunner_run_all(sRunner, CK_NORMAL);
    srunner_free(sRunner);

    suite = NULL;
    sRunner = NULL;
  }
}

int main() { run_tests(); }