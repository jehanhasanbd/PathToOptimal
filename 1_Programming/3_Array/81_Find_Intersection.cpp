#include<iostream>
using namespace std;

int findIntersection(int n, int* arr, int m, int *arr2, int *merge) {
    int k = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i] == arr2[j]) {
                merge[k] = arr[i];
                k++;
            }
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
    int size = findIntersection(n, arr, m, arr2, merge);
    for (int i = 0; i < size; ++i) {
        cout<<merge[i]<<" ";
    }
}