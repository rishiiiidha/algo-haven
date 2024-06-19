#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
       int s =-1;
       int e = v.size();
       while(e-s>1){
           int m = s+(e-s)/2;
           if(v[m]<=x) s=m;
           else e=m;
       }
       return s;
    }
};