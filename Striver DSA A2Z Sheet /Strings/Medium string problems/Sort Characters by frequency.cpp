#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string frequencySort(string& s) {
        vector<pair<int, int>> v(75, {0, 0});
        for (auto i : s) {
            (v[i - '0'].first)++;
            v[i - '0'].second = i - '0';
        }
        sort(v.begin(), v.end(), greater<pair<int, int>>());
        string ans;
        for (auto i : v) {
            int a = i.first;
            char b = i.second + '0';
            for (int i = 0; i < a; i++) {
                ans.push_back(b);
            }
        }
        return ans;
        // Time complexity : O(N*log(N))
        // Space complexity : O(1)
    }
};