#include <iostream>

using namespace std;


vector<int> removeAndInsert(vector<int> v, int a, int b) {
    int index = getIndex(v, a);
    v.erase(v.begin() + index);
    v.insert(v.begin() + index, b);
    return v;
}

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

int main(){
    int n, m;
    vector<int> last(n,0);
    for(int i = 0; i < n; i++) {
        last[i] = i;
    }
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        if (getIndex(last, a) > getIndex(last, b)) {
            last = removeAndInsert(last, getIndex(last, a), getIndex(last, b));
        }
    }
    for(int i = 0; i < n; i++) {
        cout << "T" << last[i] << endl;
    }
    return 0;
}