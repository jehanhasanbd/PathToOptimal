#include<iostream>
using namespace std;

void print_N_to_1(int n) {
    for (int i = n; i >= 1; --i) {
        cout<<i<<" ";
    }
}

int main() {
    int a;
    cin>>a;
    print_N_to_1(a);
}