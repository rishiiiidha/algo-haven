#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool possible(vector<int>& piles, long long k, int h) {
        int n = piles.size();
        long long cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += (piles[i] + k - 1) / k;
        }
        return (cnt <= h);
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            mini = min(mini, piles[i]);
            maxi = max(maxi, piles[i]);
        }
        int s = 0;
        int e = maxi + 1;
        int k = 0;
        while (e - s > 1) {
            long long m = s + (e - s) / 2;
            if (possible(piles, m, h)) {
                e = m;
                k = m;
            } else {
                s = m;
            }
        }
        return k;
    }
};