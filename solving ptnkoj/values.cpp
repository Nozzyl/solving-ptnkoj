#include <iostream> 
#include <vector>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;
	std::vector<long> a;
	for (int i = 0; i < n; i++) {
		long k;
		std::cin >> k;
		a.push_back(k);
	}
	std::sort(a.begin(), a.end());
	std::reverse(a.begin(), a.end());
	std::cout << a[0] << ' ';
	for (int i = 1; i < n; i++) {
		if (a[i] != a[i - 1]) {
			std::cout << a[i] << ' ';
		}
	}
}
