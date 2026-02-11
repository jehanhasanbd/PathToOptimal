#include<iostream>
using namespace std;

int validTriangle(int a, int b,int c) {
    return  (a+b> c && b+c>a && a+c>b);
}

int main() {
    int a, b, c;
    cin>>a>>b>>c;
    cout<<validTriangle(a,b,c);
}