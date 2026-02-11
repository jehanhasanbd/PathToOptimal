#include<iostream>
using namespace std;

float fah_to_cel(float fah) {
    // c/5 = (f-32)/9
    return (5.0 * (fah - 32.0)) / 9.0 ;
}

int main() {
   float fah;
    cin>>fah;
    cout<<fah_to_cel(fah);
}