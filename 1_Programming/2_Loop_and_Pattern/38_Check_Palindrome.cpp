#include<iostream>
#include<cmath>
using namespace std;

int checkPalindrome(int n) {
    int originalN = n;
    int sum = 0;
   while (n) {
       int rem = n%10;
       n /= 10;
       sum = sum *10 + rem;
   }
    return sum == originalN;
}


int main() {
    int a;
    cin>>a;
    cout<<checkPalindrome(a)<<endl;

}