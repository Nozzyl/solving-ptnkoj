#include <iostream>
#include <cmath>
#include <vector>

std::vector <long long> sieveOfAtkin(long long limit)
{
    std::vector <bool> sieve;
    for (int i = 0; i <= limit; i++)
        sieve.push_back(false);
    
    if (limit > 2) sieve[2] = true;
    if (limit > 3) sieve[3] = true;
    
    for (long long x = 1; x*x <= limit; x++)
    {
        for (long long y = 1; y*y <= limit; y++)
        {
            long long m = 4*x*x + y*y;
            if (m <= limit and (m%12==1 or m%12==5))
            {
                if (sieve[m]) sieve[m] = false;
                else sieve[m] = true;
            }
            m = 3*x*x + y*y;
            if (m <= limit and m%12==7)
            {
                if (sieve[m]) sieve[m] = false;
                else sieve[m] = true;
            }
            m = 3*x*x - y*y;
            if (x > y and m <= limit and m%12==11)
            {
                if (sieve[m]) sieve[m] = false;
                else sieve[m] = true;
            }
        }
    }
    
    for (long long r = 5; r*r <= limit; r++)
    {
        if (sieve[r])
        {
            for (long long i = r*r; i <= limit; i += r*r) 
                sieve[i] = false;
        }
    }
    
    std::vector <long long> primeList;
    for (long long i = 0; i <= limit; i++)
    {
        if (sieve[i]) primeList.push_back(i);
    }
    return primeList;
}

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

void solution(long long n)
{
    std::vector <long long> listOfPrimes = sieveOfAtkin((long long)std::cbrt(n) + 2);
    long long finalResult = 1;
    for (long long p: listOfPrimes)
    {
        if (p * p * p > n)
            break;

        long long count = 0;
        while (n % p == 0)
        {
            n /= p;
            ++count;
        }

        finalResult *= (count + 1);
    }
    
    if (fermatPrimalityTest(n))
        finalResult *= 2LL;
    else
    {
        long long squareRootOfN = std::sqrt(n);
        if (squareRootOfN * squareRootOfN == n and fermatPrimalityTest(squareRootOfN))
            finalResult *= 3;
        else if (n != 1)
            finalResult *= 4;
    }

    std::cout << finalResult;
}
int main()
{
    long long n;
    std::cin >> n;
    solution(n);
}
