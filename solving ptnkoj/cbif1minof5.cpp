#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[5]; for (int i = 0; i < 5; i ++) {cin >> a[i];}
    if (a[0] == a[1] and a[1] == a[2] and a[2] == a[3] and a[3] == a[4]) {
        cout << "All Equal";
    } 
    else {
        sort(a, a + 5); cout << a[0];   
    }
}
