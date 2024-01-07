#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    unordered_map<int, int> map;
    for (int i = 0; i < b; i++) {
        int x;
        cin >> x;
        vector<int> v;
        for (int i = 0; i < x; i++) {
            cin >> v[i];
            
        }
        map[x] = i;
    }
}