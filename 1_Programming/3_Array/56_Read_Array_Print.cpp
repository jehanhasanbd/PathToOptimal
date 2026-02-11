#include<iostream>
using namespace std;

void printArr(int n, int* arr) {
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    printArr(n, arr);
}