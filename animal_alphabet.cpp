#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string a;
    cin >> a;

    int t;
    cin >> t;

    vector<string> l(t);
    for (int i = 0; i < t; i++) {
        cin >> l[i];
    }

    vector<string> out;
    for (const auto& i : l) {
        if (i[0] == a.back()) {
            out.push_back(i);
        }
    }

    if (out.empty()) {
        cout << "?" << endl;
    } else {
        bool q = true;
        for (const auto& i : out) {
            for (const auto& j : l) {
                if (j[0] == i.back()) {
                    q = false;
                }
            }
            if (!q) {
                cout << i << "!" << endl;
                break;
            }
        }
        if (q) {
            cout << out[0] << endl;
        }
    }

    return 0;
}