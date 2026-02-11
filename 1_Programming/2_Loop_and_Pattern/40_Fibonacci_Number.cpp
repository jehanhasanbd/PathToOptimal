#include<iostream>
using namespace std;

int  fibonacciNumber(int n) {
    int firstPrevious = 1;
    int secondPrevious = 0;

    if (n == 0) {
        return secondPrevious;
    }
    if (n == 1) {
        return firstPrevious;
    }


    for (int i = 2; i <= n; ++i) {
        int currentNumber = firstPrevious + secondPrevious;
        secondPrevious = firstPrevious;
        firstPrevious = currentNumber;
    }
    return firstPrevious;
}

int main() {
    int a;
    cin>>a;
    cout<<fibonacciNumber(a);
}