#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float a, b; cin >> a >> b;
	float c = sqrt(a * a + b * b);
	cout << setprecision(2) << fixed << a + b + c << endl;
	cout << setprecision(2) << fixed << (a * b) / 2;
}
