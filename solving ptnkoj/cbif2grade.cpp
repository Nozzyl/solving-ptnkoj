#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float n; cin >> n;
    if (n >= 9 and n <= 10) cout << "Xuat sac";
    else if (n >= 8 and n < 9) cout << "Gioi";
    else if (n >= 7 and n < 8) cout << "Kha";
    else if (n >= 5 and n < 7) cout << "Trung binh";
    else if (n >= 0 and n < 5) cout << "Kem";
    else cout << "Loi!";
}
