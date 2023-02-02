#include <iostream>
using namespace std;

// start of mergeSort() and its supporting methods
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

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int midpoint = l + ((r - l) / 2);
        
        mergeSort(arr, l, midpoint);
        mergeSort(arr, midpoint + 1, r);
        
        merge(arr, l, midpoint, r);
    }    
}
// end of mergeSort() and its supporting methods

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    mergeSort(a, 0, n - 1);
    int unique[n]; int z = 1;
    unique[0] = a[0]; 
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i-1]) {
            unique[z]= a[i]; z++;
        }
    }
    for (int i = z - 1; i >= 0; i--) {cout << unique[i] << " ";}
}
