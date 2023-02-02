#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    cout << setprecision(2) << fixed << (a+b+c+d+e)/5;
}
