#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	long double a, b, c; cin >> a >> b >> c;
	long double delta = b*b - 4*a*c;
	if (a==0) {
		if (b==0) {
			if (c==0) {cout << "Infinity solution";}
			else {cout << "No solution";} 		
		}
		else {cout << setprecision(3) << fixed << -c/b;} 
	}
	else {
		if (delta < 0) {cout << "No solution";}
		else if (delta == 0) {cout << setprecision(3) << fixed << (-b)/(2*a);}
		else {
			cout << setprecision(3) << fixed << (-b-sqrt(delta))/(2*a) << endl;
			cout << setprecision(3) << fixed << (-b+sqrt(delta))/(2*a);
		}
	}	
}
