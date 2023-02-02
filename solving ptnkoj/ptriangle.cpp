#include <bits/stdc++.h>
using namespace std;
  
void printPascal(int n) {
    long long arr[n][n]; 
    for (long long line = 0; line < n; line++) {
        for (long long i = 0; i <= line; i++) {
        if (line == i || i == 0) {arr[line][i] = 1;}
        else {arr[line][i] = arr[line - 1][i - 1] + arr[line - 1][i];}
        cout << arr[line][i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n; cin >> n;
    printPascal(n + 1);
    return 0;
}
