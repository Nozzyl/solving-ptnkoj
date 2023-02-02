#include <iostream>
#include <algorithm>
int main()
{
    int n, v; 
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::cin >> v;
    int list[n];
    int li = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] < v)
        {
            list[li] = j;
            li++;
        }
    }
    if (li == 0) std::cout << -1;
    else
    {
        std::sort(list, list + li);
        for (int b = 0; b < li; b++)
        {
            std::cout << list[b] << " ";
        }
    }
}
