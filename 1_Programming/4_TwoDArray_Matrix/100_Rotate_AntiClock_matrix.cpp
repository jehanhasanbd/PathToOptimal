#include<iostream>
using namespace std;

int **initMatrix(int row, int col) {
    int **matrix =new int*[row] ;
    for (int i = 0; i < row; ++i) {
        matrix[i] = new int[col];
    }
    return matrix;
}

void printMatrix(int row, int col, int** matrix) {
    for (int i = 0; i < row; ++i) {
        cout<<"| ";
        for (int j = 0; j < col; ++j) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"|"<<endl;
    }
}

int** rotateMatric(int row, int col, int** matrix) {
    int **rotateMatrix = initMatrix(row, col);
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            rotateMatrix[col-1 - j][i] = matrix[i][j];
        }
        cout<<endl;
    }
    return rotateMatrix;
}

int main() {
    int row, col;
    cin>>row>>col;
    int **matrix = initMatrix(row, col);

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin>>matrix[i][j];
        }
    }
    printMatrix(row, col, matrix);
    int **trainsposeMatrix = rotateMatric(row,col, matrix);
    printMatrix(row, col, trainsposeMatrix);
}