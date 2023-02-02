#include <iostream>

int main()
{
    unsigned int n;
    int z;
    std::cin >> n >> z;
    bool breakflag = false;
    for (unsigned int i = 0; i < n; i++)
    {
        int k; std::cin >> k;
        if (k == z) 
        {
            std::cout << "Present!"; 
            breakflag = true;
            break;
        }
    }
    if (!breakflag) std::cout << "None";
}
