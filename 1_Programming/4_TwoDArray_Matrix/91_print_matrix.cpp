#include<iostream>
using namespace std;

void printMatrix(int row, int col, int** matrix) {
    for (int i = 0; i < row; ++i) {
        cout<<"| ";
        for (int j = 0; j < col; ++j) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"|"<<endl;
    }
}

int main() {
    int row, col;
    cin>>row>>col;
    int **matrix =new int*[row] ;
    for (int i = 0; i < row; ++i) {
        matrix[i] = new int[col];
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin>>matrix[i][j];
        }
    }
    printMatrix(row, col, matrix);
}