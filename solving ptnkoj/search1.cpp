#include <iostream>
#include <vector>

int main() {
	using std::vector;
	unsigned int n;
	std::cin >> n;
	vector<long> a;
	for (unsigned int i = 0; i < n; i++) {
		long k;
		std::cin >> k;
		a.push_back(k);
	}
	long v;
	std::cin >> v;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] > v) {
			std::cout << i;
			return 0;
		}
	}
	std::cout << -1;
}