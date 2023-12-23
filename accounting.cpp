#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    unordered_map<int, int> preferences;
    int restart = 0;
    for (int i = 0; i < q; ++i)
    {
        string command;
        int val;
        cin >> command >> val;
        if (command == "PRINT")
        {
            if (preferences.find(val) != preferences.end())
            {
                cout << preferences[val] << endl;
            }
            else
            {
                cout << restart << endl;
            }
            continue;
        }
        if (command == "RESTART")
        {
            restart = val;
            preferences.clear();
        }
        else if (command == "SET")
        {
            int val2;
            cin >> val2;
            preferences[val] = val2;
        }
    }

    return 0;
}