#include<iostream>
using namespace std;

void mergeArr(int n, int* arr, int m, int *arr2, int *merge) {
    for (int i = 0; i < n; ++i) {
        merge[i] = arr[i];
    }
    for (int i = 0; i < m; ++i) {
        merge[n+i] = arr2[i];
    }

}

int main() {
    int n,m;
    cin>>n>>m;
    int arr[n], arr2[m];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    for (int i = 0; i < m; ++i) {
        cin>>arr2[i];
    }
    int merge[n+m];
    mergeArr(n, arr, m, arr2, merge);
    for (int i = 0; i < n+m; ++i) {
        cout<<merge[i]<<" ";
    }
}