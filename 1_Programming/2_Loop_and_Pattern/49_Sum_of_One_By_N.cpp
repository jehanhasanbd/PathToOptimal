#include<iostream>
using namespace std;

double sumOfOneByN(int n) {
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += (1.0/i);
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    cout<<sumOfOneByN(n);
}