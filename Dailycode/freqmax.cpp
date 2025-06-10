#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <limits>
#include <climits>
#include <cmath>

using namespace std;

class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mp;
        for(auto i:s) mp[i]++;
        int maxi = INT_MIN;
        for(auto i:mp){
               int x = i.second;
            for(auto j:mp){
                int y = j.second;
                if(x%2==0 && y%2!=0) maxi = max(maxi, y-x);
                if(x%2!=0 && y%2==0) maxi = max(maxi, x-y);

            }
        }
        return maxi;
    }
};