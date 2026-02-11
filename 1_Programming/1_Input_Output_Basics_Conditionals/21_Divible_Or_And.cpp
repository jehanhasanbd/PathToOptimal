#include<iostream>
using namespace std;

int checkDivisible(int a) {
    return (a%3==0) || (a%7==0);
}

int main() {
    int a;
    cin>>a;
    cout<<checkDivisible(a);
}