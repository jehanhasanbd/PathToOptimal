#include<iostream>
using namespace std;

void print_Even_1_to_N(int n) {
    for (int i = 2; i <= n; i+=2) {
        cout<<i<<" ";
    }
}

int main() {
    int a;
    cin>>a;
    print_Even_1_to_N(a);
}