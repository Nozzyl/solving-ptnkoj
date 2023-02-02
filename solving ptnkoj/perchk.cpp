#include <iostream>
using namespace std;

int main()
{
   long long n;
   cin >> n;
   int a [n+1];
   int sum = 0;
   for (int i=0; i<n; i++)
   {
       cin >> a[i];
       sum += a[i];
   }
   int sumN = n*(n+1)/2;
   if (sum == sumN)
   {
       cout << "YES";
   }
   else cout << "NO";
}
