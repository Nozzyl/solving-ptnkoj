#include <iostream>
#include <cmath>

int main() {
    int n; std::cin >> n;
    std::cout << std::floor(std::log10(std::abs(n)))+1;
}
