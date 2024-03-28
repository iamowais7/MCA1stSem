#include <iostream>
using namespace std;

void transpose(int matrix[20][20], int r, int c) {
    int transpose[20][20];

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose Matrix:" << endl;
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < r; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[20][20];
    int r, c;

    cout << "Enter number of rows of the matrix: ";
    cin >> r;
    cout << "Enter number of columns of the matrix: ";
    cin >> c;

    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> matrix[i][j];
        }
    }

    transpose(matrix, r, c);

    return 0;
}

