#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> dp(26, 0);
    int max_len = 0;
    for (char c : s) {
        dp[c - 'a'] = *max_element(dp.begin(), dp.begin() + (c - 'a')) + 1;
        max_len = max(max_len, dp[c - 'a']);
    }
    cout << 26 - max_len << endl;
    return 0;
}