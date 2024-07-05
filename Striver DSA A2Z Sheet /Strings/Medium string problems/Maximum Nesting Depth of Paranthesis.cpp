#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        queue<char> q;
        int cnt = 0;
        int ans = INT_MIN;
        for (auto i : s) {
            if (i == '(') {
                cnt++;
                q.push(i);
                ans=max(ans,cnt);
            } else if (i == ')') {
                {
                    if (!q.empty())
                        if (q.back() == '(') {
                            cnt--;
                            q.pop();
                        }
                }
            }
        }
        ans = max(ans, cnt);
        return ans;
        // Time complexity : O(n)
        // Space complexity : O(n)
    }
};