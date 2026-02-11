#include<iostream>
using namespace std;

int powerFinder(int base, int power) {
    int ans = 1;
    for (int i = 1; i <= power; ++i) {
        ans *= base;
    }
    return ans;
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<<powerFinder(a,b);
}