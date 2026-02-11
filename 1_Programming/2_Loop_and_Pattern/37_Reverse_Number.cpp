#include<iostream>
#include<cmath>
using namespace std;

int reverseNumber(int n) {
    int sum = 0;
   while (n) {
       int rem = n%10;
       n /= 10;
       sum = sum *10 + rem;
   }
    return sum;
}


int main() {
    int a;
    cin>>a;
    cout<<reverseNumber(a)<<endl;

}