#include<iostream>
using namespace std;

void findTripletOfSum(int n, int* arr, int sum) {
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            for (int k = j+1; k < n; ++k) {
                if (arr[i] + arr[j] + arr[k] == sum) {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
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
    findTripletOfSum(n, arr,7);
}