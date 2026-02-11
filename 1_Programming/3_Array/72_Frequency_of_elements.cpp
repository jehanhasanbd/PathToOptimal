#include<iostream>
#include<unordered_map>

using namespace std;

void countFrequency(int n, int* arr) {
    unordered_map<int,int> counts;
    for (int i = 0; i < n; ++i) {
        counts[arr[i]]++;
    }
    for (auto &x: counts) {
        cout<<x.first<<" --> "<<x.second<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    countFrequency(n, arr);
}