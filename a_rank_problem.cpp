#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);
    if (it != v.end()) {
        int index = it - v.begin();
        return index;
    }
    else {
        return -1;
    }
}

vector<int> removeAndInsert(vector<int> v, int a, int b) {
    int x = v[a];
    v.erase(v.begin() + a);
    v.insert(v.begin() + b, x);
    return v;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> last(n,0);
    for(int i = 1; i <= n; i++) {
        last[i-1] = i;
    }
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        if (getIndex(last, a) > getIndex(last, b)) {
            last = removeAndInsert(last, getIndex(last, b), getIndex(last, a));
        }
    }
    for(int i = 0; i < n; i++) {
        cout << "T" << last[i] << " ";
    }
    return 0;
}