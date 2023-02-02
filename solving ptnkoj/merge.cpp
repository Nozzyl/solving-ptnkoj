#include <iostream>

using namespace std;

void merge(int arr[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    
    int L[n1]; int M[n2];
    
    for (int i = 0; i < n1; i++) {
        L[i] = arr[p + i];
    }
    for (int j = 0; j < n2; j++) {
        M[j] = arr[q + 1 + j];
    }
    
    int i = 0; int j = 0; int k = p;
    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i]; i++;
        }
        else {arr[k] = M[j]; j++;}
        k++;
    }
    
    while (i < n1) {arr[k] = L[i]; i++; k++;}
    while (j < n2) {arr[k] = M[j]; j++; k++;}
}

int main() {
    int m, n; cin >> m >> n; 
    int a[m+n];
    for (int i = 0; i < m+n; i++) {cin >> a[i]; /*cout << a[i] << " ";*/}
    // cout << endl;
    merge(a, 0, m-1, m+n-1);
    for (int i = 0; i < m+n; i++) {cout << a[i] << " ";}
}
