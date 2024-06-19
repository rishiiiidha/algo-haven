#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = -1;
        int e = nums.size();
        while(e-s>1){
            int m = s+(e-s)/2;
            if(nums[m]<target) s=m;
            else e=m;
        }
        int k = -1;
        int l = nums.size();
         while(l-k>1){
            int m = k+(l-k)/2;
            if(nums[m]<=target) k=m;
            else l=m;
        }
        if(e>k) return {-1,-1};
        return {e,k};
    }
};