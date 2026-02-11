#include<iostream>
using namespace std;

int minOfArr(int n, int* arr) {
    int mini = INT_MAX;
    for (int i = 0; i < n; ++i) {
        mini = min(mini, arr[i]);
    }
    return mini;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    cout<<minOfArr(n, arr);
}