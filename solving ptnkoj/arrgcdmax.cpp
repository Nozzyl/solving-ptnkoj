#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int z;
        std::cin >> z;
        a[i] = z;
    }
    int i = 0, i1 = 1;
    int m = std::gcd(a[0], a[1]);
    while (i1 < n) {
        int x = std::gcd(a[i], a[i1]);
        if (x > m) m = x;
        i++;
        i1++;
    }
    std::cout << m;
}
