#include<iostream>
#include<vector>
using namespace std;

void moveAllNegEnd(int n, int* arr) {
    int index = 0;
    vector<int> temp;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            arr[index++] = arr[i];
        }
        else if (arr[i] <= 0) {
            temp.push_back(arr[i]);
        }
    }
    for (auto x: temp) {
        arr[index++] = x;
    }

}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    moveAllNegEnd(n, arr);
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}