#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cx, cy, n;
    cin >> cx >> cy >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y, r;
        cin >> x >> y >> r;
        double distance = sqrt(pow(x - cx, 2) + pow(y - cy, 2));
        cout << distance << endl;
    }
}