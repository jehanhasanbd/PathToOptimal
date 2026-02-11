#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void allFactors(int n) {
    for (int i = 1; i <= n; ++i) {
        if (n%i == 0) {
            cout<<i<<" ";
        }
    }
}
void allFactorsOpt(int n) {
    vector<int> lowerFactors;
    vector<int> upperFactors;
    for (int i = 1; i*i <= n; ++i) {
        if (n%i == 0) {
            lowerFactors.push_back(i);
            if (i != n/i) {
                upperFactors.push_back(n/i);
            }
        }
    }
    reverse(upperFactors.begin(), upperFactors.end());

    for (auto x: lowerFactors) {
        cout<<x<<" ";
    }
    for (auto x: upperFactors) {
        cout<<x<<" ";
    }

}

int main() {
    int a;
    cin>>a;
    // allFactors(a);
    allFactorsOpt(a);
}