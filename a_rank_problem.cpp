#include <iostream>

using namespace std;


vector<int>  

int main(){
    int n, m;
    vector<int> last(n,0);
    for(int i = 0; i < n; i++) {
        last[i] = i;
    }
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        last[a] = b;
    }
    return 0;
}