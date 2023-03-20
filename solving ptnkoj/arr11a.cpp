#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int z;
        std::cin >> z;
        a[i] = z;
    }
    
    int i = 0, i1 = 1;
    int total = a[0];
    while (i1 < n) {
        total += a[i1];
        if (a[i] + 1 != a[i1]) {
            std::cout << "NO " << a[n - 1];
            return 0;
        }
        i++;
        i1++;
    }
    std::cout << "YES " << total;
}
