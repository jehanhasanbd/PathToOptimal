#include<iostream>
using namespace std;

int sum_Even_1_to_N(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i+=2) {
        sum += i;
    }
    return sum;
}

int main() {
    int a;
    cin>>a;
    cout<<sum_Even_1_to_N(a);
}