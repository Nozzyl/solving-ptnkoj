#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string out;
    if (n > 0) { out = "Positive"; }
    else { out = "Negative"; }
    cout << out;
}
