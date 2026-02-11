#include<iostream>
using namespace std;

void leftRotate(int n, int* arr) {
    int temp = arr[0];
    for (int i = 1; i < n; ++i) {
        swap(arr[i-1], arr[i]);
    }
    arr[n-1] = temp;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    leftRotate(n, arr);
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}