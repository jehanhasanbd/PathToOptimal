#include<iostream>
#include<string>

using namespace std;

string reverseStr(string str) {
    int left=0, right = str.length() -1;
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
    return str;
}

int main() {
    string str;
    cin>>str;
    cout<<reverseStr(str);
}