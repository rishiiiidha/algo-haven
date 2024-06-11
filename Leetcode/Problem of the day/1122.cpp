// class Solution {
// public:
//     vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//         map<int, int> mp;
//         int n = arr1.size();
//         int m = arr2.size();
//         for (int i = 0; i < n; i++) {
//             mp[arr1[i]]++;
//         }
//         int k = 0;
//         for (int i = 0; i < m; i++) {
//             int a = mp[arr2[i]];
//             while (a--) {
//                 arr1[k++] = arr2[i];
//                 mp[arr2[i]]--;
//             }
//         }
//         for (auto i : mp) {
//             int b = i.second;
//             while (b--) {
//                 arr1[k++] = i.first;
//             }
//         }
//         return arr1;
        // Time complexity : O(n*log(n))
        // Space complexity : O(n)
//     }
// };
