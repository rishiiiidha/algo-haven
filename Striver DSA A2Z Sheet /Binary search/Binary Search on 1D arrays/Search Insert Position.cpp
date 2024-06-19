#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& v, int x) {
       int s =-1;
       int e = v.size();
       while(e-s>1){
           int m = s+(e-s)/2;
           if(v[m]>=x) e=m;
           else s=m;
       }
       return e;
    }
};
