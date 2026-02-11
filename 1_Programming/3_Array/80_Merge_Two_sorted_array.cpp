#include<iostream>
using namespace std;

void mergeSortedArr(int n, int* arr, int m, int *arr2, int *merge) {
    int i = 0, j=0, k=0;
    for ( ; i < n && j<m && k < n+m; ) {
        if (arr[i] <= arr2[j]) {
            merge[k] = arr[i];
            k++;
            i++;
        }
        else {
            merge[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n) {
        merge[k] = arr[i];
        k++;
        i++;
    }
    while (j < n) {
        merge[k] = arr2[j];
        k++;
        j++;
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
    mergeSortedArr(n, arr, m, arr2, merge);
    for (int i = 0; i < n+m; ++i) {
        cout<<merge[i]<<" ";
    }
}