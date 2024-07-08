#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

int min_cost_to_non_decreasing(vector<int>& A) {
    int n = A.size();
    vector<int> dp(n, numeric_limits<int>::max());

    // Base case: the cost to make the first element non-decreasing is 0
    dp[0] = 0;

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            // Type 1 operation cost from j to i
            int cost_type1 = 0;
            for (int k = j; k <= i; ++k) {
                cost_type1 += abs(A[k] - A[j]);
            }

            // Type 2 operation cost from j to i
            int cost_type2 = 0;
            for (int k = j; k <= i; ++k) {
                cost_type2 += abs(A[k] - A[i]);
            }

            // Update dp[i] considering both operations
            dp[i] = min(dp[i], dp[j] + min(cost_type1, cost_type2));
        }
    }

    return dp[n - 1];
}

int main() {
    vector<int> A = {1,2,2,1,4,1,4,5};
    cout << "Minimum cost to make the array non-decreasing: " << min_cost_to_non_decreasing(A) << endl;
    return 0;
}
