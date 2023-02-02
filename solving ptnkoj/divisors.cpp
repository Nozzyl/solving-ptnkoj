#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    long long n;
    std::cin >> n;
    std::vector<long long> A; 
    std::vector<long long> B;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            A.push_back(i);
            if (i * i != n) {
                B.push_back(n / i);
            }
        }
    }
    for (long long k: A) {
        std::cout << k << "\n";
    }
    for (long long z = B.size() - 1; z >= 0; z--) {
        std::cout << B[z] << "\n";
    }
    
}
