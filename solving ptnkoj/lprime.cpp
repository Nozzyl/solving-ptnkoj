#include <iostream>

long long repeatedMultiplication(long long a, long long b, long long divisor)
{
    if (b == 0)
        return 0LL;

    long long half = repeatedMultiplication(a, b / 2LL, divisor) % divisor;

    if (b & 1)
        return (half + half + a) % divisor;
    else
        return (half + half) % divisor;
}

long long modEx(long long a, long long b, long long divisor)
{
    if (b == 0)
        return 1LL;

    long long half = modEx(a, b / 2LL, divisor) % divisor;
    long long product = repeatedMultiplication(half, half, divisor);

    if (b & 1)
        return repeatedMultiplication(product, a, divisor);
    else
        return product;
}

bool fermatPrimalityTest(long long n, long long k = 50)
{
    if (n < 4)
        return n == 2 or n == 3;

    if (n != 2 && n % 2 == 0)
        return false;

    for (long long i = 1; i <= k; ++i)
    {
        long long a = 2 + rand() % (n - 3);
        if (modEx(a, n - 1, n) != 1)
            return false;
    }

    return true;
}

int main() {
    long long n; 
    std::cin >> n;
    for (long long i = n; i >= 0; i--) {
        if (fermatPrimalityTest(i)) {
            std::cout << i;
            break;
        }
    }
}
