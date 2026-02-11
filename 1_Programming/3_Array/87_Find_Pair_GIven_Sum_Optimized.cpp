#include<iostream>
#include<unordered_set>
using namespace std;

void findPairofSumOpt(int n, int* arr, int sum) {
    unordered_set<int> seenArr;
    for (int i = 0; i < n; ++i) {
        int complement = sum - arr[i];
        if (seenArr.count(complement)) {
            cout<<arr[i]<<" "<<complement<<endl;
        }
        seenArr.insert(arr[i]);
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    findPairofSumOpt(n, arr,7);
}