#include<iostream>
using namespace std;

void printArr(int n, int* arr, int target, int &startIndex, int &endIndex) {
    int left = 0, currentSum = 0;

    for (int right = 0; right < n; ++right) {
        currentSum += arr[right];

        while (currentSum > target) {
            currentSum -= arr[left];
            left++;
        }

        if (currentSum == target) {
            startIndex = left;
            endIndex = right;
            return;
        }
    }
}

int main() {
    int n, startIndex = -1, endIndex = -1, target;
    cin>>n>>target;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    printArr(n, arr, target, startIndex, endIndex);
    cout<<startIndex<<" "<<endIndex;
}