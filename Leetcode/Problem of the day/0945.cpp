#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
    }
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans=0;
        for (int i = 1; i < n; i++) {
            if (nums[i-1] >= nums[i] ) {
                ans+=(1+nums[i-1]-nums[i]);
                nums[i]=1+nums[i-1];
            }
        }
        return ans;
        // Time complexity : O(n*log(n));
        // Space complexity : O(1)
    }
};