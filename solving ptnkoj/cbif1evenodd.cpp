#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string out;
    if (n % 2 == 0) {
        out = "Even";
    }
    else { out = "Odd"; }
    cout << out;
}
