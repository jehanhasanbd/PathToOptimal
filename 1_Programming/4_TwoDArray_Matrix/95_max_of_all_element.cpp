#include<iostream>
using namespace std;

int maxOfElement(int row, int col, int** matrix) {
    int maxi = INT_MIN;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            maxi = max(maxi, matrix[i][j]);
        }
    }
    return maxi;
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
    cout<<maxOfElement(row, col, matrix);
}