#include <iostream>
#include <cmath>

int main()
{
    using std::floor;
    int day, month, year;
    std::cin >> day >> month >> year;
    if (month == 1 or month == 2)
    {
        month += 12;
        year--;
    }
    int yearOfCentury = year % 100;
    int zeroBasedCentury = year / 100;
    int hV = ((int)(day + floor((13 *(month + 1))/ 5) + yearOfCentury + floor(yearOfCentury/4) + floor(zeroBasedCentury/4) - 2*zeroBasedCentury)) % 7;
    std::string daysOfWeek[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    std::cout << daysOfWeek[hV];
}
