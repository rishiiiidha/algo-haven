#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string m = s;
        reverse(m.begin(), m.end());
        return (m == s);
    }
    void helper(vector<vector<string>>& ans, vector<string>& temp, string s,
                int index) {
        if (index == s.size()) {
            ans.push_back(temp);
            return;
        }
        string k;
        for (int i = index; i <= s.size(); i++) {
            k += s[i];
            if (isPalindrome(k)) {
                temp.push_back(k);
                helper(ans, temp, s, i + 1);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        int index = 0;
        helper(ans, temp, s, index);
        return ans;
    }
};