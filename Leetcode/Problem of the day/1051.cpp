// class Solution {
// public:
//     int heightChecker(vector<int>& heights) {
//         vector<int>res(heights.begin(),heights.end());
//         sort(heights.begin(),heights.end());
//         int n=heights.size();
//         int cnt=0;
//         for(int i=0;i<n;i++){
//             if(res[i]!=heights[i]) cnt++;
//         }
//         return cnt;
//     }
// };
// Time complexity : O(n*log(n))
// Space complexity : O(n)