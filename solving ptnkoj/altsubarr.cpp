#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int z;
        std::cin >> z;
        a[i] = z;
    }
    
    int m = 1;
    bool tfs; // test for smaller
    for (int i = 0; i < n - 1; i++) {
        int k = 1;
        int j = i + 1;
        
        if (a[i] == a[j]) continue;
        else if (a[i] > a[j]) tfs = true;
        else tfs = false;
        k++;
        j++;
        while (j < n) {
            if (a[j - 1] == a[j]) break;
            if (tfs) {
                if (a[j - 1] < a[j]) {
                    k++;
                    tfs = false;
                }
                else break;
            }
            else {
                if (a[j - 1] > a[j]) {
                    k++;
                    tfs = true;
                }
                else break;
            }
            j++;
        }
        
        if (k > m) m = k;
    }
    std::cout << m;
}
