#include<iostream>
using namespace std;

int checkPositiveNegative(int a) {
    if (a == 0){
        return 0;
    }
    else if (a > 0) {
        return 1;
    }
    return -1;
}

int main() {
    int a;
    cin>>a;
    cout<<checkPositiveNegative(a);
}