#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sumOfallFactors(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (n%i == 0) {
            sum += i;
        }
    }
    return sum;
}
int  sumOfallFactorsOpt(int n) {
    int sum = 0;
    for (int i = 1; i*i <= n; ++i) {
        if (n%i == 0) {
            sum += i;
            if (i != n/i) {
               sum += n/i;
            }
        }
    }
    return sum;

}

int main() {
    int a;
    cin>>a;
    cout<<sumOfallFactors(a)<<endl;
    cout<<sumOfallFactorsOpt(a);
}