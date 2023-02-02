#include <iostream>
#include <vector>
typedef long long ll;

std::vector <ll> fibonacci(ll limit)
{
	using std::vector;
	vector <ll> out;
	out.push_back(1);
	out.push_back(1);
	ll k = 1;
	ll curr = 2;
	while (curr < limit)
	{
		out.push_back(curr);
		k++;
		curr = out[k] + out[k - 1];
	}
	return out;
}

std::vector <bool> sieveOfEratosthenes(long long limit)
{
    std::vector <bool> primeStatus(limit + 1, true);
    primeStatus[0] = primeStatus[1] = false;

    for (long long i = 2; i * i <= limit; ++i)
        if (primeStatus[i])
            for (long long j = i * i; j <= limit; j += i)
                primeStatus[j] = false;
    return primeStatus;
}

int main()
{
    using std::vector;
    long long n;
    std::cin >> n;
    vector <bool> primeCheck = sieveOfEratosthenes(n);
    vector <ll> fibList = fibonacci(n);
    ll fs = fibList.size();
    for (int i = fs - 1; i >= 0; i--)
    {
        if (primeCheck[fibList[i]])
        {
            std::cout << fibList[i];
            break;
        }
    }
}
