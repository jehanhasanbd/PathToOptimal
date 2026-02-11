#include<iostream>
using namespace std;

int **initMatrix(int size) {
    int **matrix =new int*[size] ;
    for (int i = 0; i < size; ++i) {
        matrix[i] = new int[size];
    }
    return matrix;
}

void printMatrix(int size, int** matrix) {
    for (int i = 0; i < size; ++i) {
        cout<<"| ";
        for (int j = 0; j < size; ++j) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"|"<<endl;
    }
}


int main() {
    int size;
    cin>>size;
    int **matrix = initMatrix(size);

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin>>matrix[i][j];
        }
    }
    printMatrix(size, matrix);

}