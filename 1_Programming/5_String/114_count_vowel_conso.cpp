#include<iostream>
#include<string>

using namespace std;

char makeLower(char ch) {
    if (ch >= 'A' && ch<='Z') {
        return ch + 32;
    }
    return ch;
}

void charType(string str, int &vowel, int &consonant, int &digit) {
    for (int i=0; i<str.length();i++) {
        cout<<str[i]<<" ";
        if (str[i]>='0' && str[i]<='9') {
            digit++;
        }
        else if (makeLower(str[i]) ==  'a' || makeLower(str[i]) ==  'e' || makeLower(str[i]) ==  'i' || makeLower(str[i]) ==  'o' || makeLower(str[i]) ==  'u') {
            vowel++;
        }
        else if (str[i] != ' '){
            consonant++;
        }
    }
}

int main() {
    string str;
    getline(cin, str);
    int vowel=0, consonant =0, digit =0;
    charType(str, vowel, consonant, digit);
    cout<<vowel<<" "<<consonant<<" "<<digit;
}