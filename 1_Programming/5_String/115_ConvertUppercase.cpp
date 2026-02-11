#include<iostream>
#include<string>

using namespace std;

char makeCharUpper(char ch) {
    if (ch >= 'a' && ch<='z') {
        return ch - 32;
    }
    return ch;
}


string capitalize(string str) {
    for (int i=0; i<str.length();i++) {
        if (str[i] >= 'a' && str[i]<='z') {
            if (i==0) {
                str[i] = str[i] - 32;
            }
            else if (i>0 && str[i-1]==' ') {
                str[i] = str[i] - 32;
            }
        }

    }
    return str;
}
string uppercase(string str) {
    for (int i=0; i<str.length();i++) {
        if (str[i] >= 'a' && str[i]<='z') {
            str[i] = str[i] - 32;
        }

    }
    return str;
}


int main() {
    string str;
    getline(cin, str);
    cout<<capitalize(str)<<endl;
    cout<<uppercase(str)<<endl;

}