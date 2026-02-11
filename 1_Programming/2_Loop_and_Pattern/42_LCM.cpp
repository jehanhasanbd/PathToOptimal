#include<iostream>
using namespace std;

int LCM(int n, int m) {
    for (int i = 2; i <= n*m; ++i) {
        if (i%n==0 && i%m==0) {
            return i;
        }
    }
    return 1;
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<<LCM(a,b);
}