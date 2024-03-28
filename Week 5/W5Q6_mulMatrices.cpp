#include <iostream>
using namespace std;

int main() {
    int row1, col1, row2, col2;
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> row1 >> col1;
    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> row2 >> col2;

    if (col1 != row2) {
        cout << "Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix." << endl;
        return 1;
    }

    int matrix1[row1][col1], matrix2[row2][col2], result[row1][col2];

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col1; ++j) {
            cout << "Enter element at position [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < row2; ++i) {
        for (int j = 0; j < col2; ++j) {
            cout << "Enter element at position [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // Matrix Multiplication
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < col1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Displaying the result of matrix multiplication
    cout << "Result of Matrix Multiplication:" << endl;
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

