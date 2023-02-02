#include <iostream>
#include <iomanip>
#include <unordered_map>

std::unordered_map <std::string, double> planetYears {
	{"Earth", 1}, 
	{"Mercury", 0.2408467},
	{"Venus",0.61519726},
	{"Mars", 1.8808158},
	{"Jupiter", 11.862615},
	{"Saturn", 29.447498},
	{"Uranus", 84.016846},
	{"Neptune", 164.79132}
};

int main()
{
	using std::string, std::cin, std::cout;
	double seconds;
	cin >> seconds;
	string planet;
	cin >> planet;
	double out = (seconds / 31557600) / planetYears[planet];
	cout << std::setprecision(2) << std::fixed << out;
}
