#include<iostream>
using namespace std;

int findDifference(int a, int b) {
    return a - b;
}
int findMultiplication(int a, int b) {
    return a * b;
}

int main() {
    int a, b;
    cin>>a>>b;
    cout<<findDifference(a,b)<<endl;
    cout<<findMultiplication(a,b);
}