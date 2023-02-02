#include <iostream>
#include <vector>
#include <numeric>

std::vector <long long> add(long long a, long long b, long long c, long long d)
{
    long long numerator = a*d + c*b;
    long long denominator = b*d;
    long long divisor = std::gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;
    std::vector <long long> fraction;
    fraction.push_back(numerator);
    fraction.push_back(denominator);
    return fraction;
}

int main()
{
    long long a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::vector <long long> j = add(a, b, c, d);
    std::cout << j[0] << " " << j[1];
}
