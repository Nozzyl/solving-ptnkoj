#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a;
    for (int i = 0; i < n; i++) {
        int z;
        std::cin >> z;
        a.push_back(z);
    }
    if (n == 1) {
        std::cout << a[0];
        return 0;
    }
    else if (n == 2) {
        std::cout << std::lcm(a[0], a[1]);
        return 0;
    }
    else {
        int lcmoft = std::lcm(a[0], a[1]); // lowest common multiple of first two
        int x = lcmoft;
        int nx;
        for (int i = 2; i < n; i++) {
            nx = std::lcm(x, a[i]);
            x = nx;
        }
        std::cout << x;
    }
}
