#include "matrix.h"

int main()
{
    int rows = 3;
    int cols = 3;

    Matrix m(rows, cols);

    double value = 1.00;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            m.set(i, j, value++);
        }
    }

    // Test your Matrix here:

    return 0;
}