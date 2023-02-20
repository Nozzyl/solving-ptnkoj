#include <iostream>
#include <numeric>
typedef unsigned long long ull;

ull multiples(ull x, ull start, ull limit)
{
    if (x > limit - start)
    {
        for (ull i = start; i <= limit; i++)
        {
            if (i % x == 0)
            {
                return 1;
            }
        }
        return 0;
    }
    ull xstart, xend;
    for (ull i = start; i <= limit; i++)
    {
        if (i % x == 0) {
            xstart = i;
            break;
        }
    }
    for (ull i = limit; i >= start; i--)
    {
        if (i % x == 0)
        {
            xend = i;
            break;
        }
    }
    ull diff = xend - xstart;
    ull count = 1 + diff / x;
    return count;
}

int main()
{
    ull L, H, a, b;
    std::cin >> L >> H >> a >> b;
    std::cout << multiples(std::lcm(a, b), L, H);
}