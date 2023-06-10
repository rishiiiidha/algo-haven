#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <limits>
#include <climits>
#include <cmath>

using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n = nums.size();
        int sum = 0;
        mp[sum]=1;
        int ans = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            ans+=mp[(sum%k+k)%k];
            mp[(sum%k+k)%k]++;
        }
        return ans;
    }
};