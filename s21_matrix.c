//
// Created by moroshma on 12/28/23.
//

#include "s21_matrix.h"

int s21_safe_calloc(int rows, int columns, matrix_t *result){
    int ret = SUCCESS;
    result -> columns = columns;
    result -> rows = rows;
    result -> matrix = (double **) calloc(rows, sizeof(double**));
    if (!result -> matrix) {
        ret = CALLOC_ERROR;
    } else {
     bool fl = true;
     for (int i = 0; i < rows && fl; i++) {
         result -> matrix[i] = (double *)calloc(columns, sizeof(double*));
         if (!result -> matrix[i]){
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
        s21_safe_calloc(rows, columns,result);
    }
    return ret;
}

void s21_remove_matrix(matrix_t *A) {
    for (int  i = 0; i < A -> rows; i++) {
        free(A -> matrix[i]);
    }
    free(A -> matrix);
}

int s21_eq_matrix(matrix_t *A, matrix_t *B) {
    int ret = SUCCESS_EQ;
    if (A ->rows != B -> rows || A -> columns != B ->columns) {
        ret = FAILURE_EQ;
    } else {
        ret = s21_loop_eq_matrix(A, B);
    }
    return ret;
}

int s21_loop_eq_matrix(matrix_t *A, matrix_t *B) {
    int ret = SUCCESS_EQ;
    for (int i = 0; i < A ->rows && ret; i++){
        for (int j = 0; j < A -> columns && ret; j++) {
            if (fabs(A -> matrix[i][j] - B -> matrix[i][j]) > S21_EPS)
                ret = FAILURE_EQ;
        }
    }
    return ret;
}

int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
    int ret = SUCCESS_EQ;
    if (A ->rows != B -> rows || A -> columns != B ->columns) {
        ret = FAILURE_EQ;
    } else {
        s21_create_matrix(A -> rows, A -> columns, result);
        s21_loop_sum_matrix(A, B, result);
    }
    return ret;
}

void s21_loop_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
    for (int i = 0; i < A ->rows; i++){
        for (int j = 0; j < A -> columns; j++) {
            result ->matrix[i][j] = A ->matrix[i][j] + B ->matrix[i][j];
        }
    }
}

int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
    int ret = SUCCESS_EQ;
    if (A ->rows != B -> rows || A -> columns != B ->columns) {
        ret = FAILURE_EQ;
    } else {
        s21_create_matrix(A -> rows, A -> columns, result);
        s21_loop_sub_matrix(A, B, result);
    }
    return ret;
}

void s21_loop_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
    for (int i = 0; i < A ->rows; i++){
        for (int j = 0; j < A -> columns; j++) {
            result ->matrix[i][j] = A ->matrix[i][j] - B ->matrix[i][j];
        }
    }
}

#include "stdio.h"
int main() {
    struct matrix_struct ms1 = {};
    struct matrix_struct ms2 = {};

    s21_create_matrix(1,5, &ms1);
    s21_create_matrix(1,5, &ms2);
    s21_eq_matrix(&ms1, &ms2);

    s21_remove_matrix(&ms1);
    s21_remove_matrix(&ms2);


}