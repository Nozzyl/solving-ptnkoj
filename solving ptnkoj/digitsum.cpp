#include <iostream>
#include <string>

int main() {
	long long n; 
	std::cin >> n;
	std::string s = std::to_string(n);
	long long t = 0;
	for (char c : s) {
		int k = int(c) - '0';
		t += k;
	}
	std::cout << t;
}
