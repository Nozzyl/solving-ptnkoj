#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) {cin >> a[i];}
    int even[n]; int odd[n];
    int ev = 0; int od = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) { even[ev] = a[i]; ev++;}
        else {odd[od] = a[i]; od++;}
    }
    std::sort(even, even + ev); std::sort(odd, odd + od, greater<int>());
    for (int i = 0; i < ev; i++) {cout << even[i] << " ";}
    for (int i = 0; i < od; i++) {cout << odd[i] << " ";}
}
