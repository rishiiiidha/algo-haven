#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    
    bool helper(bool graph[101][101],int m,int n,int idx,vector<int>&colors){
       if(idx>=n){
           return true;
       }
       for(int i=0;i<m;i++){
           bool color = true;
           for(int j=0;j<n;j++){
               if(graph[idx][j]==1 && colors[j]==i){
                   color = false;
                   break;
               }
           }
           if(color){
               colors[idx] = i;
              if(helper(graph,m,n,idx+1,colors)){
                  return true;
              }
              colors[idx]=-1;
           }
       } 
       return false;
    }
    bool graphColoring(bool graph[101][101], int m, int n) {
    vector<int>colors(n,-1);
    int idx = 0;
    return helper(graph,m,n,idx,colors);
    }
};