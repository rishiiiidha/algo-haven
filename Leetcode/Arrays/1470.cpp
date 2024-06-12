#include<bits/stdc++.h>
using namespace std;class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
    vector<int> shuffle(vector<int>& nums, int n) {
        int k = 0;
        int CONST = 1001;
        for (int i = 0; i < 2 * n; i++) {
            if (i % 2 == 0) {
                nums[i] = nums[i] + CONST * (nums[k] % CONST);
            } else {
                nums[i] = nums[i] + CONST * (nums[k + n] % CONST);
                k++;
            }
        }
        for (int i = 0; i < 2 * n; i++) {
            nums[i] = nums[i] / CONST;
        }
        return nums;
        // Time complexity :O(n)
        // Space complexity: O(1)
    }
};