#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float a, b, h; cin >> a >> b >> h;
    double diff = (b - a)/2;
    double hyp = sqrt(diff*diff + h*h);
    double perimeter = a + b + 2*hyp;
    double area = ((a + b)/2)*h;
    cout << setprecision(2) << fixed << perimeter << endl << area;
}
