#include<iostream>
using namespace std;

int checkLeapYear(int year) {
    if (year % 400 == 0) {
        return 1;
    }
    if (year%4 ==0 && year%100 !=0) {
        return 1;
    }
    return 0;
}

int main() {
    int a;
    cin>>a;
    cout<<checkLeapYear(a);
}