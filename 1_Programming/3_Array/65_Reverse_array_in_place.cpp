#include<iostream>
using namespace std;

void reverseArr(int n, int* arr) {
    int left = 0, right = n-1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    reverseArr(n, arr);
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}