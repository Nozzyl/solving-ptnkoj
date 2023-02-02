#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	using std::vector;
	unsigned int m, n, p;
	std::cin >> m >> n >> p;
	vector<vector<long>> A;
	for (int i = 0; i < m; i++) {
		vector<long> temp;
		for (int i = 0; i < n; i++) {
			long k;
			std::cin >> k;
			temp.push_back(k);
		}
		A.push_back(temp);
	}
	vector<vector<long>> B;
	for (int i = 0; i < n; i++) {
		vector<long> temp;
		for (int i = 0; i < p; i++) {
			long k;
			std::cin >> k;
			temp.push_back(k);
		}
		B.push_back(temp);
	}
	
	for (int r = 0; r < m; r++) {
		for (int c = 0; c < p; c++) {
		    long long cz = 0;
			for (int i = 0; i < n; i++) {
				cz += A[r][i] * B[i][c];
			}
			std::cout << cz << " ";
		}
		std::cout << "\n";
	}
}
