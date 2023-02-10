#include <iostream>
#include <vector>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	unsigned int n;
	std::cin >> n;
	std::vector<bool> a(50001, false);
	unsigned int m = 0;
	for (unsigned int i = 0; i < n; i++) {
		unsigned int k;
		std::cin >> k;
		k = ((k + 1) >> 1);
		if (k > m) m = k;
		a[k] = true;
	}
	unsigned int c = 0;
	for (unsigned int i = 0; i <= m; i++) {
		if (a[i]) c++;
	}
	std::cout << c;
}
