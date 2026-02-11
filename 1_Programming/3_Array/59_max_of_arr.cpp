#include<iostream>
using namespace std;

int maxOfArr(int n, int* arr) {
    int maxi = INT_MIN;
    for (int i = 0; i < n; ++i) {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    cout<<maxOfArr(n, arr);
}