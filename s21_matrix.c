//
// Created by moroshma on 12/28/23.
//

#include "unit_tests/s21_test_matrix.h"
#include <malloc.h>
#include <stdlib.h>

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
  int ret = OK;
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
  A -> matrix = NULL;
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
  if ((A->rows != B->rows || A->columns != B->columns) &&
      (A->rows > 0 || A->columns > 0 || B->rows > 0 || B->columns > 0)) {
    return CALC_ERROR;
  } else if (A->columns < 1 || A->rows < 1 || B->rows < 1 || B->columns < 1) {
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
  if ((A->rows != B->rows || A->columns != B->columns) &&
      (A->rows > 1 || A->columns > 0 || B->rows > 0 || B->columns > 0)) {
    return CALC_ERROR;
  } else if (A->columns < 1 || A->rows < 1 || B->rows < 1 || B->columns < 1) {
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
  if ((A->columns != B->rows) &&
      (A->rows > 0 || A->columns > 0 || B->rows > 0 || B->columns > 0)) {
    return CALC_ERROR;
  } else if (A->columns < 1 || A->rows < 1 || B->rows < 1 || B->columns < 1) {
    return INVALID_MATRIX;
  }
  s21_create_matrix(A->rows, B->columns, result);
  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < B->columns; j++) {
      for (int k = 0; k < B->rows; k++) {
        result->matrix[i][j] += A->matrix[i][k] * B->matrix[k][j];
      }
    }
  }
  return OK;
}

double get_rand(double min, double max) {
  double range = (max - min);
  double div = RAND_MAX / range;
  return min + (rand() / div);
}

int s21_transpose(matrix_t *A, matrix_t *result) {

  if (A->columns < 1 || A->rows < 1 || !A->matrix) {
    return INCORRECT_MATRIX;
  }

  s21_create_matrix(A->columns, A->rows, result);

  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < A->columns; j++) {
      result->matrix[j][i] = A->matrix[i][j];
    }
  }
  return OK;
}

int Minor(int row, int column, matrix_t *A, matrix_t *result) {
  int err = 1;
  if (A->matrix != NULL) {
    err = s21_create_matrix(A->rows - 1, A->columns - 1, result);
    if (err == OK) {
      int m, n;
      for (int i = 0; i < A->rows; i++) {
        m = i;
        if (i > row - 1) {
          m--;
        }
        for (int j = 0; j < A->columns; j++) {
          n = j;
          if (j > column - 1) {
            n--;
          }
          if (i != row - 1 && j != column - 1) {
            result->matrix[m][n] = A->matrix[i][j];
          }
        }
      }
    }
  }
  return err;
}

double s21_determinant_recursive(matrix_t *A) {
  long double result = 0;
  if (A->rows == 2) {
    result =
        A->matrix[0][0] * A->matrix[1][1] - A->matrix[0][1] * A->matrix[1][0];
  } else {
    for (int i = 0; i < A->rows; i++) {
      matrix_t minor = {};
      Minor(1, i + 1, A, &minor);
      result += pow((-1), i) * A->matrix[0][i] * s21_determinant_recursive(&minor);
      s21_remove_matrix(&minor);
    }
  }
  return result;
}

int s21_determinant(matrix_t *A, double *result) {
  if (A->rows != A->columns && (A->rows > 0 && A->columns > 0)) {
    return CALC_ERROR;
  } else if (A->rows < 1 && A->columns < 1 || A->rows != A->columns) {
    return INVALID_MATRIX;
  }

  *result = A->matrix[0][0];
  if (A->rows != 1) {
    *result = s21_determinant_recursive(A);
  }
  return OK;
}



int s21_inverse_matrix(matrix_t *A, matrix_t *result) {
    if (A->rows != A->columns && (A->rows > 0 && A->columns > 0)) {
        return CALC_ERROR;
    } else if (A->rows < 1 && A->columns < 1 || A->rows != A->columns || A -> matrix == NULL ) {
        return INVALID_MATRIX;
    }


    double det = A->matrix[0][0];
    if (A->rows != 1) {
        det = s21_determinant_recursive(A);
    }

    if (det == 0) {
        return CALC_ERROR;
    }
    matrix_t  new_matrix = {};
    matrix_t tmp_trans= {};
    s21_calc_complements(A, &new_matrix);

    s21_transpose(&new_matrix, &tmp_trans);
    s21_mult_number(&tmp_trans, 1.0 / det, result);

    s21_remove_matrix(&new_matrix);
    s21_remove_matrix(&tmp_trans);

    return SUCCESS;
}

int s21_calc_complements(matrix_t *A, matrix_t *result) {
    if (A->rows != A->columns && (A->rows > 0 && A->columns > 0)) {
        return CALC_ERROR;
    } else if (A->rows < 1 && A->columns < 1 || A->rows != A->columns || A -> matrix == NULL ) {
        return INVALID_MATRIX;
    }

    double det = A->matrix[0][0];
    if (A->rows != 1) {
        det = s21_determinant_recursive(A);
    }

    if (det == 0) {
        return CALC_ERROR;
    }

    s21_create_matrix(A->rows, A->columns, result);

    for (int i = 0; i < A->rows; i++) {
        for (int j = 0; j < A->rows; j++) {
            matrix_t minor;
            det = 0;
            Minor(i + 1, j + 1, A, &minor);
            s21_determinant(&minor, &det);
            result -> matrix[i][j] = pow((-1), i + j) * det;
            s21_remove_matrix(&minor);


        }
    }


    return SUCCESS;
}

void run_tests() {
  Suite *suite = NULL;
  SRunner *sRunner = NULL;

  Suite *suite_array[] = {
      suite_create_matrix(), suite_eq_matrix(), suite_sub_matrix(),
      suite_sum_matrix(), suite_mult_matrix(), suite_mult_number_matrix(),
      suite_transpose_matrix(), suite_calc_complements(), suite_determinant()
      //,suite_inverse_matrix()
      ,suite_matrix_gather()};

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