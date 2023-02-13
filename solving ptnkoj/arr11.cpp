#include <iostream> 
#include <vector>
int main() {
	unsigned int n;
	std::cin >> n;
	std::vector<int> A(n);
	for (unsigned int i = 0; i < n; i++) {
		int k;
		std::cin >> k;
		A[i] = k;
	}
	
	int i = 0, i1 = 1;
	while (i1 < n) {
		if (A[i1] - 1 != A[i]) {
			std::cout << "NO ";
			unsigned long total = 0;
			for (int k : A) {
				total += k;
			}
			std::cout << total;
			return 0;
		}
		i1++;
		i++;
	}

	std::cout << "YES " << A[n - 1];
}