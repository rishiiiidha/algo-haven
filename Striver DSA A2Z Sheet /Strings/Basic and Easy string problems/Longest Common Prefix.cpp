#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==1) return strs[0];
        string common = strs[0];
        for(int i=1;i<n;i++){
           int m = common.size();
           int k = strs[i].size();
           int s = min(m,k);
           string temp;
           for(int j=0;j<s;j++){
            if(common[j]==strs[i][j]) temp+=common[j];
            else break;
           }
           common = temp;
        }
        return common;
    }
};