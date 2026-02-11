#include<iostream>
using namespace std;

void firstLastOccurance(int n, int *arr, int key, int &first, int &last) {
    int flag = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key && !flag) {
            first = i;
            flag = 1;
        }
        else if (arr[i] == key && flag) {
            last = i;
        }
    }
}

int main() {
    int n,key, first = -1,last = -1;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    cin>>key;
    firstLastOccurance(n, arr, key, first, last);
    cout<<first<<" "<<last;
}