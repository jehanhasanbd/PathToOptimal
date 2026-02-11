#include<iostream>
#define PI 3.1416
using namespace std;

float areaFinderCircle(int r) {
    return PI * r * r;
}
float perimeterFinderCircle(int r) {
    return 2 * PI * r;
}

int main() {
    int r;
    cin>>r;
    cout<<areaFinderCircle(r)<<endl;;
    cout<<perimeterFinderCircle(r);
}