#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long double a, b; cin >> a >> b;
    if (a == 0)
    {
        if (b == 0) cout << "Infinity Solution";
        else cout << "No Solution";
    }
    else {
        long double x = b / a * -1;
        cout << setprecision(3) << fixed << x;
    }
}
