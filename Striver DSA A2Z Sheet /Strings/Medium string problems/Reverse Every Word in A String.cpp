#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string temp;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') {
                if (temp.size() > 0)
                    v.push_back(temp);
                temp.clear();
            } else
                temp += s[i];
        }
        if (temp.size() > 0)
            v.push_back(temp);
        temp.clear();
        reverse(v.begin(),v.end());
        int k = v.size();
        string ans;
        for(int i=0;i<k-1;i++){
                ans+=v[i];
                ans+=" ";
        }
        ans+=v[k-1];
        return ans;
    }
};