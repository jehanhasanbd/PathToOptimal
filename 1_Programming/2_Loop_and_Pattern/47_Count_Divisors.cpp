#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (n%i == 0) {
            count++;
        }
    }
    return count;
}
int countDivisorsOpt(int n) {
    int count = 0;
    for (int i = 1; i*i <= n; ++i) {
        if (n%i == 0) {
            count++;
            if (i != n/i) {
               count++;
            }
        }
    }
    return count;
}

int main() {
    int a;
    cin>>a;
    cout<<countDivisors(a)<<endl;
    cout<<countDivisorsOpt(a);
}