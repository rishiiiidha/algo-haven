#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool possible(vector<int>& nums, long long divisor, int threshold) {
        int n = nums.size();
        long long cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += (nums[i] + divisor - 1) / divisor;
        }
        return cnt <= threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int mini = 1;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
            maxi = max(maxi, nums[i]);
        int s = mini - 1;
        int e = maxi + 1;
        int ans = 0;
        while (e - s > 1) {
            long long m = s + (e - s) / 2;
            if (possible(nums, m, threshold)) {
                ans = m;
                e = m;
            } else {
                s = m;
            }
        }
        
        return ans;
        // Time complexity : O(n*log(n))
        // Space complexity : o(1)
    }
};