// class Solution {
// public:
//     vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
//         vector<bool>ans;
//         int maxi=0;
//         int n=candies.size();
//         for(int i=0;i<n;i++){
//             if(candies[i]>maxi) maxi=candies[i];
//         }
//         for(int i=0;i<n;i++){
//             if(candies[i]+extraCandies>=maxi) ans.push_back(true);
//             else ans.push_back(false);
//         }
//         return ans;
// Time complexity : O(n)
// Space complexity : O(n)
//     }
// };
