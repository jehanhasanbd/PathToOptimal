#include<iostream>
using namespace std;

int factorial(int a) {
    int factorial = 1;
    for (int i = 1; i <= a; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int a;
    cin>>a;
    cout<<factorial(a);
}