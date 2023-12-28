#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

#define ar array
#define ll long long

bool inVector (vector<int> v, int x) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == x) {
            return true;
        }
    }
    return false;
}

void solve() {
    int n; ll sum;
    cin>>n>>sum;
    vector<int> s;
    bool st = false;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0; i < n; i++){
        if (inVector(s, arr[i])) {
            st = true;
            break;
        }
        else {
            int diff = sum - arr[i];

        }
    }
    cout<<(1)<<endl;
}

int main() {
    int tc = 1;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}