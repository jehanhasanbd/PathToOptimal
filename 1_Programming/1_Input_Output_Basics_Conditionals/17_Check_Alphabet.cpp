#include<iostream>
using namespace std;
// alpha -> 1 , num -> 0, special -> -1

int check_alphabet(char ch) {
    if (ch >= '0' && ch <= '9') {
        return 0;
    }
    else if ((ch >= 'a' && ch<='z') || (ch >= 'A' && ch<='Z')) {
        return 1;
    }
    return  -1;
}

int main() {
    char ch;
    cin>>ch;
    cout<<check_alphabet(ch);
}