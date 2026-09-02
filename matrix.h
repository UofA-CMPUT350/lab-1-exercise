#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
public:
    const int row_length; // Number of rows in the matrix
    const int col_length; // Number of columns in the matrix

    // Constructor: calls init to allocate memory and set dimensions
    Matrix(int rows, int cols);

    // Destructor: calls deallocate to free memory
    ~Matrix();

    // Initializes the matrix with given dimensions and allocates memory
    void init(int rows, int cols);

    // Frees any memory allocated for the matrix
    void deallocate();

    // Sets the value at a specific (row, col) position
    void set(int row, int col, double value);

    // Returns a pointer to the value at (row, col)
    const double* get(int row, int col) const;

    // Prints the value at (row, col) to standard output
    void print_cell(int row, int col) const;

    // Prints the entire matrix row by row
    void print_matrix() const;

private:
    // Helper function to check if (row, col) is within matrix bounds
    bool in_bounds(int row, int col) const;

    double* mArr; // Pointer to a 1D array storing matrix values
};

#endif // MATRIX_H
