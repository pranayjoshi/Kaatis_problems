#include <iostream>
#include <unordered_map>
#include <sstream>
#include <vector>
#include <climits>
#include <iterator>
using namespace std;

int main()
{
    int n, s, m;
    cin >> n >> s >> m;
    vector<int> lst(n);
    for(int i = 0; i < n; i++) {
        cin >> lst[i];
    }
    int hops = 0;
    string status = "";
    s--;
    vector<int> visited(n,0);
    while (true){
        if (s < 0){
            status = "left";
            break;
        }
        if (s >= n){
            status = "right";
            break;
        }
        if (visited[s] > 0){
            status = "cycle";
            break;
        }
        if (lst[s] == m){
            status = "magic";
            break;
        }
        visited[s]++;
        hops++;
        s += lst[s];
    }
    cout << status << endl;
    cout << hops << endl;
    return 0;
}