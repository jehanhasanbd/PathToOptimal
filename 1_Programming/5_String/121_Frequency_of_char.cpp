#include<iostream>
#include<string>

using namespace std;



void allSameCaseFrequency(string str) {
    int frequency[26] = {0};
    for (int i = 0; i < str.length(); ++i) {
        char ch = tolower(str[i]);
        frequency[ch - 'a']++;
    }
    for (int i = 0; i < 26; ++i) {
        if (frequency[i] != 0) {
            cout<<(char(i + 'a'))<<" --> "<<frequency[i]<<endl;
        }

    }
}

void caseFrequency(string str) {
    int frequencyUp[26] = {0};
    int frequencyLow[26] = {0};
    for (int i = 0; i < str.length(); ++i) {
        if ( str[i] >='a' && str[i]<'z') {
            frequencyLow[str[i] - 'a']++;
        }
        else {
            frequencyUp[str[i] - 'A']++;
        }

    }
    for (int i = 0; i < 26; ++i) {
        if (frequencyUp[i] != 0) {
            cout<<(char(i + 'A'))<<" --> "<<frequencyUp[i]<<endl;
        }
        if (frequencyLow[i] != 0) {
            cout<<(char(i + 'a'))<<" --> "<<frequencyLow[i]<<endl;
        }

    }
}


int main() {
    string str;
    getline(cin, str);
    allSameCaseFrequency(str);
    cout<<endl;
    caseFrequency(str);
}