#include<iostream>
#include<cmath>
using namespace std;

int checkAmstrongNumber(int n) {
    int originalN = n;
    int no_of_Digit = log10(n) + 1;

    int sum = 0;
   while (n) {
       int rem = n%10;
       n /= 10;
       sum += pow(rem, no_of_Digit);
   }
    return sum == originalN;
}


int main() {
    int a;
    cin>>a;
    cout<<checkAmstrongNumber(a)<<endl;

}