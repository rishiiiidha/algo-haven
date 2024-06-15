#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long int dp[26][10][10]; 
     Solution(){
       memset(dp,-1,sizeof(dp));
     }
     long long countSubsequence(int n,int i,int j,vector<vector<int>>&matrix){
         if(i<0 || j<0 || i>3 || j>2) return 0;
         if(matrix[i][j]==-1) return 0;
         if(n==0) return 1;
         if(dp[n][i][j]!=-1) return dp[n][i][j];
         long long int o = countSubsequence(n-1,i,j,matrix);
         long long int l = countSubsequence(n-1,i,j-1,matrix);
         long long int r = countSubsequence(n-1,i,j+1,matrix);
         long long int u = countSubsequence(n-1,i-1,j,matrix);
         long long int d = countSubsequence(n-1,i+1,j,matrix);
         
         return dp[n][i][j]=o+l+r+u+d;
     }
     long long getCount(int n) {
        vector<vector<int>>matrix={
            {1,2,3},
            {4,5,6},
            {7,8,9},
            {-1,0,-1}
            
        };
        long long ans = 0;
        ans+=countSubsequence(n-1,3,1,matrix);
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
               ans+=countSubsequence(n-1,i,j,matrix);
            }
        }
        return ans;
        }
};