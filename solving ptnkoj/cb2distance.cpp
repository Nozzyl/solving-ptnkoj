#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    // Manhattan's zoning = high density zone
    // Euclidean zoning = single family zone
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    long double highDensityZone = abs(x1-x2) + abs(y1-y2);
    long double singleFamilyZone = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    cout << setprecision(2) << fixed << highDensityZone << endl << singleFamilyZone;
}
