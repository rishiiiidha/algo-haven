#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = -1;                                           
        int e = n;
        int mini = INT_MAX;
        while((e-s)>1){
            int m = s+(e-s)/2;
            if(nums[s+1]<=nums[m]){
               mini = min(mini,nums[s+1]);
               s=m;
            }
            else{
               mini = min(mini, nums[m]);
               e=m;
            }
        }
        return mini;
    }
};