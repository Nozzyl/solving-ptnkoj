#include <iostream>
#include <algorithm>
// industrial-grade

int main()
{
    int n; std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    
    std::sort(a, a+n);
    
    int axp = a[n-1];
    int anp = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[0])
        {
            anp = a[i]; break;
        }
    }
    for (int i = n-2; i >= 0; i--)
    {
        if (a[i] != a[n-1])
        {
            axp = a[i]; break;
        }
    }

    std::cout << a[n-1] << " " << axp << std::endl;
    std::cout << a[0] << " " << anp;
}
