//
// Created by moroshma on 12/28/23.
//

#include "s21_matrix.h"


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
  if (s21_check_size_matrix(A, B)) {
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
  if (s21_check_size_matrix(A, B)) {
    return INVALID_MATRIX;
  }
  s21_create_matrix(A->rows, A->columns, result);

  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < A->columns; j++) {
      result->matrix[i][j] = A->matrix[i][j] + B->matrix[i][j];
    }
  }
  return SUCCESS;
}

int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  if (A->rows != B->rows || A->columns != B->columns || A->rows < 1 ||
      A->columns < 1 || B->rows < 1 || B->columns < 1) {
    return INVALID_MATRIX;
  }
  s21_create_matrix(A->rows, A->columns, result);
  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < A->columns; j++) {
      result->matrix[i][j] = A->matrix[i][j] - B->matrix[i][j];
    }
  }
  return SUCCESS;
}

int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  if (A->rows < 1 || A->columns < 1 || !(A->matrix)) {
    return INVALID_MATRIX;
  }
  s21_create_matrix(A->rows, A->columns, result);
    for (int i = 0; i < A->rows; i++) {
        for (int j = 0; j < A->columns; j++) {
            result->matrix[i][j] = A->matrix[i][j] + number;
        }
    }
  return SUCCESS;
}

int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
    if (s21_check_size_matrix(A, B) || A -> columns != B -> rows) {
        return INVALID_MATRIX;
    }
    s21_create_matrix(A-> rows, B -> columns, result);

    for (int i = 0; i < A->rows; i++) {
        for (int j = 0; j < A->columns; j++) {

        }
    }
    return SUCCESS;



}


#include "stdio.h"
int main() {
//  struct matrix_struct ms1 = {};
//  struct matrix_struct ms2 = {};
//
//  s21_create_matrix(1, 5, &ms1);
//  s21_create_matrix(1, 5, &ms2);
//  s21_eq_matrix(&ms1, &ms2);
//
//  s21_remove_matrix(&ms1);
//  s21_remove_matrix(&ms2);
    char * ch = NULL;
    ch = calloc(1024, 1);

    ch = realloc(ch, 2048);
    size_t i = malloc_usable_size(ch);

    ch = realloc(ch, 4048);
     i = malloc_usable_size(ch);

    ch = realloc(ch, 1024);

    i = malloc_usable_size(ch);


}