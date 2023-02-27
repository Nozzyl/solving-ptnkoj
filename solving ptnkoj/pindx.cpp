#include <iostream>
#include <vector>
typedef unsigned long long ull;
typedef long long ll;

std::vector <bool> sieveOfAtkin(long long limit)
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
    return sieve;
}

ull factorial(ull num, ull mod) {
    if (num == 0 or num == 1) return 1;
    ull out = 1;
    for (ull i = 2; i <= num; i++) {
        out = (out * i) % mod;
    }
    return out;
}

int main() {
    const ull m = 1000000007;
    ull n;
    std::cin >> n;
    if (n == 2) {
        std::cout << 1;
        return 0;
    }
    std::vector<bool> isPrime = sieveOfAtkin(n);
    ull countPrimes = 0;
    for (bool b : isPrime) {
        if (b) countPrimes++;
    }
    std::cout << (factorial(countPrimes, m) * factorial(n - countPrimes, m)) % m;
}
