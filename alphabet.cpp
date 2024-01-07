#include <iostream>

using namespace std;

int main(){
    string n;
    cin >> n;
    unordered_map<char, int> m;
    int count = 0;
    for (int i = 0; i < 26; i++) {
        m['a' + i] = 0;
    }
    for (int i = 0; i < n.size(); i++) {
        m[n[i]]++;
    }
    for (int i = 0; i < 26; i++) {
        if (m['a' + i] == 0) {
            count++;
        }
        if (m['a' + i] > 1) {
            count+= m['a' + i] - 1;
        }
    }
    cout << count << endl;

}