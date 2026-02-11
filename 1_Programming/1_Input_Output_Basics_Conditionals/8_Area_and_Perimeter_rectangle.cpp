#include<iostream>
using namespace std;

int areaFinder(int x, int y) {
    return x * y;
}
int perimeterFinder(int x, int y) {
    return 2 * (x + y);
}

int main() {
    int a, b;
    cin>>a>>b;
    cout<<areaFinder(a,b)<<endl;;
    cout<<perimeterFinder(a,b);
}