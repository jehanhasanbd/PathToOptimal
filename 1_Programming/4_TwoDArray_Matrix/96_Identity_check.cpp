#include<iostream>
using namespace std;

int checkIdentity(int row, int col, int** matrix) {
    if (row != col) {
        return 0;
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (i==j && matrix[i][j] != 1) {
                return 0;
            }
            else if (i != j && matrix[i][j] != 0){
                return 0;
            }
        }
    }
    return 1;

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
    cout<<checkIdentity(row, col, matrix);
}