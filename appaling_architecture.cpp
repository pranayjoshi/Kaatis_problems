#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> grid(h);
    for (int i = 0; i < h; i++) {
        cin >> grid[i];
    }

    double total_mass = 0;
    double total_moment = 0;
    int leftmost = w;
    int rightmost = 0;

    for (int i = h - 1; i >= 0; i--) {
        for (int j = w - 1; j >= 0; j--) {
            if (grid[i][j] != '.') {
                total_mass++;
                total_moment += j;
                if (i == 0) {
                    leftmost = min(leftmost, j);
                    rightmost = max(rightmost, j);
                }
            }
        }
    }

    double center_of_gravity = total_moment / total_mass;

    if (center_of_gravity < leftmost) {
        cout << "left" << endl;
    } else if (center_of_gravity > rightmost) {
        cout << "right" << endl;
    } else {
        cout << "balanced" << endl;
    }

    return 0;
}