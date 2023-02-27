#include <iostream>

void solve() {
    double a[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> a[i];
    }
    int counter = 0;
    for (double i : a) {
        if (i >= 8) {
            counter++;
        }
    }
    if (counter >= 5) {
        std::cout << 'D';
    }
    else std::cout << "KD";
}

int main() {
    solve();
}
