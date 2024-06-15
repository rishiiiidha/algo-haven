#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        unordered_map<char,int>j;
        for(auto i:jewels){
            j[i]=1;
        }
        for(auto i:stones){
            if(j.find(i)!=j.end()) ans++;
        }
        return ans;
        // Time complexity :O(n)
        // Space complexity : O(n)
    }
};