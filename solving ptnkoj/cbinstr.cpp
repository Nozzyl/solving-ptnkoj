#include <iostream>
#include <vector>
typedef long long ll;
typedef unsigned long long ull;

ull fibo (ull n) {
    if (n == 1) return 1;
    ull prev = 0, curr = 1;
    
    for (ull i = 1; i < n; i++) {
        ull newfib = prev + curr;
        prev = curr;
        curr = newfib;
    }
    return curr;
}

int main() {
    ull n;
    std::cin >> n;
    std::cout << fibo(n + 2);
}
