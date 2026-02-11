#include<iostream>
using namespace std;

float areaFinderTriangle(int base, int height) {
    return 0.5 * base * height;
}
float perimeterFinderTriangle(int base, int height) {
    return 2 * (base + height);
}

int main() {
    int a, b;
    cin>>a>>b;
    cout<<areaFinderTriangle(a,b)<<endl;;
    cout<<perimeterFinderTriangle(a,b);
}