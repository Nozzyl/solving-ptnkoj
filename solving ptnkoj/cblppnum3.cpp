#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < i * 2; j++) {
            std::cout << j << ' ';
        }
        std::cout << "\n";
    }
}
