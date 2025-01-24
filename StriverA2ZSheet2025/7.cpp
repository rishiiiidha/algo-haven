// Pass by Reference and Value
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> passedBy(int a, int &b)
    {
        vector<int> ans;
        a += 1;
        b += 2;
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};
