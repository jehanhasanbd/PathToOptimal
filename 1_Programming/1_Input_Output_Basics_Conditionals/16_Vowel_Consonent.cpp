#include<iostream>
using namespace std;

int check_vowel(char ch) {
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u') {
        return 1;
    }
    return 0;
}

int main() {
    char ch;
    cin>>ch;
    cout<<check_vowel(ch);
}