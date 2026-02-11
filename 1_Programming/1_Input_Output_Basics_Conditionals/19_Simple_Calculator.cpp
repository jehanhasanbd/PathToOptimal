#include<iostream>
using namespace std;

float calculator(float a,char op, float b) {
    if (op == '+') {
        return a+b;
    }
    if (op == '-') {
        return a-b;
    }
    if (op == '*') {
        return a*b;
    }
    if (op == '/') {
        return (float)a/b;
    }
    return -1;
}

float calculatorSwitch(float a,char op, float b) {
    switch (op) {
        case '+':
            return a+b;
            break;
        case '-':
            return  a-b;
            break;
        case '*':
            return a * b;
            break;
        case '/':
            return a/ b;
            break;
        default:
            return -1;
    }
}

int main() {
    float a, b;
    char op;
    cin>>a;
    cin>>op;
    cin>>b;
    cout<<calculator(a,op,b)<<endl;
    cout<<calculatorSwitch(a,op,b);
}