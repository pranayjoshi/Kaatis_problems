#include <iostream>
#include <vector>
#include <numeric>
#define MOD 1000000000

using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    vector<int> a_numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> a_numbers[i];
    }

    int m;
    cin >> m;
    vector<int> b_numbers(m);
    for (int i = 0; i < m; i++) {
        cin >> b_numbers[i];
    }

    long long a = 1;
    for (int i = 0; i < n; i++) {
        a = gcd(a * a_numbers[i], MOD);
    }

    long long b = 1;
    for (int i = 0; i < m; i++) {
        b = gcd(b * b_numbers[i], MOD);
    }

    cout << gcd(a, b) % MOD;

    return 0;
}