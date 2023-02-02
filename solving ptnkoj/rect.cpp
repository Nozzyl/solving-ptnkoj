#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{   
    float perimeter, area;
    cin >> perimeter >> area;
    float length;
    float width;
    if (perimeter / 4 == sqrt(area))
    {
        // the shape is a square
        length = perimeter / 4;
        width = length;
    }
    else 
    {
        float semiPerimeter = perimeter / 2;
        // the shape is a rectangle, solve quadratic equation 1x*x-semiPerimeter+area=0
        float discriminant = semiPerimeter * semiPerimeter - 4 * 1 * area;
        width = (semiPerimeter - sqrt(discriminant)) / 2;
        length = (semiPerimeter + sqrt(discriminant)) / 2;
    }
    cout << setprecision(2) << fixed << width << endl;
    cout << setprecision(2) << fixed << length;
}
