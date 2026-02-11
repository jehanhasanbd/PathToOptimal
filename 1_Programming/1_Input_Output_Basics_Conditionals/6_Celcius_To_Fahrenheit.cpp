#include<iostream>
using namespace std;

float cel_to_fah(float cel) {
    // c/5 = (f-32)/9
    return (9.0 * cel)/5 + 32.0;
}

int main() {
   float cel;
    cin>>cel;
    cout<<cel_to_fah(cel);
}