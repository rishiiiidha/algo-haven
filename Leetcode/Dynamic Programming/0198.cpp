#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[401];
    Solution() { memset(dp, -1, sizeof(dp)); }
    int getHelper(vector<int>& nums, int n) {
        if (n <= 0)
            return 0;
        if (dp[n] != -1)
            return dp[n];
        int x = nums[n - 1] + getHelper(nums, n - 2);
        int y = getHelper(nums, n - 1);
        return dp[n] = max(x, y);
    }
    int rob(vector<int>& nums) {
        // Recursive function
        // take no-take approach
        int n = nums.size();
        // return getHelper(nums,n);
        // This will give us tle now so we use memoization
        // time complexity now will be almost : O(n)

        // 1d array-DP approach
        // base conditions: if(n<=0) return 0;
        // if(n<2) return nums[0];
        // int t[n];
        // t[0] = nums[0];
        // t[1] = max(nums[0], nums[1]);
        // for (int i = 2; i < n; i++)
        //     t[i] = max(t[i - 1], nums[i] + t[i - 2]);
        // return t[n - 1];
        // Time complexity : O(n)
        // Space complexity :O(n)

        // 1d array-DP approach with space complexity -O(1)
        if (n < 2)
            return nums[0];
        int a = nums[0];
        int b = max(nums[0], nums[1]);
        int ans = max(a,b);
        for (int i = 2; i < n; i++) {
            int x = ans;
            ans = max(b, nums[i] + a);
            b = ans;
            a = x;
        }
        return ans;
        // Time complexity : O(n)
        // Space complexity :O(1)
    }
};