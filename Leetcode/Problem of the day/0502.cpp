#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits,
                             vector<int>& capital) {
        int n = profits.size();
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++){
            p.push_back({capital[i],profits[i]});
        }
        sort(p.begin(),p.end());
        priority_queue<int>pq;
        int i=0;
         while(k--){
            while(i<n && p[i].first<=w) {pq.push(p[i].second);i++;}
            if(pq.empty()) break;
            w+=pq.top();
            pq.pop();
         }        
        return w;
        // Time complexity :O(n*log(n))
        // Space complexity : O(n)
    }
};