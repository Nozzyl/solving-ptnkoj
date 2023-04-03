#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int z;
        std::cin >> z;
        a[i] = z;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << a[j] << ' ';
        }
        std::cout << "\n";
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            std::cout << a[j] << ' ';
        }
        std::cout << "\n";
    }
}
