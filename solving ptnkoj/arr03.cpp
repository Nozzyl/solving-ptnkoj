#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a;
    for (int i = 0; i < n; i++) {
        int z;
        std::cin >> z;
        a.push_back(z);
    }
    int ii = 0;
    for (int i = 1; i < n + 1; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << a[ii] << ' ';
            ii++;
            if (ii == n) return 0;
        }
        std::cout << "\n";
    }
}
