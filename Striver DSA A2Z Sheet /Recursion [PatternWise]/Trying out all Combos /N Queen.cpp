#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void check(int i, int j, vector<vector<int>>& board) {
        int n = board.size();
        for (int k = 0; k < n; k++) {
            board[i][k]++;
        }
        for (int k = 0; k < n; k++) {
            board[k][j]++;
        }
        int p = i, q = j;
        while (p >= 0 && q >= 0) {
            board[p][q]++;
            p--;
            q--;
        }
        int r = i, s = j;
        while (r < n && s < n) {
            board[r][s]++;
            r++;
            s++;
        }
          int u = i, v = j;
        while (u >= 0 && v < n ) {
            board[u][v]++;
            u--;
            v++;
        }
        int w = i, x = j;
        while (x>=0 && w < n) {
            board[w][x]++;
            w++;
            x--;
        }
        board[i][j] = 100;
    }
    void uncheck(int i, int j, vector<vector<int>>& board) {
        int n = board.size();
        for (int k = 0; k < n; k++) {
            board[i][k]--;
        }
        for (int k = 0; k < n; k++) {
            board[k][j]--;
        }
           int p = i, q = j;
        while (p >= 0 && q >= 0) {
            board[p][q]--;
            p--;
            q--;
        }
        int r = i, s = j;
        while (r < n && s < n) {
            board[r][s]--;
            r++;
            s++;
        }
          int u = i, v = j;
        while (u >= 0 && v < n ) {
            board[u][v]--;
            u--;
            v++;
        }
        int w = i, x = j;
        while (x>=0 && w < n) {
            board[w][x]--;
            w++;
            x--;
        }
        board[i][j] = 0;
    }
    void helper(vector<vector<int>>& board, vector<vector<string>>& ans,
                int idx, int n) {
        if (idx == n) {
            string temp;
            vector<string> v;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (board[i][j] == 100)
                        temp += 'Q';
                    else
                        temp += '.';
                }
                v.push_back(temp);
                temp.clear();
            }
            ans.push_back(v);
            return;
        }
        for (int j = 0; j < n; j++) {
            if (board[idx][j] == 0) {
                check(idx, j, board);
                helper(board, ans, idx + 1, n);
                uncheck(idx, j, board);
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>> board(n, vector<int>(n, 0));
        vector<vector<string>> ans;

        helper(board, ans, 0, n);
        return ans;
    }
};