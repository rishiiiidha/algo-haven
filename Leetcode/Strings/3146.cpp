#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int>mp;
        int k=0;
        for(auto i:t){
            mp[i]=k;
            k++;
        }
        
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
             ans+=abs(i-mp[s[i]]);
        }
        // Time complexity : O(n)
        // Space complexity : O(n)
        return ans;
    }
};