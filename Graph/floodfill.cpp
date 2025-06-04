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
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
      vector<vector<int>>arr = {{0,1},{0,-1},{1,0},{-1,0}};
      queue<pair<pair<int,int>,int>>q;
      int m = image.size();
      int n = image[0].size();
      q.push(make_pair(make_pair(sr,sc),image[sr][sc]));
      image[sr][sc] = color;
      while(!q.empty()){
        auto p = q.front();
        cout<<p.first.first<<" "<<p.first.second<<" "<<p.second<<endl;
        q.pop();
        for(int i=0;i<4;i++){
             int x = p.first.first + arr[i][0];
             int y = p.first.second + arr[i][1];
             if(x<m && x>=0 && y<n && y>=0){
                if(image[x][y] == p.second && image[x][y]!=color){
                    q.push(make_pair(make_pair(x,y),image[x][y]));
                    image[x][y]=color;
                }
             }
        }
      }
      return image;    
    }
};