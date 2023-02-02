#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string out;
    if (n == 0) {
        out = "None";
    }
    else if (n < 0) {
        out = "BC";
    }
    else if (n % 100 == 0) {
        if (n % 400 == 0) {
            out = "Leap";
        }
        else {out = "No leap";}
    }
    else if (n % 4 == 0) {
        out = "Leap";
    }
    else {
        out = "No leap";
    }
    cout << out;
}
