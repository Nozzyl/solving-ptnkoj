#include <iostream>
#include <cmath>
typedef long long ll;

ll trailing_zeros(ll n) {
    if (n < 5) return 0;
    if (n == 5) return 1;
    ll p = 5;
    ll c = 0;
    while (p <= n) {
        c += n / p;
        p *= 5;
    }
    return c;
}

int main() {
    ll n;
    std::cin >> n;
    std::cout << trailing_zeros(n);
}
