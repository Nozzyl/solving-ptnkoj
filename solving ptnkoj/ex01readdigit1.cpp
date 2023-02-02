#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n; cin >> n;
    bool know = true;
    if (n < 0 or n > 99)
    {
        cout << "I don't know!";
        know = false;
    }
    if (know)
    {
        string a[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        if (n < 10) cout << a[n];
        else
        {
            
            cout << a[(int)floor(n/10)] << " " << a[n%10];
        }
    }
}
