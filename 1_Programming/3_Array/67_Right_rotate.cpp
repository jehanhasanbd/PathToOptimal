#include<iostream>
using namespace std;

void leftRotate(int n, int* arr) {
    int temp = arr[n-1];
    for (int i = n-2; i >= 0; --i) {
        swap(arr[i+1], arr[i]);
    }
    arr[0] = temp;
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