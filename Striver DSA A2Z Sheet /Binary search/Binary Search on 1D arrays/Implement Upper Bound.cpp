#include<bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
     int s =-1;
       int e = n;
       sort(arr,arr+n);
       while(e-s>1){
           int m = s+(e-s)/2;
           if(arr[m]<=x) s=m;
           else e=m;
       }
       if(arr[s]==x) return {arr[s],arr[s]};
       if(s==-1 && e==n) return {-1,-1};
       if(s==-1 && e!=n) return {-1,arr[e]};
       if(s!=-1 && e==n) return {arr[s],-1};
       return {arr[s],arr[e]};
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    t=1;
    // cin>>t;
    int arr[] = {1, 2, 3, 4, 5, 6};
    while (t--)
    {
        getFloorAndCeil(arr, 6, 2);
    }
    return 0;
}