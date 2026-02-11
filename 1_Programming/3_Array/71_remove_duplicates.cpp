#include<iostream>
using namespace std;

void removeDuplicatesSorted(int n, int* arr) {
    for (int i = 0; i < n-1; ++i) {
        if (arr[i] == arr[i+1]) {
            arr[i+1] = -1;
        }
    }
    int j = 0;
    for (int i = 0; i < n-1; ++i) {
        if (arr[i] != -1) {
            arr[j] = arr[i];
            j++;
        }
    }
    for (int i = j; i < n; ++i) {
        arr[i] = -1;
    }
}
void removeDuplicates(int n, int* arr) {
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                arr[j] = -1;
            }
        }
    }

    int j = 0;
    for (int i = 0; i < n-1; ++i) {
        if (arr[i] != -1) {
            arr[j] = arr[i];
            j++;
        }
    }
    for (int i = j; i < n; ++i) {
        arr[i] = -1;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    // removeDuplicatesSorted(n, arr);
    removeDuplicates(n, arr);
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}