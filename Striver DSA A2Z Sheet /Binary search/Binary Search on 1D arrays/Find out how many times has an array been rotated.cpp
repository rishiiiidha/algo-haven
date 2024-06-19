#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int findKRotation(int arr[], int n) {
        int s = -1;                                           
        int e = n;
        int mini = INT_MAX;
        int index = -1;
        while((e-s)>1){
            int m = s+(e-s)/2;
            if(arr[s+1]<=arr[m]){
               if(mini > arr[s+1]){
                   mini=arr[s+1];
                   index=s+1;
               }
               s=m;
            }
            else{
               if(mini > arr[m]){
                   mini=arr[m];
                   index=m;
               }
               e=m;
            }
        }
        return index;

	}

};