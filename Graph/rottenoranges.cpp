#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <limits>
#include <climits>
#include <cmath>

using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        vector<vector<int>>arr = {{0,1},{0,-1},{1,0},{-1,0}};
        int m = grid.size();
        int n = grid[0].size();
        int countOnes = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push(make_pair(i,j));
                }
                if(grid[i][j]==1)countOnes++;
            }
        }
        if(countOnes == 0 ) return 0;
        int cnt = 0;
        while(!q.empty()){
            int k = q.size();
            for(int i=0;i<k;i++){
                auto p = q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int x = p.first + arr[i][0];
                    int y = p.second + arr[i][1];
                    if(x<m && x>=0 && y<n && y>=0){
                        if(grid[x][y]==1){
                            grid[x][y]=2;
                            q.push(make_pair(x,y));
                        }
                    }
                }
            }
            cnt++;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return cnt-1;
    }
};