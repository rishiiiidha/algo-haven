#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m = s.size();
        int n = t.size();
        if (m != n)
            return false;
        unordered_map<char, int> mp, mp2;
        for (int i = 0; i < m; ++i) {
           if(mp[s[i]] && mp[s[i]]!=t[i])
               return false;
           if(mp2[t[i]] && mp2[t[i]]!=s[i])
               return false;
           mp[s[i]] = t[i];
           mp2[t[i]] = s[i];
        }
        return true;
    }
};
