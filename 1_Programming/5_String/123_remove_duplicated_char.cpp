#include<iostream>
#include<string>

using namespace std;



string removeDuplicate(string str) {
    string removedDuplicate = "";
    for (int i = 0; i < str.length(); ++i) {
        if ( removedDuplicate.find(str[i]) != string::npos) {
            continue;
        }
        removedDuplicate += str[i];
    }
    return removedDuplicate;
}



int main() {
    string str;
    getline(cin, str);
    cout<<removeDuplicate(str);

}