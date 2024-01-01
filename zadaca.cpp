#include <iostream>
#include <vector>
#include <numeric>
#define MOD 1000000000

using namespace std;

long long multiply(const vector<int>& numbers) {
    long long result = 1;
    for (int number : numbers) {
        result = (result * number) % MOD;
    }
    return result;
}

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

    long long a = multiply(a_numbers);
    long long b = multiply(b_numbers);

    cout << gcd(a, b) % MOD;

    return 0;
}