#include<iostream>
using namespace std;

bool notExists(int n, int *arr, int key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key)
            return false;
    }
    return true;
}

int findUnion(int n, int* arr, int m, int *arr2, int *merge) {
    int k = 0;
    for (int i = 0; i < n; ++i) {
        if (notExists(k, merge, arr[i])) {
            merge[k] = arr[i];
            k++;
        }
    }
    for (int i = 0; i < m; ++i) {
        if (notExists(k, merge, arr2[i])) {
            merge[k] = arr2[i];
            k++;
        }
    }
    return k;
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
    int size = findUnion(n, arr, m, arr2, merge);
    for (int i = 0; i < size; ++i) {
        cout<<merge[i]<<" ";
    }
}