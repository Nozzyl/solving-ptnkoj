#include <cmath>
#include <iostream>

int main()
{
    long long n;
    std::cin >> n;
    if (n==0) std::cout << 1;
    else {
    long long k = 1;
    for (long long i = 1; i <= n; i++)
    {
        k *= i;
    }
    std::cout << k;}
}
