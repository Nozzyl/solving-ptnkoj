#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int z;
    vector<int> a;
    int kk = 0;
    while (cin >> z) {
        a.push_back(z);
        kk++;
    }
    int i = 0, i1 = 1;
    int min = lcm(a[0], a[1]);
    while (i1 < kk) {
        int k = lcm(a[i], a[i1]);
        if (k < min) {min = k;}
        i++;
        i1++;
    }
    cout << min;
}
