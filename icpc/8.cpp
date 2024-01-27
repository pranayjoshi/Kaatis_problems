#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> f(long long n, long long m) {
    vector<long long> v;
    for (long long i = 1; i * i <= n && i <= m; i++) {
        if (n % i == 0) {
            if (i <= m) v.push_back(i);
            if (n / i != i && n / i <= m) v.push_back(n / i);
        }
    }
    sort(v.begin(), v.end());
    return v;
}

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> v = f(n, m);
    vector<long long> p;
    for (long long i : v) {
        if (n / i <= k) p.push_back(i);
    }
    cout << p.size() << endl;
    for (long long i : p) {
        cout << i << endl;
    }
    return 0;
}