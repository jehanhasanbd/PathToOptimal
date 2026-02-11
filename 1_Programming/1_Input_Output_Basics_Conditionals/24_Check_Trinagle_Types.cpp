// equilateral -> 1/isosceles -> 0/ scalene-> -1: else->-2

#include<iostream>
using namespace std;

int checkType(int a, int b, int c) {
    if (a==b && b==c) {
        return 1;
    }
    if (a==b || b==c || c==a) {
        return 0;
    }
    if (a!=b && b!=c && c!=a) {
        return -1;
    }
    return -2;
}

int main() {
    int a, b, c;
    cin>>a>>b>>c;
    cout<<checkType(a,b,c);
}