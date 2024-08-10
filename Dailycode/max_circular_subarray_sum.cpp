#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int circularSubarraySum(int arr[], int num){
        int sum=0;
        int maxi=INT_MIN;
        int mini=0;
        int total=0;
        int curr=0;
        for(int i=0;i<num;i++){
            total+=arr[i];
            curr+=arr[i];
            mini=min(mini,curr);
            if(curr>0) curr=0;
        }
        for(int i=0;i<num;i++){
            sum+=arr[i];
            maxi=max(maxi,sum);
            if(sum<0) sum=0;
        }
        if(maxi<0) return maxi;
        return max(total-mini,maxi);
    }
};