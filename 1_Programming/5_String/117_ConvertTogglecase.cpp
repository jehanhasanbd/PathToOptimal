#include<iostream>
#include<string>

using namespace std;

char makeCharLower(char ch) {
    if (ch >= 'A' && ch<='Z') {
        return ch + 32;
    }
    return ch;
}

string toggleCase(string str) {
    for (int i=0; i<str.length();i++) {
        if (str[i] >= 'A' && str[i]<='Z') {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a' && str[i]<='z') {
            str[i] = str[i] - 32;
        }

    }
    return str;
}


int main() {
    string str;
    getline(cin, str);
    cout<<toggleCase(str)<<endl;

}