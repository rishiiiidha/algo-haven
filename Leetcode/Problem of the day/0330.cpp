#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long sum = 1;
        int i =0;
        int patches = 0;
        int k = nums.size();
        while(sum<=n){
            if(i<k && nums[i]<=sum) sum+=nums[i++];
            else {sum+=sum; patches++;}
        }
        return patches;
        // Time complexity : O(n)
        // Space complexity : O(1)
    }
};