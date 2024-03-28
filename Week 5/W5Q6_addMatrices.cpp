#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> row >> col;

    int matrix1[row][col], matrix2[row][col], result[row][col];

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << "Enter element at position [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << "Enter element at position [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // Matrix Addition
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the result of matrix addition
    cout << "Result of Matrix Addition:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

