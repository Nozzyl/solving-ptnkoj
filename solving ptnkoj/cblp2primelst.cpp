#include <iostream>
#include <vector>
#include <cmath>
// industrial-grade

std::vector <long long> sieveOfEratosthenes(long long limit)
{
    std::vector <bool> primeStatus(limit + 1, true);
    primeStatus[0] = primeStatus[1] = false;

    for (long long i = 2; i * i <= limit; ++i)
        if (primeStatus[i])
            for (long long j = i * i; j <= limit; j += i)
                primeStatus[j] = false;

    std::vector <long long> primeList;
    for (long long i = 2; i <= limit; ++i)
        if (primeStatus[i])
            primeList.push_back(i);

    return primeList;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector <long long> listOfPrimes = sieveOfEratosthenes((long long)std::pow(10, n));
    int m = 0;
    int limit[6] = {0, 4, 25, 168, 1229, 9592};
    for (int i = 0; i < limit[n]; i++)
    {
        if (std::floor(std::log10(listOfPrimes[i])) + 1 == n)
        {
            m = i;
            break;
        }
    }
    for (int j = m; j < limit[n]; j++)
    {
        std::cout << listOfPrimes[j] << " ";
    }
    return 0;
}
