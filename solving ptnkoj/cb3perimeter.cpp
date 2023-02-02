#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
    // calculate point (a, b) to (c, d)
    int a_c = a - c; int b_d = b - d;
    double abcd = sqrt(a_c*a_c+b_d*b_d);
    int a_e = a - e; int b_f = b - f;
    double abef = sqrt(a_e*a_e+b_f*b_f);
    int c_e = c - e; int d_f = d - f;
    double cdef = sqrt(c_e*c_e+d_f*d_f);
    cout << setprecision(2) << fixed << (abcd + abef + cdef);
}
