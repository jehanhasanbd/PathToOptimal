#include<iostream>
#include<vector>
using namespace std;

void leftRotate(int n, int* arr, int k) {
    vector<int> temp;
    for (int i = 0; i < k; ++i) {
        temp.push_back(arr[i]);
    }
    for (int i = k; i < n; ++i) {
        arr[i - k] = arr[i];
    }
    int j = 0;
    for (int i = n-k; i < n; ++i) {
        arr[i] = temp[j];
        j++;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    leftRotate(n, arr, 3);
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}