#include<iostream>
#include<cmath>
using namespace std;

void findRoot(int a,int b,int c, float &root1, float &root2) {
    int discriminant = b*b - 4*a*c;
    if (discriminant == 0) {
        root1 = -b /( 2.0 *a);
        root2 = -b / (2.0 *a);
        return;
    }
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant))/(2.0*a);
        root2 = (-b - sqrt(discriminant))/(2.0*a);
        return;
    }
    cout<<"Roots are imaginary";
}

int main() {
    float root1 = -1, root2 = -1;
    int a,b,c;
    cin>>a>>b>>c;
    findRoot(a,b,c,root1, root2);
    cout<<root1<<" "<<root2;
}