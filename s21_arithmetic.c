#include "s21_matrix.h"

int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
    if ((A->rows != B->rows || A->columns != B->columns) &&
        (A->rows > 0 || A->columns > 0 || B->rows > 0 || B->columns > 0)) {
        return CALC_ERROR;
    } else if (A->columns < 1 || A->rows < 1 || B->rows < 1 || B->columns < 1) {
        return INCORRECT_MATRIX;
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
        return INCORRECT_MATRIX;
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
        return INCORRECT_MATRIX;
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
        return INCORRECT_MATRIX;
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