#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minRoomsNeeded(int n, vector<pair<int, int>>& preferences) {
    sort(preferences.begin(), preferences.end());

    int rooms = 0;
    int currentRoomEnd = -1;

    for (const auto& pref : preferences) {
        if (pref.first > currentRoomEnd) {
            currentRoomEnd = pref.second;
            rooms++;
        } else {
            currentRoomEnd = min(currentRoomEnd, pref.second);
        }
    }

    return rooms;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> preferences;

    for (int i = 0; i < n; ++i) {
        int start, end;
        cin >> start >> end;
        preferences.push_back({start, end});
    }

    int result = minRoomsNeeded(n, preferences);

    cout << result << endl;

    return 0;
}