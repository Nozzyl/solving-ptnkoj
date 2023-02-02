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
	ll c = 2;
	while (c <= limit)
	{
		out.push_back(c);
		k++;
		c = out[k] + out[k - 1];
	}
	return out;
}

int main()
{
	ll n; 
	std::cin >> n;
	std::vector <ll> out = fibonacci(n);
	for (ll i : out)
	{
		std::cout << i << " ";
	}
}
