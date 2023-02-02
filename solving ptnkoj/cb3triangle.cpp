#include <bits/stdc++.h>
int main() {
    using namespace std;
    float a, b, c;
    std::cin >> a >> b >> c;
    float p = (a + b + c) / 2;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    std::cout << std::setprecision(2) << std::fixed << s;
}
