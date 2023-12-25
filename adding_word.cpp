#include <iostream>
#include <unordered_map>
#include <sstream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    unordered_map<string, int> rst;
    string line;
    while (getline(cin, line)) {
        istringstream iss(line);
        vector<string> lst((istream_iterator<string>(iss)), istream_iterator<string>());

        if (lst[0] == "clear") {
            rst.clear();
        } else if (lst[0] == "def") {
            rst[lst[1]] = stoi(lst[2]);
        } else if (lst[0] == "calc") {
            if (rst.find(lst[1]) == rst.end()) {
                cout << line.substr(5) << " unknown\n";
                continue;
            }
            int res = rst[lst[1]];
            for (size_t i = 3; i < lst.size() - 1; i += 2) {
                if (rst.find(lst[i]) == rst.end()) {
                    res = INT_MIN;
                    break;
                }
                if (lst[i - 1] == "+") {
                    res += rst[lst[i]];
                } else if (lst[i - 1] == "-") {
                    res -= rst[lst[i]];
                }
            }
            string res_str = "unknown";
            for (const auto& pair : rst) {
                if (pair.second == res) {
                    res_str = pair.first;
                    break;
                }
            }
            cout << line.substr(5) << " " << res_str << "\n";
        }
    }
    return 0;
}