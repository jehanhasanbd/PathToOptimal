#include<iostream>
using namespace std;

int checkDivisible(int a) {
    return (a%5==0) && (a%11==0);
}

int main() {
    int a;
    cin>>a;
    cout<<checkDivisible(a);
}