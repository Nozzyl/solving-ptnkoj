#include <iostream>
#include <algorithm>

int getPairsCount(int arr[], int n, int k) {
    std::sort(arr, arr + n);
    int x = 0, c = 0, y, z;
    for (int i = 0; i < n - 1; i++) {
        x = k - arr[i];
        int y = std::lower_bound(arr + i + 1, arr + n, x) - arr;
        int z = std::upper_bound(arr + i + 1, arr + n, x) - arr;
        c = c + z - y;
    }
    return c;
}

int main() {
    int n; 
    std::cin >> n;
    int arr[100000];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    int k;
    std::cin >> k;
    std::cout << getPairsCount(arr, n, k);
    return 0;
}