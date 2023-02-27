#include <iostream>
#include <vector>
int main() {
    double z;
    std::vector<double> a;
    while (std::cin >> z) {
        a.push_back(z);
    }
    if (a.size() < 10) std::cout << "THI_LAI";
    else {
        int count = 0;
        for (double k : a) {
            if (k >= 8) count++;
        }
        if (count > 5) std::cout << "D";
        else std::cout << "KD";
    }
}
