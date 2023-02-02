#include <iostream>

int main()
{
    long long n;
    std::cin >> n;
    for (int k = 1;; k++)
    {
        if ((k*(k+1))/2 > n)
        {
            std::cout << k-1 << " ";
            std::cout << ((k-1)*(k))/2;
            break;
        }
    }
}
