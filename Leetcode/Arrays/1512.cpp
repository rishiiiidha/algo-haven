#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=mp[nums[i]]++;
         
        }
        int cnt=0;
        for(auto i:mp){
            if(i.second>1) {
                int x = i.second;
                cnt+=(x*(x-1))/2;
            }
        }
        return cnt;
    }
};
