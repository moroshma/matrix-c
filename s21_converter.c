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

void Minor(int row, int col, matrix_t *A, matrix_t *result) {
  int m_row = 0;
  int m_col = 0;
  for (int i = 0; i < A->rows; i++) {
    if (i == row) {
      continue;
    }
    m_col = 0;
    for (int j = 0; j < A->columns; j++) {
      if (j == col) {
        continue;
      }
      result->matrix[m_row][m_col] = A->matrix[i][j];
      m_col++;
    }
    m_row++;
  }
}

double s21_determinant_recursive(matrix_t *A) {
  long double result = 0;
  if (A->rows == 2) {
    result =
        A->matrix[0][0] * A->matrix[1][1] - A->matrix[0][1] * A->matrix[1][0];
  } else {
    matrix_t minor = {};
    s21_create_matrix(A->rows - 1, A->columns - 1, &minor);
    for (int i = 0; i < A->rows; i++) {
      Minor(0, i, A, &minor);
      result += pow((-1), i) * A->matrix[0][i] * s21_determinant_recursive(&minor);
    }
    s21_remove_matrix(&minor);
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

  s21_create_matrix(A->columns, A->rows, result);
  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < A->columns; j++) {
      matrix_t minor = {0};
      double determinant = 0;
      s21_create_matrix(A->columns - 1, A->rows - 1, &minor);
      Minor(i, j, A, &minor);
      s21_determinant(&minor, &determinant);
      result->matrix[i][j] = pow(-1, (i + j)) * determinant;
      s21_remove_matrix(&minor);
    }
  }

  return SUCCESS;
}
