#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n!=0 && n!=INT_MIN && (n&(n-1))==0) return true;
        return false;
    }
};