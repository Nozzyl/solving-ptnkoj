#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float a, b; cin >> a >> b; 
    cout << setprecision(2) << fixed << sqrt(a*b);
}
