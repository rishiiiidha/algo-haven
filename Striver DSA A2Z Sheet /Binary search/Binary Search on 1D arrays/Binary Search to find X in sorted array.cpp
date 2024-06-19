#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& v, int x) {
        int s = -1;
        int e = v.size();
        while (e - s > 1) {
            int m = s + (e - s) / 2;
            if (v[m] <= x)
                s = m;
            else
                e = m;
        }
        if(s!=-1 && v[s]!=x) return -1;
        return s;
    }
};