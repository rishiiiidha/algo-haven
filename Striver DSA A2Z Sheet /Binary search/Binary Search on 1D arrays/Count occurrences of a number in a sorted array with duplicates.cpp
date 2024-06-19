#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	            int s = -1;
        int e = n;
        while(e-s>1){
            int m = s+(e-s)/2;
            if(arr[m]<x) s=m;
            else e=m;
        }
        int k = -1;
        int l = n;
         while(l-k>1){
            int m = k+(l-k)/2;
            if(arr[m]<=x) k=m;
            else l=m;
        }
        if(e>k) return 0;
        return k-e+1;
	}
};