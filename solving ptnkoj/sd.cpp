#include <iostream>
#include <cmath>

int main()
{
	long long n; 
	std::cin >> n;
	long long out = 0;
	for (long long i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			out += i;
			out += n / i;
		}
	}
	std::cout << out;
}
