#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mp(char s) {
        if (s == 'I')
            return 1;
        else if (s == 'V')
            return 5;
        else if (s == 'X')
            return 10;
        else if (s == 'L')
            return 50;
        else if (s == 'C')
            return 100;
        else if (s == 'D')
            return 500;
        else
            return 1000;
    }
    int romanToInt(string s) {
        int n = s.size();
        int ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (i == n - 1)
                ans += mp(s[i]);
            else {
                if (mp(s[i + 1]) > mp(s[i]))
                    ans -= mp(s[i]);
                else
                    ans += mp(s[i]);
            }
        }
        return ans;
        // Time complexity : O(n)
        // Space complexity : O(1)
    }
};