#include<iostream>
using namespace std;

int secMinOfArr(int n, int* arr) {
    int mini = INT_MAX;
    int secMini = INT_MAX;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < mini) {
            secMini = mini;
            mini = arr[i];
        }
        else if (arr[i] < secMini) {
            secMini = arr[i];
        }
    }
    return secMini;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    cout<<secMinOfArr(n, arr);
}