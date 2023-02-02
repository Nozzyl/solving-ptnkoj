#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    // a*x + b = 0
    double a, b; cin >> a >> b;
    double x = b * -1/a;
    cout << setprecision(3) << fixed << x;
}
