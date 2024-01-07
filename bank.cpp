#include <iostream>
#include <cmath>
#include <unordered_map>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    unordered_map<int, int> map;
    for (int i = 0; i < a; i++) {
        int ci, ti;
        cin >> ci >> ti;
        if (ti <= b) {
            map[ti] < ci ? map[ti] = ci : map[ti] = map[ti];
        }
        else {
            for (int i = b-1; i <=0; i--) {
                map[i] < ci ? map[i] = ci : map[i] = map[i];
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < b; i++) {
        sum += map[i];
    }
    cout << sum << endl;
}