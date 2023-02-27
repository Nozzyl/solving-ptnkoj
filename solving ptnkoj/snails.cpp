#include <iostream>
typedef long long ll;

int main() {
    ll a, b, v;
    std::cin >> a >> b >> v;
    if (a >= v) {std::cout << 1;}
    else if (a <= b) {std::cout << -1;}
    else {
        if ((v - b) % (a - b) == 0) std::cout << (v - b) / (a - b);
        else std::cout << (v - b) / (a - b) + 1;
    }
}
