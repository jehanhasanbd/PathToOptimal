#include <iostream>
#include <vector>
using namespace std;

int solve(int n) {
    if (n<1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int fib(int n) {
    return solve(n);
}

int main() {

}