#include<iostream>
#include<vector>

using namespace std;

void findMissing1toN(int n, int* arr) {
    vector<int> counts(n+1,0);
    for (int i = 0; i < n; ++i) {
        counts[arr[i]]++;
    }
    for (int i = 1; i <= n; ++i) {
        if (counts[i] == 0) {
            cout<<i<<" ";
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
    findMissing1toN(n, arr);
}