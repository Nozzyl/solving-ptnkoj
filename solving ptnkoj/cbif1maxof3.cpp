#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b and a >= c) cout << a;
    else if (a >= b and c > c) cout << a;
    else if (b > a and b >= c) cout << b;
    else if (b >= a and b > c) cout << b;
    else if (c > a and c >= b) cout << c;
    else if (c >= a and c > b) cout << c;
    else cout << "All Equal";
}
