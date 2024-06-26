#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    unordered_map<string, int> mp;
    bool check(string k, string word) {
        int p = k.size();
        int q = word.size();
        if (p > q)
            return false;
        for (int i = 0; i < p; i++) {
            if (k[i] != word[i])
                return false;
        }
        return true;
    }
    void helper(vector<vector<char>>& board, int m, int n, string& k, int i,
                int j, string word, vector<vector<bool>>& visited) {
        // cout << k << endl;
        if (k == word) {
            mp[k]++;
            return;
        }
        if (i < 0 || j < 0 || i >= m || j >= n || visited[i][j])
            return;
        k.push_back(board[i][j]);
        visited[i][j] = true;
        if (check(k, word)) {
            helper(board, m, n, k, i + 1, j, word, visited);
            helper(board, m, n, k, i, j + 1, word, visited);
            helper(board, m, n, k, i - 1, j, word, visited);
            helper(board, m, n, k, i, j - 1, word, visited);
        }
        k.pop_back();
        visited[i][j] = false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        string k;
        int idx1 = 0;
        int idx2 = 0;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                helper(board, m, n, k, i, j, word, visited);
            }
        }
        if (mp[word] != 0)
            return true;
        else
            return false;
    }
};