#include <iostream>
#include <vector>
#include <cmath>
typedef unsigned long long ull;
using std::vector, std::string;

class Functions {
   public:
    string binaryConvert(ull num, unsigned int bitCount = 64, unsigned int spaces = 0) {
        string out = "";
        vector<bool> returnedVector = binaryConvertVector(num, bitCount);
        if (spaces) {
            unsigned int s = 0, target = spaces;
            for (unsigned int i = 0; i < bitCount; i++) {
                if (returnedVector[i]) out += "1";
                else out += "0";
                s++;
                if (s == target) {
                    s = 0;
                    out += " ";
                }
            }
        }
        else {
            for (unsigned int i = 0; i < bitCount; i++) {
                if (returnedVector[i]) out += "1";
                else out += "0";
            }
        }
        return out;
    }

   private:
    vector<bool> binaryConvertVector(ull num, unsigned int bitCount = 64) {
        vector<bool> temp(bitCount, false);
        unsigned int iter = 0;
        while (num) {
            temp[iter] = num % 2;
            num /= 2;
            iter++;
        }
        vector<bool> out;
        for (int i = bitCount - 1; i >= 0; i--) out.push_back(temp[i]);
        return out;
    }
};

int main() {
    Functions func;
    unsigned int n;
    std::cin >> n;
    ull k = std::pow(2, n);
    for (ull i = 0; i < k; i++) {
        std::cout << func.binaryConvert(i, n) << "\n";
    }
}
