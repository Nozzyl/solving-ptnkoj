#include <iostream>
using namespace std;

int main() {
    int n;
    int a[10000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << a[j] << ' ';
        }
        cout << endl;
    }
}
