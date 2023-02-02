#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    string out;
    if (a > b + c or b > a + c or c > a + b) {
        out = "None";
    }
    else if (a == b and b == c) { out = "Equilateral"; }
    else if (a == sqrt(2) * c / 2 and b == sqrt(2) * c / 2) {
        out = "Right Isosceles";
    }
    else if (c == sqrt(2) * b / 2 and a == sqrt(2) * b / 2) {
        out = "Right Isosceles";
    }
    else if (b == sqrt(2) * a / 2 and c == sqrt(2) * a / 2) {
        out = "Right Isosceles";
    }
    else if (a == b or b == c or c == a) {
        out = "Isosceles";
    }
    else if (a * a == b * b + c + c or b * b == a * a + c * c or c * c == b * b + a * a) {
        out = "Right";
    }
    else { out = "Scalene"; }
    cout << out;
}
