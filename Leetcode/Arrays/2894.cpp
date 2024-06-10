// class Solution {
// public:
//     int differenceOfSums(int n, int m) {
//         int sum1 = 0;
//         for (int i = 1; i <= n; i++) {
//             sum1 += (i % m != 0) ? i : 0;
//         }
//         int sum2 = 0;
//         for (int i = 1; i <= n; i++) {
//             sum2 += (i % m == 0) ? i : 0;
//         }
//         return sum1 - sum2;
//     }
// };
