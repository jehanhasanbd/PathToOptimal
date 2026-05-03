#include<iostream>
#include<algorithm>

using namespace std;

void findSubstrOccur(string str1, string str2) {

    int n = str1.length(), count = 0;
    for (int i = 0; i < n; ++i) {
        for (int len = 1; len <= n-i; ++len) {
            string temp = str1.substr(i,len);
            if (temp == str2) {
                count++;
            }
        }
    }
}

int main() {
    string str1, str2;
    cin>>str1>>str2;
    findSubstrOccur(str1, str2);
}