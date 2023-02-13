#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    unsigned int n;
    std::cin >> n;
    std::vector<unsigned int> a(n);
    for (unsigned int i = 0; i < n; i++) {
        unsigned int k;
        std::cin >> k;
        a[i] = k;
    }

    int i2 = n - 1, i1 = n - 2, i = n - 3;
    while (i >= 0) {
        unsigned int total = a[i] + a[i1] + a[i2];
        unsigned int max = *std::max_element(a.begin() + i, a.begin() + i2 + 1);
        if (total - max > max) {
            std::cout << i + 1;
            return 0;
        }
        i--;
        i1--;
        i2--;
    }
    std::cout << -1;
}