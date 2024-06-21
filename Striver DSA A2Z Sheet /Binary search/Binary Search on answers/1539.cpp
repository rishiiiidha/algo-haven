#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int m) {
        int k = 0;
        int n = arr.size();
        for (int i = 1; i <= 2000; i++) {
            if (k<n && i==arr[k]) {
                k++;
            }
            else{
               m--;    
            }
            if(m==0) return i;
        }
        return 0;
    }
};