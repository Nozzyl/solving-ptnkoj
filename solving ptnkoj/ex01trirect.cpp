#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    long double xa, xb, xc, ya, yb, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    cout << max(max(fabs(xa - xb), fabs(xa - xc)), fabs(xb - xc)) * max(max(fabs(ya - yb), fabs(ya - yc)), fabs(yb - yc));
}
