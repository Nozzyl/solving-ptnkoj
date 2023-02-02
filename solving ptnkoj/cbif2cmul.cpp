#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[5]; for (int i = 0; i < 5; i++) {cin >> a[i];}
    sort(a, a+5);
    if (a[4] % a[0] == 0 and a[4] % a[1] == 0 and a[4] % a[2] == 0 and a[4] % a[3] == 0) {
        cout << "Yes";
    }
    else cout << "No";
}
