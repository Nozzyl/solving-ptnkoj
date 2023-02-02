#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    long long a[5]; for (int i = 0; i < 5; i++) {cin >> a[i];}
    sort(a, a+5);
    if (a[1] % a[0] == 0 and a[2] % a[0] == 0 and a[3] % a[0] == 0 and a[4] % a[0] == 0) {
        cout << "Yes";
    }
    else cout << "No";
}
