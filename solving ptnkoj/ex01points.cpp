#include <iostream>
#include <cmath>

double d(int x1, int y1, int x2, int y2)
{
    return (double) std::sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main()
{
    int xa, ya, xb, yb, xc, yc;
    std::cin >> xa >> ya >> xb >> yb >> xc >> yc;
    
    double dAB = d(xa, ya, xb, yb);
    double dBC = d(xb, yb, xc, yc);
    double dCA = d(xc, yc, xa, ya);
    
    //std::cout << dAB << " " << dBC << " " << dCA;
    
    if (dAB + dBC == dCA or dCA + dAB == dBC or dBC + dCA == dAB)
    {
        std::cout << "LINE UP!";
    }
    else 
    {
        std::cout << "FALSE";
    }
}
