#include <iostream>
#include <unordered_map>
#include <algorithm>

int getPairsCount(int arr[], int n, int k)
{
    std::unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (m.find(k - arr[i]) != m.end()) {
            count += m[k - arr[i]];
        }
        m[arr[i]]++;
    }
    return count;
}

int main()
{
    int n;
    std::cin >> n;
    int arr[100000];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    int sum;
    std::cin >> sum;
    std::cout << getPairsCount(arr, n, sum);
}