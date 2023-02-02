#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    using std::cin, std::cout;
    int n;
    cin >> n;
    long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    std::sort(a, a + n);
    long long l = a[0] * a[1];
    long long r = a[n - 1] * a[n - 2];
    
    if (l > r) cout << l;
    else cout << r;
}
