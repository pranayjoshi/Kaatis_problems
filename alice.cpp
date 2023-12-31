#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxWeight(vector<int>& arr, int k) {
    int maxWeight = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            int weight = 0;
            while (i < n && arr[i] >= k) {
                weight += arr[i];
                if (arr[i] == k) k--;
                i++;
            }
            maxWeight = max(maxWeight, weight);
        }
    }
    return maxWeight;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << maxWeight(arr, k) << "\n";
    }
    return 0;
}