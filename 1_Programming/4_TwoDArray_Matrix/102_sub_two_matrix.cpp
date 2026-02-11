#include <iostream>
using namespace std;

int** initMatrix(int row, int col) {
    int** matrix = new int*[row];
    for (int i = 0; i < row; ++i) matrix[i] = new int[col];
    return matrix;
}

void freeMatrix(int row, int** matrix) {
    for (int i = 0; i < row; ++i) delete[] matrix[i];
    delete[] matrix;
}

void printMatrix(int row, int col, int** matrix) {
    for (int i = 0; i < row; ++i) {
        cout << "| ";
        for (int j = 0; j < col; ++j) cout << matrix[i][j] << " ";
        cout << "|\n";
    }
}

int** subTwoMatrix(int row, int col, int** matrix1, int** matrix2) {
    int** addMatrix = initMatrix(row, col);
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            addMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
    return addMatrix;
}

int main() {
    int row, col;
    cin >> row >> col;

    if (row <= 0 || col <= 0) {
        cout << "Invalid matrix size\n";
        return 0;
    }

    int** matrix1 = initMatrix(row, col);
    int** matrix2 = initMatrix(row, col);

    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            cin >> matrix1[i][j];

    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            cin >> matrix2[i][j];

    int** subMatrix = subTwoMatrix(row, col, matrix1, matrix2);
    printMatrix(row, col, subMatrix);

    freeMatrix(row, matrix1);
    freeMatrix(row, matrix2);
    freeMatrix(row, subMatrix);
}
