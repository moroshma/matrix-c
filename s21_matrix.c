//
// Created by moroshma on 12/28/23.
//

#include <malloc.h>
#include <stdlib.h>
#include "unit_tests/s21_test_matrix.h"
bool s21_check_size_matrix(matrix_t *A, matrix_t *B) {
  if (A->rows != B->rows || A->columns != B->columns || A->rows < 1 ||
      A->columns < 1 || B->rows < 1 || B->columns < 1 || !A->matrix ||
      !B->matrix) {
    return false;
  }
  return true;
}

int s21_safe_calloc(int rows, int columns, matrix_t *result) {
  int ret = SUCCESS;
  result->columns = columns;
  result->rows = rows;
  result->matrix = (double **)calloc(rows, sizeof(double **));
  if (!result->matrix) {
    ret = CALLOC_ERROR;
  } else {
    bool fl = true;
    for (int i = 0; i < rows && fl; i++) {
      result->matrix[i] = (double *)calloc(columns, sizeof(double *));
      if (!result->matrix[i]) {
        ret = CALLOC_ERROR;
        fl = false;
      }
    }
  }
  return ret;
}

int s21_create_matrix(int rows, int columns, matrix_t *result) {
  int ret = SUCCESS;
  if (rows <= 0 || columns <= 0) {
    ret = INVALID_MATRIX;
  } else {
    s21_safe_calloc(rows, columns, result);
  }
  return ret;
}

void s21_remove_matrix(matrix_t *A) {
  for (int i = 0; i < A->rows; i++) {
    free(A->matrix[i]);
  }
  free(A->matrix);
}

int s21_eq_matrix(matrix_t *A, matrix_t *B) {
  int ret = SUCCESS_EQ;
  if (!s21_check_size_matrix(A, B)) {
    ret = FAILURE_EQ;
  } else {
    ret = s21_loop_eq_matrix(A, B);
  }
  return ret;
}

int s21_loop_eq_matrix(matrix_t *A, matrix_t *B) {
  int ret = SUCCESS_EQ;
  for (int i = 0; i < A->rows && ret; i++) {
    for (int j = 0; j < A->columns && ret; j++) {
      if (fabs(A->matrix[i][j] - B->matrix[i][j]) > S21_EPS)
        ret = FAILURE_EQ;
    }
  }
  return ret;
}

int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
    if ((A->rows != B->rows || A->columns != B->columns) && ( A->rows > 1 ||
    A->columns > 1 || B->rows > 1 || B->columns > 1)) {
        return CALC_ERROR;
    } else if (A->columns < 1 || A-> rows < 1 || B->rows < 1 || B->columns < 1) {
        return INVALID_MATRIX;
    }
  s21_create_matrix(A->rows, A->columns, result);

  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < A->columns; j++) {
      result->matrix[i][j] = A->matrix[i][j] + B->matrix[i][j];
    }
  }
  return OK;
}

int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  if ((A->rows != B->rows || A->columns != B->columns) && ( A->rows > 1 ||
      A->columns > 1 || B->rows > 1 || B->columns > 1)) {
    return CALC_ERROR;
  } else if (A->columns < 1 || A-> rows < 1 || B->rows < 1 || B->columns < 1) {
      return INVALID_MATRIX;
  }
  s21_create_matrix(A->rows, A->columns, result);
  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < A->columns; j++) {
      result->matrix[i][j] = A->matrix[i][j] - B->matrix[i][j];
    }
  }
  return OK;
}

int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  if (A->rows < 1 || A->columns < 1 || !(A->matrix)) {
    return INVALID_MATRIX;
  }
  s21_create_matrix(A->rows, A->columns, result);
    for (int i = 0; i < A->rows; i++) {
        for (int j = 0; j < A->columns; j++) {
            result->matrix[i][j] = A->matrix[i][j] * number;
        }
    }
  return OK;
}

int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
    if ((A -> columns != B -> rows) && ( A->rows > 1 || A->columns > 1 || B->rows > 1 || B->columns > 1)) {
        return CALC_ERROR;
    } else if (A->columns < 1 || A-> rows < 1  || B->rows < 1 || B->columns < 1) {
        return INVALID_MATRIX;
    }
    s21_create_matrix(A-> rows, B -> columns, result);
    for (int i = 0; i < A->rows; i++) {
        for (int j = 0; j < B->columns; j++) {
            for (int k = 0; k < B->rows; k++) {
                result->matrix[i][j] += A->matrix[i][k] * B->matrix[k][j];
            }
        }
    }
    return OK;
}

double get_rand(double min, double max)
{
    double range = (max - min);
    double div = RAND_MAX / range;
    return min + (rand() / div);
}

int s21_transpose(matrix_t *A, matrix_t *result){

   if (A->columns < 1 || A->rows < 1 || !A -> matrix ) {
        return INCORRECT_MATRIX;
    }
    s21_create_matrix(A-> columns, A -> rows, result);

    for (int i = 0; i < A->rows; i++) {
        for (int j = 0; j < A->columns; j++) {
            result->matrix[j][i] = A->matrix[i][j];
        }
    }
    return OK;

}

int s21_calc_complements(matrix_t *A, matrix_t *result){



    return SUCCESS;
}

int s21_determinant(matrix_t *A, double *result){




    return SUCCESS;
}

int s21_inverse_matrix(matrix_t *A, matrix_t *result){

    return SUCCESS;
}

void run_tests() {
    Suite *suite = NULL;
    SRunner *sRunner = NULL;

    Suite *suite_array[] = {
            suite_create_matrix(),    suite_eq_matrix(),
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