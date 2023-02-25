#include <iostream>

bool perfect(int n) {
    if (n < 6) return false;
    long s = 1;
    for (int i = 2; i * i < n; i++) {
        if (n % i == 0) {
            s += i;
            s += n / i;
        }
    }
    if (s == 1) return false;
    return s == n;
}

int main() {
    int n;
    std::cin >> n;
    for (int i = 5; i < n; i++) {
        if (perfect(i)) std::cout << i << "\n";
    }
}
