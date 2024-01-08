#include <iostream>
#include <string>

using namespace std;

int main() {
    int a;
    cin >> a;
    string b;
    getline(cin, b);
    string tmp = "";
    int max = 0;
    for (char i : b) {
        if (isdigit(i)) tmp += i;
        else {
            if (!tmp.empty() && stoi(tmp) > max) max = stoi(tmp);
            tmp = "";
        }
    }
    if (!tmp.empty() && stoi(tmp) > max) max = stoi(tmp);
    cout << max << endl;
    return 0;
}