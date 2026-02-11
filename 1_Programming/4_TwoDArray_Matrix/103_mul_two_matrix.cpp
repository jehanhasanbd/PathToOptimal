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

int** mulTwoMatrix(int row1, int col1, int** matrix1,int row2,int col2, int** matrix2) {
    if (col1 != row2) {
        return NULL;
    }
    int** mulMatrix = initMatrix(row1, col2);

    for (int i = 0; i < row1; ++i)
        for (int j = 0; j < col2; ++j)
            mulMatrix[i][j] = 0;

    for (int i = 0; i < row1; ++i)
        for (int j = 0; j < col2; ++j)
            for (int k = 0; k < row2; ++k)
                mulMatrix[i][j] += matrix1[i][k] * matrix2[k][j];

    return mulMatrix;
}

int main() {
    int row1, col1, row2, col2;
    cin >> row1 >> col1 >> row2 >> col2;

    if (row1 <= 0 || col1 <= 0) {
        cout << "Invalid matrix size\n";
        return 0;
    }

    int** matrix1 = initMatrix(row1, col1);
    int** matrix2 = initMatrix(row2, col2);

    for (int i = 0; i < row1; ++i)
        for (int j = 0; j < col1; ++j)
            cin >> matrix1[i][j];

    for (int i = 0; i < row2; ++i)
        for (int j = 0; j < col2; ++j)
            cin >> matrix2[i][j];

    int** addMatrix = mulTwoMatrix(row1, col1,  matrix1,row2, col2, matrix2);
    if (addMatrix) {
        printMatrix(row1, col2, addMatrix);
    }

    freeMatrix(row1, matrix1);
    freeMatrix(row2, matrix2);
    freeMatrix(row1, addMatrix);
}
