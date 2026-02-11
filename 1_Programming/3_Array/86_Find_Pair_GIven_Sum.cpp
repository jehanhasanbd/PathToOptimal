#include<iostream>
using namespace std;

void findPairofSum(int n, int* arr, int sum) {
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (arr[i] + arr[j] == sum) {
                cout<<arr[i]<<" + "<<arr[j]<<endl;
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    findPairofSum(n, arr,7);
}