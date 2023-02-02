#include <iostream>

int main()
{
    int l, r;
    std::cin >> l >> r;
    int count = 0;
    for (int y = l; y <= r; y++)
    {
        for (int x = l; x < y; x++)
        {
            if (y % x == 0) {count++;}
        }
    }
    std::cout << count;
}
