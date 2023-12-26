#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int cx, cy, n;
    cin >> cx >> cy >> n;
    vector<int> pq;
    for (int i = 0; i < n; i++)
    {
        int x, y, r;
        cin >> x >> y >> r;
        int distance = sqrt(pow(x - cx, 2) + pow(y - cy, 2));
        pq.push_back(distance - r);
    }
    sort(pq.begin(), pq.end());
    if (pq[2] < 0)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << pq[2] << endl;
}