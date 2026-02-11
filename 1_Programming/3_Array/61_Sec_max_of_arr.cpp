#include<iostream>
using namespace std;

int secMaxOfArr(int n, int* arr) {
    int maxi = INT_MIN;
    int secMaxi = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > maxi) {
            secMaxi = maxi;
            maxi = arr[i];
        }
        else if (arr[i] > secMaxi) {
            secMaxi = arr[i];
        }
    }
    return secMaxi;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    cout<<secMaxOfArr(n, arr);
}