#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    using std::vector;
    int r, c;
    std::cin >> r >> c;
    int q = r * c;
    vector<long long> A;
    for (int i = 0; i < q; i++) {
        long long z;
        std::cin >> z;
        A.push_back(z);
    }
    std::sort(A.begin(), A.end());
    
    vector<vector<long long>> out;
    for (int i = 0; i < r; i++) {
        vector<long long> p(c, 0);
        out.push_back(p);
    }
    
    int it = 0; 
    int cur_r = 0; 
    int cur_c = 0;
    int max_r = r - 1;
    int max_c = c - 1;
    int min_r = 0; 
    int min_c = 0;
    int dir = 0;
    
    while (it < q) {
        out[cur_r][cur_c] = A[it];
        it++;
        
        switch (dir) {
            case 0:
                if (cur_c < max_c) cur_c++;
                else {
                    cur_r++;
                    min_r++;
                    dir++;
                }
                break;
            case 1:
                if (cur_r < max_r) cur_r++;
                else {
                    cur_c--;
                    max_c--;
                    dir++;
                }
                break;
            case 2:
                if (cur_c > min_c) cur_c--;
                else {
                    cur_r--;
                    max_r--;
                    dir++;
                }
                break;
            case 3:
                if (cur_r > min_r) cur_r--;
                else {
                    cur_c++;
                    min_c++;
                    dir = 0;
                }
                break;
        }
    }
    
    for (vector <long long> L: out) {
        for (long long z: L) {
            std::cout << z << " ";
        }
        std::cout << "\n";
    }
    
}
