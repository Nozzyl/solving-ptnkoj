#include <iostream>
#include <vector>

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

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int k;
        std::cin >> k;
        a[i] = k;
    }
    long long primeTotal = 0;
    std::vector<bool> isPrime = sieveOfAtkin(11000);
    for (int i = 0; i < n; i++) {
        if (isPrime[a[i]]) {
            primeTotal += a[i];
        }
    }
    if (primeTotal == 0) {
        std::cout << -1;
    }
    else std::cout << primeTotal;
}
