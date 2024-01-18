#include "s21_matrix.h"

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
      result +=
          pow((-1), i) * A->matrix[0][i] * s21_determinant_recursive(&minor);
      s21_remove_matrix(&minor);
    }
  }
  return result;
}

int s21_determinant(matrix_t *A, double *result) {
  if (A->rows != A->columns && (A->rows > 0 && A->columns > 0)) {
    return CALC_ERROR;
  } else if ((A->rows < 1 && A->columns < 1) || (A->rows != A->columns)) {
    return INCORRECT_MATRIX;
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
  } else if ((A->rows < 1 && A->columns < 1) || (A->rows != A->columns) ||
             A->matrix == NULL) {
    return INCORRECT_MATRIX;
  }

  double det = A->matrix[0][0];
  if (A->rows != 1) {
    det = s21_determinant_recursive(A);
  }

  if (det == 0) {
    return CALC_ERROR;
  }
  matrix_t new_matrix = {};
  matrix_t tmp_trans = {};
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
  } else if ((A->rows < 1 && A->columns < 1) || (A->rows != A->columns) ||
             (A->matrix == NULL)) {
    return INCORRECT_MATRIX;
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
      result->matrix[i][j] = pow((-1), i + j) * det;
      s21_remove_matrix(&minor);
    }
  }

  return SUCCESS;
}
