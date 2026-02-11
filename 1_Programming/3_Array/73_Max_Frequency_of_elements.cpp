#include<iostream>
#include<unordered_map>

using namespace std;

pair<int,int> maxFrequency(int n, int* arr) {
    unordered_map<int,int> counts;
    for (int i = 0; i < n; ++i) {
        counts[arr[i]]++;
    }
    pair<int,int> maxi = {INT_MIN, 0};
    for (auto &x: counts) {
        if (x.second > maxi.first) {
            maxi.first = x.second;
            maxi.second = x.first;
        }
    }
    return maxi;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    pair<int,int> maxi = maxFrequency(n, arr);
    cout<<maxi.first<<" "<<maxi.second;
}