#include<iostream>
using namespace std;

int findQuotation(int a, int b) {
    return a / b;
}
int findRemainder(int a, int b) {
    return a % b;
}

int main() {
    int a, b;
    cin>>a>>b;
    cout<<findQuotation(a,b)<<endl;
    cout<<findRemainder(a,b);
}