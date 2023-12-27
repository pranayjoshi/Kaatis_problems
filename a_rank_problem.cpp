#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getIndex(vector<string> v, string K)
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


vector<string> removeAndInsert(vector<string> v, int a, int b) {
    string x = v[a];
    v.erase(v.begin() + a);
    v.insert(v.begin() + b, x);
    return v;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> last(n);
    for(int i = 1; i <= n; i++) {
        //int to string = 
        last[i-1] = "T"+to_string(i);
    }
    for(int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;
        if (getIndex(last, a) > getIndex(last, b)) {
            last = removeAndInsert(last, getIndex(last, b), getIndex(last, a));
        }
    }
    for(int i = 0; i < n; i++) {
        cout << last[i] << " ";
    }
    return 0;
}