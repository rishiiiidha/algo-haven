#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int ans =0;
        int n=points.size();
        for(int i=0;i<n-1;i++){
            ans=max(ans,points[i+1][0]-points[i][0]);
        }
        return ans;
        //  Time complexity : O(N*log(N))
        //  Space complexity : O(1)
    }
};

