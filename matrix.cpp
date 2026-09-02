#include "matrix.h"

#include <cassert>
#include <iostream>

Matrix::Matrix(int rows, int cols) { init(rows, cols); }

Matrix::~Matrix() { deallocate(); }

void Matrix::init(int rows, int cols) {
  // TODO: Validate input and allocate memory
}

void Matrix::deallocate() {
  // TODO: Free memory and set pointer to nullptr
}

void Matrix::set(int row, int col, double value) {
  // TODO: Check bounds and assign value to matrix
}

const double *Matrix::get(int row, int col) const {
  // TODO: Return pointer to the appropriate cell
}

void Matrix::print_cell(int row, int col) const {
  // TODO: Print single element
}

void Matrix::print_matrix() const {
  // TODO: Loop over the matrix and print it
}

bool Matrix::in_bounds(int row, int col) const {
  // TODO: Return true if (row, col) is within matrix bounds
}
