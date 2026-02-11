#include<iostream>
using namespace std;

int checkSorted(int n, int* arr) {
    for (int i = 0; i < n-1; ++i) {
        if (arr[i+1] < arr[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    cout<<checkSorted(n, arr);
}