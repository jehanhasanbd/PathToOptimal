#include<iostream>
#include<string>

using namespace std;



int countWord(string str) {
    int count = 1;
    for (int i=0; i<str.length();i++) {
        if (i>1 && str[i] == ' ' && str[i-1] != ' ') {
            count++;
        }
    }
    return count;
}



int main() {
    string str;
    getline(cin, str);
    cout<<countWord(str)<<endl;
}