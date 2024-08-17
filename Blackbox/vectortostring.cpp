#include<bits/stdc++.h>
using namespace std;

string vectorToString(vector<int>&nums){
    string ans;
    for(auto i:nums){
        ans = ans + to_string(i);
    }
    return ans;
}