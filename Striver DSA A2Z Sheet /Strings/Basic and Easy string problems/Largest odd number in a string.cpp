#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
       int n = num.size();
       int index = -1;
       for(int i=0;i<n;i++){
        if((num[i]-'0')&1){
            index=i;
        }
       }
       return num.substr(0,index+1);
    }
};
