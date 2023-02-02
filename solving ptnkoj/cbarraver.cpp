#include <iostream>
#include <vector>

int main() {
	int n;
	long k;
	std::cin >> n >> k;
	std::vector<long> a;
	for (int i = 0; i < n; i++) {
		long z; 
		std::cin >> z; 
		a.push_back(z);
	}
	bool none = true;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((a[i] + a[j]) == k * 2) {
				std::cout << i + 1 << ' ' << j + 1 << "\n";
				none = false;
			}
		}
	}
	if (none) {
		std::cout << -1;
	}

}
