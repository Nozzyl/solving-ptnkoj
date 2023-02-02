#include <iostream>
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    unsigned short int n;
    std::cin >> n;
    std::cout << (n | 1);
}
