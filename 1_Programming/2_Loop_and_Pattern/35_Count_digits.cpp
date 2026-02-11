#include<iostream>
#include<cmath>
using namespace std;

int countDigits(int n) {
    int digits = 0;
   while (n) {
       digits++;
       n /= 10;
   }
    return digits;
}

int countDigitsOpt(int n) {
   return log10(n) + 1;
}



int main() {
    int a;
    cin>>a;
    cout<<countDigits(a)<<endl;
    cout<<countDigitsOpt(a);
}