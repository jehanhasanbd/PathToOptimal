#include<iostream>
using namespace std;

int checkEven(int a) {
    return a % 2 == 0;
}

int main() {
    int a;
    cin>>a;
    cout<<checkEven(a);
}