#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float a, b;
    cin>>a>>b;
    cout<<setprecision(2)<<fixed<<a<< " + "<<b<< " = "<<a+b<< endl;
    cout<<a<< " - "<<b<< " = "<<a-b<< endl;
    cout<<a<< " * "<<b<< " = "<<a*b<< endl;
    cout<<a<< " / "<<b<< " = "<<a/b;
}
