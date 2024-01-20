
#define SUCCESS_EQ 1
#define FAILURE_EQ 0
#define S21_EPS 1e-7

#include <check.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

typedef struct matrix_struct {
  double **matrix;
  int rows;
  int columns;
} matrix_t;

enum { OK = 0, INCORRECT_MATRIX = 1, CALC_ERROR = 2, MALLOC_FAILED = 3 };
#define SUCCESS 1
#define FAILURE 0


/*
 0 - OK
 1 - Ошибка, некорректная матрица
 2 - Ошибка вычисления (несовпадающие размеры матриц; матрица, для которой
 нельзя провести вычисления и т.д.)
*/


bool s21_check_size_matrix(matrix_t *A, matrix_t *B);

int s21_create_matrix(int rows, int columns, matrix_t *result);
void s21_remove_matrix(matrix_t *A);
int s21_eq_matrix(matrix_t *A, matrix_t *B);
int s21_loop_eq_matrix(matrix_t *A, matrix_t *B);

int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result);

int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result);

int s21_mult_number(matrix_t *A, double number, matrix_t *result);

int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result);

int s21_transpose(matrix_t *A, matrix_t *result);

int s21_calc_complements(matrix_t *A, matrix_t *result);

int s21_determinant(matrix_t *A, double *result);

int s21_inverse_matrix(matrix_t *A, matrix_t *result);

int s21_safe_calloc(int rows, int columns, matrix_t *result);

void Minor(int row, int col, matrix_t *A, matrix_t *result);

double s21_determinant_recursive(matrix_t *A);
