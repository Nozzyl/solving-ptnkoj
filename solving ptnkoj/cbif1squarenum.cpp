#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string out;
    if (sqrt(n) == int(sqrt(n))) {
        out = "Yes";
    }
    else { out = "No"; }
    cout << out;
}
