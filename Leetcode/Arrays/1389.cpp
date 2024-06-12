#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
      int n = nums.size();
      vector<int>ans;
      for(int i=0;i<n;i++){
         auto it = ans.begin();
         ans.insert(it+index[i],nums[i]);
      }
      return ans;
    }
};

// Time complexity : O(n*n)
// Space complexity : O(n)