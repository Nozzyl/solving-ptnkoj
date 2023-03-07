#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[10000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if (n & 1) {
        int k = (n - 1) / 2;
        for (int i = 0; i < k; i++) {
            if (a[i] != a[n - 1 - i]) {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    else {
        int k = n / 2;
        for (int i = 0; i < k; i++) {
            if (a[i] != a[n - 1 - i]) {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
}
