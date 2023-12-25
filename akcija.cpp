#include <iostream>
#include <unordered_map>
#include <sstream>
#include <vector>
#include <climits>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> lst(n);
    int s=0;
    for(int i = 0; i < n; i++) {
        cin >> lst[i];
        s+=lst[i];
    }
    sort(lst.rbegin(), lst.rend());
    int sum = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        if ((i+1)%3 == 0)
        {
            sum += lst[i];
        }
    }
    cout << s-sum << endl;
}