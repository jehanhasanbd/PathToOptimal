#include<iostream>
using namespace std;

int sumFinder(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    cin>>a>>b;
    cout<<sumFinder(a,b);
}