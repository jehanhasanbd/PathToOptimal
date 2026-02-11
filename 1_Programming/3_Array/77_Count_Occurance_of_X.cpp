#include<iostream>
using namespace std;

int countOccurance(int n, int* arr, int key) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int n,key;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    cin>>key;
    cout<<countOccurance(n, arr, key);
}