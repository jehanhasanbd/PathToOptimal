#include<iostream>
using namespace std;

void swapValue(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


int main() {
    int a, b;
    cin>>a>>b;
    swapValue(a,b);
    cout<<a<<" "<<b<<endl;
}