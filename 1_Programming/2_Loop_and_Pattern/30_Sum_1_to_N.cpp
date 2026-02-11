#include<iostream>
using namespace std;

int sum_1_to_N(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int a;
    cin>>a;
    cout<<sum_1_to_N(a);
}