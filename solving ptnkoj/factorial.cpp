#include <iostream>
#include <cmath>
using namespace std;

long long factorial(int inp) {
    long long out = 1;
    long long modd = 1000000007;
    for (int i = 1; i <= inp; i++) {
        out = ( out * i ) % modd; 
    }
    return out;
}

int main() {
    int n; cin >> n;
    cout << (factorial(n));
}
