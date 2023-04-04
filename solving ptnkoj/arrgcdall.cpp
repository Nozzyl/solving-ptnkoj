#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n;
    std::cin >> n;
    std::vector<long long> a;
    for (int i = 0; i < n; i++) {
        long long z;
        std::cin >> z;
        a.push_back(z);
    }
    if (n == 1) {
        std::cout << a[0];
        return 0;
    }
    else if (n == 2) {
        std::cout << std::gcd(a[0], a[1]);
        return 0;
    }
    else {
        long long gcdoft = std::gcd(a[0], a[1]);
        long long x = gcdoft;
        long long  nx;
        for (int i = 2; i < n; i++) {
            nx = std::gcd(x, a[i]);
            x = nx;
        }
        std::cout << x;
    }
}
