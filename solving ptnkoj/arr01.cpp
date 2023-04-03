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
    for (int i = n - 1; i >= 0; i--) {
        std::cout << a[i] << ' ';
    }
}
