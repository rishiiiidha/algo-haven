// class Solution {
// public:
// int subset(vector<int>& nums,vector<int>& temp,int n,int sum){
//    if(n==0){
//       return sum;
//    }
//    int x = subset(nums,temp,n-1,sum^nums[n-1]);
//    int y = subset(nums,temp,n-1,sum);
//    return x+y;
// }
//     int subsetXORSum(vector<int>& nums) {
//         vector<int>temp;
//         int n=nums.size();
//         return subset(nums,temp,n,0);
//     }
     // Time complexity : O(2^n);
     // Space complexity : O(n) (auxillary space)


// };

// class Solution {
// public:
//     int power (int x, int y){
//         if(y==0) return 1;
//         int value = power(x,y/2);
//         if(y%2==0) return value*value;
//         else return value*value*x;
//     }
//     int subsetXORSum(vector<int>& nums) {
//         int x =0;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             x = x | nums[i];
//         }
//         int res = x * power(2,n-1);
//         return res;
//     }
    // Time complexity : O(n);
    // Space complexity : O(1) (auxillary space)


// };