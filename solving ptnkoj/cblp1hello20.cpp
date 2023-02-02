#include <iostream>

int main()
{
    while (true)
    {
        int n;
        std::cin >> n;
        if (n == 20)
        {
            std::cout << "Hello!";
            break;
        }
        else std::cout << "Waiting...\n";
    }
}
