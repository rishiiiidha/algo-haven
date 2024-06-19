#include<bits/stdc++.h>
using namespace std;
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	  int s =-1;
       int e = n;
       while(e-s>1){
           long long m = s+(e-s)/2;
           if(a[m]<=x) s=m;
           else e=m;
       }
       pair<int, int>ans;
       if(s==-1) {
		ans.first=-1;
		ans.second = a[e];
	}else if(a[s]== x){
		ans.first=x;
		ans.second = x;
	}else if(e==n){
		ans.first=a[s];
		ans.second =-1;
	}
	else{
		ans.first=a[s];
		ans.second =a[e];
	}
	return ans;
}