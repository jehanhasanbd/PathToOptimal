#include<iostream>
using namespace std;

int findMin(int a, int b,int c) {
    return min(a, min(b, c));
}

int findMinManual(int a, int b,int c) {
    if (a < b && a < c) {
        return a;
    }
    else if ( b < a && b<c) {
        return b;
    }
    return c;
}

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<findMin(a, b, c)<<endl;
    cout<<findMinManual(a, b, c);
}