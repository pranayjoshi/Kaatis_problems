#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int solution(vector<int>& A, int N) {
    int n = N;

    if (n < 2) {
        return 0;
    }

    unordered_map<int, int> sumCount;

    int moves = 0;

    for (int i = 0; i < n; i++) {
        int currentSum = A[i] + A[n - i - 1];

        if (sumCount.find(currentSum) != sumCount.end()) {
            sumCount[currentSum]++;
        } else {
            sumCount[currentSum] = 1;
        }

        moves = max(moves, sumCount[currentSum]);
    }

    return moves;
}