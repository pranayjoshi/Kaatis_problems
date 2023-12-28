#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n; ll sum;
    cin>>n>>sum;
    stack<int> s;
    
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0; i < n; i++){
        if(arr[i]+arr[i-1]>x){
            i--;
        }else{
            break;
        }
    }
    cout<<(i+1)<<endl;
}

int main() {
    int tc = 1;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}