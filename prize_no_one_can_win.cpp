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

    int counter = 0;
    int total_price = 0;
    for (int i = 0; i < n; i++) {
        if (total_price + prices[i] > x) {
            break;
        }
        if (prices[i] != prices[i-1]) total_price += prices[i];
        counter++;
    }
    if (counter == 0) return 1;
    cout << counter << endl;

    return 0;
}