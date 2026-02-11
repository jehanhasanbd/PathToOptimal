#include<iostream>
#include<string>

using namespace std;



string replaceSpace(string str) {
    string newStr = "";
    for (int i=0; i<str.length();i++) {
        if (str[i] == ' ') {
            newStr += '-';
        }
        else {
            newStr += str[i];
        }
    }
    return newStr;
}



int main() {
    string str;
    getline(cin, str);
    cout<<replaceSpace(str)<<endl;

}