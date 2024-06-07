// class Solution {
// public:
//     int countPairs(vector<int>& nums, int target) {
//         int n=nums.size();
//         int cnt=0;
//         for(int i=0;i<n-1;i++){
//               for(int j=i+1;j<n;j++){
//                    int sum = nums[i]+nums[j];
//                    if(sum<target) cnt++;
//               }
//         }
//         return cnt;
// Time complexity : O(n*n)
//  Space complexity : O(1)
//     }
// };
