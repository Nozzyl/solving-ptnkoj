#include <iostream>
#include <vector>

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

void solution(long long n)
{
    std::vector <long long> listOfPrimes = sieveOfEratosthenes(1000000);
    for (long long p: listOfPrimes)
    {
        if (n % p == 0)
        {
            std::cout << p << " ";
        }
    }

}
int main()
{
    long long n;
    std::cin >> n;
    solution(n);
}
