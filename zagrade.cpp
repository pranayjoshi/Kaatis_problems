#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <stack>

using namespace std;

vector<vector<int>> generate_combinations(vector<pair<int, int>>& pairs) {
    vector<vector<int>> combinations;
    int n = pairs.size();
    for (int i = 0; i < (1 << n); i++) {
        vector<int> combination;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                combination.push_back(pairs[j].first);
                combination.push_back(pairs[j].second);
            }
        }
        combinations.push_back(combination);
    }
    return combinations;
}

set<string> generate_all(string& original, vector<pair<int, int>>& pairs) {
    set<string> collect;
    vector<vector<int>> combinations = generate_combinations(pairs);
    for (vector<int>& combination : combinations) {
        string result;
        for (int i = 0; i < original.size(); i++) {
            if (find(combination.begin(), combination.end(), i) == combination.end()) {
                result += original[i];
            }
        }
        collect.insert(result);
    }
    return collect;
}

int main() {
    stack<int> stk;
    vector<pair<int, int>> pairs;
    string original;
    cin >> original;
    for (int i = 0; i < original.size(); i++) {
        if (original[i] == '(') {
            stk.push(i);
        } else if (original[i] == ')') {
            pairs.push_back({stk.top(), i});
            stk.pop();
        }
    }
    set<string> results = generate_all(original, pairs);
    for (const string& result : results) {
        cout << result << endl;
    }
    return 0;
}