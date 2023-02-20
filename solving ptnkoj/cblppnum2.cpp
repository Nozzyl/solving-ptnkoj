#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int t = 1;
    int it = 1;
    int i = 1;
    while (i <= n) {
        std::cout << i << ' ';
        i++;
        it++;
        if (it > t) {
            std::cout << "\n";
            t++;
            it = 1;
        }
    }
}
