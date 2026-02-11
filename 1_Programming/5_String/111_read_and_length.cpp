#include<iostream>
#include<string>

using namespace std;

int lenString(string str) {
    int i=0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    string str;
    cin>>str;
    cout<<lenString(str);
}