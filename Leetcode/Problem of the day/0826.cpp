#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
    int findProfit(vector<pair<int, int>>& v, int target) {
        int start = -1;
        int end = v.size();
        int mid = start + (end - start) / 2;
        while (end - start > 1) {
            mid = start + (end - start) / 2;
            if (v[mid].first <= target)
                start = mid;
            else
                end = mid;
        }
        return start;
    }
    // int findProfit(vector<pair<double, int>>& v, int target,
    //                vector<int>& difficulty, vector<int>& profit) {
    //     int n = v.size();
    //     int index = -1;
    //     int maxi = INT_MIN;
    //     for (int i = 0; i < n; i++) {
    //         if (difficulty[(v[i].second)] <= target) {
    //             if (maxi < profit[(v[i].second)]) {
    //                 index = (v[i].second);
    //                 maxi = profit[(v[i].second)];
    //             }
    //         }
    //     }
    //     return index;
    // Time Limit Exceeded;
    // }
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit,
                            vector<int>& worker) {
        vector<pair<int, int>> v;
        int n = profit.size();
        for (int i = 0; i < n; i++) {
            v.push_back({difficulty[i], profit[i]});
        }
        sort(begin(v), end(v));
        vector<pair<int, int>> p;
        int maxi = v[0].second;
        for (auto i : v) {
            maxi = max(maxi, i.second);
            p.push_back({i.first, maxi});
        }
        for (auto i : p)
            cout << i.first << " " << i.second << endl;
        int m = worker.size();
        int ans = 0;

        for (int i = 0; i < m; i++) {
            int index = findProfit(p, worker[i]);
            if (index != -1) {
                ans += p[index].second;
            }
        }
        return ans;
        // Time complexity : O(m*log(n))
        // Space complexity :O(n)
    }
};