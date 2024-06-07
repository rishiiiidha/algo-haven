// class Solution {
// public:
//     Solution() {
//         ios_base::sync_with_stdio(false);
//         cin.tie(NULL);
//     }
//     int finalValueAfterOperations(vector<string>& operations) {
//         int n = operations.size();
//         int k = 0;
//         unordered_map<string, int> opMap = {
//             {"--X", 1}, {"++X", 2}, {"X++", 3}, {"X--", 4}};
//         for (int i = 0; i < n; i++) {
//             string a = operations[i];
//             switch (opMap[a]) {
//             case 1: {
//                 --k;
//                 break;
//             }
//             case 2: {
//                 ++k;
//                 break;
//             }
//             case 3: {
//                 k++;
//                 break;
//             }
//             case 4: {
//                 k--;
//                 break;
//             }
//             }
//         }
//         return k;
        // Time complexity : O(n);
        // Space complexity :  O(1);
//     }
// };