#include<iostream>
using namespace std;

void rowWiseSum(int row, int col, int** matrix) {
    for (int i = 0; i < row; ++i) {
        int sum = 0;
        for (int j = 0; j < col; ++j) {
            sum += matrix[i][j];
        }
        cout<<sum<<endl;
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
    rowWiseSum(row, col, matrix);
}