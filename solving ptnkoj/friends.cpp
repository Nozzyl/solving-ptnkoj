#include <iostream>
typedef long long ll;

ll sd(ll n) {
    if (n == 1) return 0;
    ll c = 1;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            c += i;
            if (i != n / i) {
                c += n / i;
            }
        }
    }
    return c;
}

bool friends(ll a, ll b) {
    return (sd(a) == b and sd(b) == a);
}

int main() {
    int t;
    std::cin >> t;
    long long a[1000];
    for (int i = 0; i < t * 2; i++) {
        std::cin >> a[i];
    }
    
    for (int i = 0; i < t * 2; i += 2) {
        if (friends(a[i], a[i + 1])) std::cout << "YES";
        else std::cout << "NO";
        std::cout << std::endl;
    }
}
