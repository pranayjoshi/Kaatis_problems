#include <iostream>

using namespace std;

int main() {
    string s, s2;
    cin >> s;
    cin >> s2;
    if (s.size() >= s2.size()) {
        cout << "go" << endl;
        return 0;
    }
    else {
        cout << "no" << endl;
        return 0;
    }
}