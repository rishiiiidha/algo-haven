// class Solution {
// public:
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(NULL);
//     }
//     vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
//         int n = grid.size();
//         vector<vector<int>>ans; 
//         for(int i=0;i<=n-3;i++){
//             vector<int>temp;
//             for(int j=0;j<=n-3;j++){
//                 int maxi=INT_MIN;
//                 for(int p=i;p<i+3;p++){
//                     for(int q=j;q<j+3;q++){
//                        maxi=max(maxi,grid[p][q]);
//                     }
//                 }
//                 temp.push_back(maxi);
//             }
//             ans.push_back(temp);
//         }
//         return ans;
        // Time complexity : O(n*n)
        // Space complexity : O(n*n)
//     }
// };