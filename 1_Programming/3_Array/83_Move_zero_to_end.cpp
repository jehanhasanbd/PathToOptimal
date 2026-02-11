#include<iostream>
using namespace std;

void moveAllZeroEnd(int n, int* arr) {
    int index = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }
    for (int i = index; i < n; ++i) {
        arr[i] = 0;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    moveAllZeroEnd(n, arr);
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}