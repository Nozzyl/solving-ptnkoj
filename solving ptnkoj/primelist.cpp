#include <iostream>
#include <vector>
using std::vector;

vector <long long> sieveOfEratosthenes(long long limit) {
    vector<bool> primeStatus(limit + 1, true);
    primeStatus[0] = primeStatus[1] = false;
    
    for (long long i = 2; i * i <= limit; ++i) {
        if (primeStatus[i]) {
            for (long long j = i*i; j <= limit; j += i) {
                primeStatus[j] = false;
            }
        }
    }
    
    vector<long long> primeList;
    for (long long i = 0; i <= limit; ++i) {
        if (primeStatus[i]) {
            primeList.push_back(i);
        }
    }
    return primeList;
}

int main() {
    int n;
    std::cin >> n;
    vector<long long> out = sieveOfEratosthenes(n);
    for (long long i: out) {
        std::cout << i << "\n";
    }
}
