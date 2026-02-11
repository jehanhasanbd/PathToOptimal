#include<iostream>
using namespace std;

int countOdd(int n, int* arr, int &zeros) {
    int pos = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0)
            zeros++;
        else if (arr[i] > 0)
            pos++;
    }
    return pos;
}

int main() {
    int n,zeros=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    cout<<"Pos:"<<countOdd(n, arr, zeros)<<endl;
    cout<<"Zeros:"<<zeros<<endl;

}