#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int>& v, int key) {
        int n = v.size();
        int start = -1;
        int end = n;

        while ((end - start) > 1) {
            int mid = (start + end ) / 2;
            if (v[mid] <= key) {
                start = mid;
            } else
                end = mid;
        }
        return end;
    }