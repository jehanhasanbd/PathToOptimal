#include<iostream>
#include<vector>
using namespace std;

void leftRotate(int n, int* arr, int k) {
    vector<int> temp;
    for (int i = 0; i < k; ++i) {
        temp.push_back(arr[n-1-i]);
    }

    cout<<endl;
    for (int i = n-1-k; i >=0; --i) {
        arr[i+k] = arr[i];
    }
    for (int i = 0; i < k; ++i) {
        arr[i] = temp[k-1-i];
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    leftRotate(n, arr, 3);
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}