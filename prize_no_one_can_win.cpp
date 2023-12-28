#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());
    int price = prices[0];
    int counter = 1;
    for (int i = 1; i < n - 1; i++) {
        if (price > x) {
            break;
        }
        price += prices[i];
        counter++;
    }

    cout << counter << endl;

    return 0;
}