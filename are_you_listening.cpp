#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    cout << "Enter coordinates of first circle center (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of second circle center (x2 y2): ";
    cin >> x2 >> y2;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "The distance between the two circle centers is: " << distance << endl;

    return 0;
}