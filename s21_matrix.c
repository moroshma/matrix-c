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
     for (int i = 0; i < columns && fl; i++) {
         result -> matrix[i] = (double *)calloc(rows, sizeof(double*));
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




#include "stdio.h"
int main() {


}