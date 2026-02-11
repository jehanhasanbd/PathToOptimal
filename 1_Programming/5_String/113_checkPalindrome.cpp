#include<iostream>
#include<string>

using namespace std;

int checkPalindrome(string str) {
    string prevStr =str;
    int left=0, right = str.length() -1;
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
    return  prevStr == str;
}

int main() {
    string str;
    cin>>str;
    cout<<checkPalindrome(str);
}