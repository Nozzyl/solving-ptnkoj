#include <iostream>
#include <vector>

long long digitSum(long long num) {
	long long out = 0;
	while (num > 0) {
		out = out + num % 10;
		num /= 10;
	}
	return out;
}

int main() {
	int n;
	std::cin >> n;
	std::vector<long> a;
	for (int i = 0; i < n; i++) {
		long z;
		std::cin >> z;
		long long k = digitSum(z);
		a.push_back(k);
	}

	long count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j]) count++;
		}
	}
	std::cout << count;
}
