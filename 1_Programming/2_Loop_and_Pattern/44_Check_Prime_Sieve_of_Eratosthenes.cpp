#include<iostream>
#include<vector>
using namespace std;

void checkPrime(int  n, vector<bool> &isPrime) {
    if (n>=0)
        isPrime[0] = false;
    if (n>=1)
        isPrime[1] = false;
    for (int i = 2; i*i <= n; ++i) {
        if (isPrime[i]) {
            for (int multiplicant = i*i; multiplicant <= n; multiplicant += i) {
                isPrime[multiplicant] = false;
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    vector<bool> isPrime(n, true);
    checkPrime(n+1,isPrime);
    for (int i = 0; i <= n+1; ++i) {
        cout<<i<<"-->"<<isPrime[i]<<endl;
    }
}