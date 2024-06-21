#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool f(vector<int>& bloomDay, int mid, int m, int k) {
        int n = bloomDay.size();
        int cnt = 0;
        int boquets = 0;
        for (int i = 0; i < n; i++) {
            if (bloomDay[i] <= mid)
                cnt++;
            else {
                boquets += ((cnt) / k);
                cnt = 0;
            }
        }
        boquets += ((cnt) / k);
        return (boquets >= m);
    }
    int minDays(vector<int>& bloomDay, int m, int k) {

        long long n = bloomDay.size();
        if (n < (long long)m * k)
            return -1;
        int maxi = INT_MIN;
        int mini = INT_MAX;

        for (int i = 0; i < n; i++) {
            maxi = max(maxi, bloomDay[i]);
            mini = min(mini, bloomDay[i]);
        }


        mini = mini - 1;
        maxi = maxi + 1;
        while ((maxi - mini) > 1) {
            int mid = (mini) + ((maxi - mini) / 2);
            if (f(bloomDay, mid, m, k)) {
                maxi = mid;
            } else
                mini = mid;
        }
        return maxi;
    }
};
