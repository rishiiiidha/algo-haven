#include<bits/stdc++.h>
using namespace std;

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};
char directions[] = {'R','D','L','U'};

class Solution{
    public:
    void helper(vector<vector<int>> &m,int n,int i,int j,vector<string>&ans,string &temp){
        if(i>=n || j>=n || i<0 || j<0) return;
        if(i==n-1 && j==n-1){
            
            ans.push_back(temp);
            return;
        }
        for(int k=0;k<4;k++){
           if(m[i][j]==1){
                int r = i+dx[k];
                int c = j+dy[k];
                m[i][j]=0;//visited
                temp.push_back(directions[k]);
                helper(m,n,r,c,ans,temp);
                m[i][j]=1;//unvisited
                temp.pop_back();
           }
            
        }
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        int i=0;
        int j=0;
        if(m[0][0]==0 || m[n-1][n-1]==0) return {"-1"};
        vector<string>ans;
        string temp;
        helper(m,n,i,j,ans,temp);
       return ans;
    }
};
