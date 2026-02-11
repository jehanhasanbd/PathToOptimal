#include<iostream>
using namespace std;

int countOdd(int n, int* arr) {
    int odd = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] %2 == 1)
            odd++;
    }
    return odd;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    cout<<countOdd(n, arr);
}