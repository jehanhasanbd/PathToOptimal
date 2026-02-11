#include<iostream>
using namespace std;

int findMax(int a, int b,int c) {
    return max(a, max(b, c));
}

int findMaxManual(int a, int b,int c) {
    if (a > b && a > c) {
        return a;
    }
    else if ( b > a && b>c) {
        return b;
    }
    return c;
}

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<findMax(a, b, c)<<endl;
    cout<<findMaxManual(a, b, c);
}