#include<iostream>
using namespace std;

int factorialTrailingZeros(int n) {
    int zeros = 0;
    int divide = 5;
    while (divide <= n) {
        zeros += n/divide;

        divide *= 5;
    }
    return zeros;
}

int main() {
    int n;
    cin>>n;
    cout<<factorialTrailingZeros(n);
}