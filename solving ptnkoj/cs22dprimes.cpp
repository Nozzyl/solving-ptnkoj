#include <iostream>
#include <vector>
#include <cmath>

std::vector <bool> sieveOfAtkin(int limit)
{
    std::vector <bool> sieve;
    for (int i = 0; i <= limit; i++)
        sieve.push_back(false);

    if (limit > 2) sieve[2] = true;
    if (limit > 3) sieve[3] = true;

    for (int x = 1; x * x <= limit; x++)
    {
        for (int y = 1; y * y <= limit; y++)
        {
            int m = 4 * x * x + y * y;
            if (m <= limit and (m % 12 == 1 or m % 12 == 5))
            {
                if (sieve[m]) sieve[m] = false;
                else sieve[m] = true;
            }
            m = 3 * x * x + y * y;
            if (m <= limit and m % 12 == 7)
            {
                if (sieve[m]) sieve[m] = false;
                else sieve[m] = true;
            }
            m = 3 * x * x - y * y;
            if (x > y and m <= limit and m % 12 == 11)
            {
                if (sieve[m]) sieve[m] = false;
                else sieve[m] = true;
            }
        }
    }

    for (int r = 5; r * r <= limit; r++)
    {
        if (sieve[r])
        {
            for (int i = r * r; i <= limit; i += r * r)
                sieve[i] = false;
        }
    }

    return sieve;
}

/*
std::vector <int> primeListFunction(int limit, std::vector <bool> sieve)
{
    std::vector <int> primeList;
    for (int i = 0; i <= limit; i++)
        if (sieve[i]) primeList.push_back(i);
    return primeList;
}
*/
int countPrimeDiv(int number, std::vector <bool> sieve/*std::vector <int> listOfPrimes*/)
{
    int count = 0;
    for (int i = 2; i<=number; i++)
    {
        if (sieve[i])
        {
            while (number % i == 0)
            {
                number /= i;
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int out = 0;
    int start, end, target; // target = targetPrimeDivisorsCount
    std::cin >> start >> end >> target;
    std::vector <bool> sieve = sieveOfAtkin(end);
    // std::vector <int> primeList = primeListFunction(end, sieve);
    if (target == 1)
    {
        for (int i = start; i <= end; i++)
        {
            if (sieve[i]) out++;
        }
    }
    else
    {
        for (int i = start; i <= end; i++)
        {
            if (sieve[i]) continue;
            else
            {
                if (countPrimeDiv(i, sieve) == target) out++;
            }
        }
    }
    std::cout << out;
}
