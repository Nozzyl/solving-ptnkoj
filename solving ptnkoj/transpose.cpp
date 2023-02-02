#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    using std::vector;
    unsigned int m, n;
    std::cin >> m >> n;
    vector<vector<int>> A;
    for (unsigned int i = 0; i < m; i++) {
        vector<int> temp;
        for (unsigned int j = 0; j < n; j++) {
            int k;
            std::cin >> k;
            temp.push_back(k);
        }
        A.push_back(temp);
    }
    
    for (unsigned int c = 0; c < n; c++) {
        for (unsigned int r = 0; r < m; r++) {
            std::cout << A[r][c] << " ";
        }
        std::cout << "\n";
    }
}
