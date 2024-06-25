#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    long long dp[201][201];
    // Memoization
    // int helper(vector<vector<int>>& grid, int m, int n) {
    //     if (m < 0 || n < 0)
    //         return INT_MAX;
    //     if (m == 0 && n == 0)
    //         return grid[m][n];
    //     if (dp[m][n] != -1)
    //         return dp[m][n];
    //     int p = helper(grid, m - 1, n);
    //     int q = helper(grid, m, n - 1);
    //     return dp[m][n] = grid[m][n] + min(dp[m-1][n],dp[m][n-1]);
    // }

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        dp[0][0] = grid[0][0];
        for (int i = 1; i < m; i++) {
            dp[i][0] = dp[i - 1][0] + grid[i][0]; // rows
            cout << dp[i][0] << endl;
        }
        for (int j = 1; j < n; j++) {
            dp[0][j] = dp[0][j - 1] + grid[0][j]; // columns
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[m - 1][n - 1];
    }
};