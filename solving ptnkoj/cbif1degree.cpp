#include <iostream>
#include <string>
using namespace std;

int main()
{
    int angle;
    int out;
    cin >> angle;
    if (angle < 90) {
        out = 0;
    }
    else if (angle == 90) {
        out = 1;
    }
    else { out = 2; }
    cout << out;
}
