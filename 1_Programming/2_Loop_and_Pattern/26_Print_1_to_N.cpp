#include<iostream>
using namespace std;

void print_1_to_N(int n) {
    for (int i = 1; i <= n; ++i) {
        cout<<i<<" ";
    }
}

int main() {
    int a;
    cin>>a;
    cout<<print_1_to_N(a);
}