#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        bool positive = true;
        int n = s.size();
        string ans;
        int i;
        for (i = 0; i < n; i++) {
            if (s[i] == ' ')
                continue;
            else
                break;
        }
        if (s[i] == '-') {
            positive = false;
            i++;
        }
        else if(s[i]=='+'){
            positive=true;
            i++;
        }
        int j = i;
        for (j = i; j < n; j++) {
            if (s[j] == '0')
                continue;
            else
                break;
        }
        for (int i = j; i < n; i++) {
            if (isdigit(s[i]))
                ans += s[i];
            else
                break;
        }
        cout << ans << endl;
        int m = ans.size();
        long long res = 0;
        for (int i = 0; i < m; i++) {
          if(res<=INT_MAX)  res = (res * 10) + (int)(ans[i] - '0');
        }
         if (res > INT_MAX) {
               if(positive==true) res = INT_MAX;
               else res=INT_MIN;
        }
        if (positive || res==INT_MIN)
            return res;
        return -1 * res;
        // Time complexity : O(n)
        // Space complexity : O(1)
    }
};