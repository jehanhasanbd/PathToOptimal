#include<iostream>
using namespace std;

string checkGrade(int marks) {
    if (marks >= 90) {
        return "A";
    }
    if (marks >= 85) {
        return "A-";
    }
    if (marks >= 80) {
        return "B+";
    }
    return "F";
}

int main() {
    int a;
    cin>>a;
    cout<<checkGrade(a);
}