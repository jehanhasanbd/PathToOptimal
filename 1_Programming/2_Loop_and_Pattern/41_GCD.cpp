#include<iostream>
using namespace std;

int GCD(int n, int m) {
    int gcd = 1;
    for (int i = 2; i <= n && i<=m; ++i) {
        if (n%i==0 && m%i==0) {
            gcd = i;
        }
    }
    return gcd;
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b);
}