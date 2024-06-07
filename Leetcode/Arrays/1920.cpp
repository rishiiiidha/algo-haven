// class Solution {
// public:
//     Solution() {
//         ios_base::sync_with_stdio(false);
//         cin.tie(NULL);
//     }
//     vector<int> buildArray(vector<int>& nums) {
//         int CONST = 1001; // why? 1001 it is the outof bound of the size as per
//                           the constraints can take any constant value greated
//                           than the size of the size of nums array;
//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             nums[i] += (CONST * (nums[nums[i]] % CONST));
//         }
//         for (int i = 0; i < n; i++) {
//             nums[i] /= CONST;
//         }
//         return nums;

//         Time complexity:O(n);
//         Space complexity: O(1);
//     }
// };
