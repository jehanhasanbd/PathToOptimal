#include<iostream>
using namespace std;

void swapValueWithoutTemp(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void swapValueWithoutTempMultiplication(int &a, int &b) {
    a = a * b;
    b = a / b;
    a = a / b;
}


int main() {
    int a, b;
    cin>>a>>b;
    swapValueWithoutTemp(a,b);
    cout<<a<<" "<<b<<endl;
}