#include "s21_matrix.h"
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
    ret = MALLOC_FAILED;
  } else {
    bool fl = true;
    for (int i = 0; i < rows && fl; i++) {
      result->matrix[i] = (double *)calloc(columns, sizeof(double *));
      if (!result->matrix[i]) {
        ret = MALLOC_FAILED;
        fl = false;
      }
    }
  }
  return ret;
}

int s21_create_matrix(int rows, int columns, matrix_t *result) {
  int ret = OK;
  if (rows <= 0 || columns <= 0) {
    ret = INCORRECT_MATRIX;
  } else {
    s21_safe_calloc(rows, columns, result);
  }
  return ret;
}

void s21_remove_matrix(matrix_t *A) {
  if (A->matrix != NULL) {
    for (int i = 0; i < A->rows; i++) {
      free(A->matrix[i]);
    }
    free(A->matrix);
  }
  A->matrix = NULL;
  A->rows = 0;
  A->columns = 0;
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