#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(auto i:address){
            if(i=='.') ans+="[.]";
            else ans+=i;
        }
        return ans;
        // Time complexity :O(n)
        // Space complexity :O(n)
    }
};