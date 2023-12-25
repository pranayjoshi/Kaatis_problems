#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{   

    vector<int> n(6,0);
    int s, q;
    cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4] >> n[5] >> s >> q;
    sort(n.rbegin(), n.rend());
    vector<int> m(6,0);
    for (int i = 0; i < n.size(); i++) {
        int start = i + 1;
        int end = n.size() - 1;
        while (start < end) {
            int sum = n[i] + n[start] + n[end];
            if (sum == s) {
                m[0] = n[i];
                m[1] = n[start];
                m[2] = n[end];
            } else if (sum > s) {
                start++;
            } else {
                end--;
            }
        }
    }
    for (int i = 0; i < m.size(); i++) {
        cout << m[i] << " ";
        n.erase(std::remove(n.begin(), n.end(), m[i]), n.end());
    }
    for (int i = 0; i < n.size(); i++){
        if (i != 2){
            cout << m[i] << " ";
        }
        else cout << m[i] << endl;
        
    }



    
    return 0;
}