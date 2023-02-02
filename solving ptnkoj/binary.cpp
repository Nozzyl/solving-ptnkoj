#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	unsigned long long n;
	std::cin >> n;
	std::vector <bool> a;
	while (n)
	{
		a.push_back(n % 2);
		n /= 2;
	}
	unsigned int j = a.size();
	for (int i = j - 1; i >= 0; i--)
	{
		std::cout << a[i];
	}
}
