#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

int main() {
    using std::vector;
    int N;
    std::cin >> N;
    vector<int> ti;
    for (int i = 0; i < N; i++) {
        int z;
        std::cin >> z;
        ti.push_back(z);
    }
    double total = 0;
    for (int z : ti) {
        total += z;
    }
    double average = total / N;
    std::cout << std::setprecision(2) << std::fixed << average << "\n";
    int count = 0; 
    for (int z : ti) {
        if (z > average) {
            count++;
        }
    }
    std::cout << count;
}