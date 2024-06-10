// class Solution {
// public:
//     bool containsPattern(vector<int>& arr, int m, int k) {
//         int n = arr.size();
//         int cnt = 0;
//         for (int i = 0; i < n-m; i++) {
//             if (arr[i] != arr[i + m])
//                 cnt = 0;
//             cnt += (arr[i] == arr[i + m]);
//             if (cnt == (k - 1) * m)
//             return true;
//         }
//         return false;
//     }
// };
