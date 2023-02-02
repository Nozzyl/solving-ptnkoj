#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    using std::vector;
    int m, n;
    std::cin >> m >> n;
    vector <long> A;
    vector <long> B;
    for (int i = 0; i < m; i++) {
        long z; 
        std::cin >> z;
        A.push_back(z);
    }
    for (int i = 0; i < n; i++) {
        long k;
        std::cin >> k;
        B.push_back(k);
    }
    
    std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end());
    
    int j = 0, i = 0;
    int count = 0;
    while (j < m and i < n) {
        if (A[j] < B[i]) {
            j++;
        }
        else {
            if (A[j] == B[i]) {
                count++;
            }
            i++;
        }
    }
    std::cout << count;
}
