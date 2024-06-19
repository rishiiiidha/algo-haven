#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = -1;
        int e = n;
        int m;
        while ((e - s) > 1) {
            m = s + (e - s) / 2;
            if (nums[m] == target)
                return true;
            else {
                if(nums[s+1]==nums[m] && nums[m]==nums[e-1]) {
                    s++;
                    e--;
                    continue;
                }
                if (nums[s + 1] <= nums[m]) {
                    if (m!=0 && target >= nums[s + 1] && target <= nums[m-1])
                        e = m;
                    else
                        s = m;
                } else {
                    if (m!=n-1 && target >= nums[m+1] && target <= nums[e - 1])
                        s = m;
                    else
                        e = m;
                }
            }
        }
        if (s == -1 || s == n || nums[s] != target) {
                return false;
        }
        return true;
    }
};