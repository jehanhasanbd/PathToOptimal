#include<iostream>
#include<algorithm>

using namespace std;

int oneRotationToAnother(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return 0;
    }
    int n = str1.length();
    string temp = str1 + str1;
    for (int i = 0; i <= n; ++i) {
        string subStr =  temp.substr(i,n);
        if (subStr == str2) {
            return 1;
        }
    }
    return 0;
}

int main() {
    string str1, str2;
    cin>>str1>>str2;
    cout<<oneRotationToAnother(str1, str2);
}