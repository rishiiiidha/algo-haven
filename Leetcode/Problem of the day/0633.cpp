#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
    bool judgeSquareSum(int c) {
       long long i=0;long long j=(int)sqrt(c);
       if(j*j==c) return true;
       while(i<=j){
           long long k = i*i+j*j;
           if(k==c) return true;
           else if(k<c) i++;
           else j--;
       }
        return false;
    }
};