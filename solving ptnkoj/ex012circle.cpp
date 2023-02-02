#include <iostream>
#include <cmath>

int main()
{
    int xa, ya, r1, xb, yb, r2;
    std::cin >> xa >> ya >> r1 >> xb >> yb >> r2;
    double d = std::sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
    if (d > r1 and d > r2)
    {
        if (d > r1 + r2) std::cout << 0;
        else if (d == r1 + r2) std::cout << 1;
        else std::cout << 2;
    }
    else 
    {
        double rmax = std::max(r1, r2);
        double rmin = r1 + r2 - rmax;
        if (d + rmin < rmax) std::cout << 0;
        else if (d + rmin == rmax) std::cout << 1;
        else std::cout << 2;
    }
}
