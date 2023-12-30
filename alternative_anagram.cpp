#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string rearrangeString(string s) {
    int n = s.size();
    set<string> substrings;
    for (int i = 0; i <= n - n/2; i++) {
        substrings.insert(s.substr(i, n/2));
    }
    if (substrings.size() == n - n/2 + 1) return s;
    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
        if (freq[c] > (n + 1) / 2) return "-1";
    }

    vector<pair<int, char> > freqVec;
    for (auto& it : freq) {
        freqVec.push_back(make_pair(it.second, it.first));
    }

    sort(freqVec.rbegin(), freqVec.rend());

    string res(n, ' ');
    int i = 0;
    for (auto& it : freqVec) {
        for (int j = 0; j < it.first; j++) {
            if (i >= n) i = 1;
            res[i] = it.second;
            i += n / 2;
            if (i >= n) i = (i + 1) % (n / 2);
        }
    }

    return res;
}

int main() {
    string s;
    cin >> s;
    cout << rearrangeString(s) << "\n";
    return 0;
}