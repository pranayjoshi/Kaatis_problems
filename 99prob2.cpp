#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, q;    
    cin >> n, q;
    // int array using cin
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a, b;
        if (a == 1){
            arr[b] = 1 - arr[b];
        }
        else if (a == 2) {
            
        }
    }


}