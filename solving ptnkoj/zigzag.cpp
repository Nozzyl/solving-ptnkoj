#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string lineMaker(int start, int end, int align) 
{
    string out = "";
    string aln = "";
    for (int i = 0; i < align; i++) { aln = aln + " "; }
    if (start < end) {
        for (int i = start; i <= end; i++) {
            string alni = aln;
            for (int e = 0; e < floor(log10(i) + 1); e++) { alni.pop_back(); }
            out = out + " " + alni + to_string(i);
        }
    }
    else {
        for (int i = start; i >= end; i--) {
            string alni = aln;
            for (int e = 0; e < floor(log10(i) + 1); e++) { alni.pop_back(); }
            out = out + " " + alni + to_string(i);
        }
    }
    out.erase(0, 1);
    return out;
}
int main() 
{
    int n;
    cin >> n;
    int maxDigits = floor(log10(n * n) + 1);
    if (n % 2 == 0) {
        for (int i = 1; i < n * n - n + 1; i += 2 * n) {
            cout << lineMaker(i, i + n - 1, maxDigits) << endl;
            cout << lineMaker(i + 2 * n - 1, i + n, maxDigits) << endl;
        }
    }
    else {
        for (int i = 1; i < n * n - n + 1; i += 2 * n) {
            cout << lineMaker(i, i + n - 1, maxDigits) << endl;
            cout << lineMaker(i + 2 * n - 1, i + n, maxDigits) << endl;
        }
        cout << lineMaker(n * n - n + 1, n * n, maxDigits);
    }
    return 0;
}
