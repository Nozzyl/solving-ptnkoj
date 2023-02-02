#include <iostream>
#include <vector>
#include <cmath>

std::vector <long long> local1(long long local2)
{
    std::vector <bool> local3;
    for (int i = 0; i <= local2; i++)
        local3.push_back(false);
    
    if (local2 > 2) local3[2] = true;
    if (local2 > 3) local3[3] = true;
    
    for (long long x = 1; x*x <= local2; x++)
    {
        for (long long y = 1; y*y <= local2; y++)
        {
            long long m = 4*x*x + y*y;
            if (m <= local2 and (m%12==1 or m%12==5))
            {
                if (local3[m]) local3[m] = false;
                else local3[m] = true;
            }
            m = 3*x*x + y*y;
            if (m <= local2 and m%12==7)
            {
                if (local3[m]) local3[m] = false;
                else local3[m] = true;
            }
            m = 3*x*x - y*y;
            if (x > y and m <= local2 and m%12==11)
            {
                if (local3[m]) local3[m] = false;
                else local3[m] = true;
            }
        }
    }
    
    for (long long r = 5; r*r <= local2; r++)
    {
        if (local3[r])
        {
            for (long long i = r*r; i <= local2; i += r*r) 
                local3[i] = false;
        }
    }
    
    std::vector <long long> local4;
    for (long long i = 0; i <= local2; i++)
        if (local3[i]) local4.push_back(i);
	
    return local4;
}

bool local5(long long local6, std::vector <long long> local7)
{
    for (long long local8: local7)
    {
        if (local6 % local8 == 0)
        {
            long long var1 = local8;
            long long var2 = local6 / local8;
            bool local13 = false;
            for (long long local82: local7)
            {
                if (local82 == var1)
                {
                    local13 = true;
                    break;
                }
            }
            bool local14 = false;
            for (long long local83: local7)
            {
                if (local83 == var2)
                {
                    local14 = true;
                    break;
                }
            }
            if (local13 and local14) return true;
        }
    }
    return false;
}

int main()
{
    using std::vector, std::cin, std::cout;
    int local10; cin >> local10;
    vector <long long> local9;
    for (int iterator = 0; iterator < local10; iterator++)
    {
        long long temp; cin >> temp;
        local9.push_back(temp);
    }
    int local11 = 0;
    vector <long long> local4 = local1(1000000);
    for (long long el: local9)
    {
        if (local5(el, local4))
        {
            local11++;
        }
    }
    cout << local11;
}
