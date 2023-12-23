#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

// int minRoomsNeeded(int n, vector<pair<int, int>>& preferences) {
//     sort(preferences.begin(), preferences.end());

//     int rooms = 0;
//     int currentRoomEnd = -1;

//     for (const auto& pref : preferences) {
//         if (pref.first > currentRoomEnd) {
//             currentRoomEnd = pref.second;
//             rooms++;
//         } else {
//             currentRoomEnd = min(currentRoomEnd, pref.second);
//         }
//     }

//     return rooms;
// }

int main() {
    int n, q;
    cin >> n >> q;

    unordered_map<int, int> preferences;
    int restart = -1;
    for (int i = 0; i < q; ++i) {
        string command;
        int val;
        cin >> command >> val;
        if (command == "PRINT"){
            // if val is a key in preferences, print print val value
            // else print restart
            if (find(preferences.begin(), preferences.end(), val) != preferences.end()) {
                cout << preferences[val] << endl;
            } else {
                cout << restart << endl;
            }
            cout << restart << endl;
            continue;
        }
        if (command == "RESTART") {
            restart = val;
            preferences.clear();
        } 
        else if (command == "SET") {
            int val2;
            cin >> val2;
            preferences[val] = val2;
        }
    }

    return 0;
}