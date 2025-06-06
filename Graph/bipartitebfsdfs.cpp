#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <limits>
#include <climits>
#include <cmath>

using namespace std;

class Solution {
public:
    bool bfs(vector<vector<int>>& graph, vector<int>& color, int node) {
        queue<int> q;
        q.push(node);
        while (!q.empty()) {
            int k = q.front();
            q.pop();
            for (auto i : graph[k]) {
                if (color[i] == -1) {
                    color[i] = (color[k] + 1) % 2;
                    q.push(i);
                } else {
                    if (color[i] == (color[k] + 1) % 2)
                        continue;
                    else
                        return 0;
                }
            }
        }
        return 1;
    }
    bool dfs(vector<vector<int>>& graph, vector<int>& color, int node) {
        for (int i : graph[node]) {
            if (color[i] == -1) {
                color[i] = (color[node] + 1) % 2;
                if (dfs(graph, color, i) == 0)
                    return 0;
            } else {
                if (color[i] == (color[node] + 1) % 2)
                    continue;
                else
                    return 0;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        // directly adjacency list is given
        int n = graph.size();
        vector<int> color(n, -1);
        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                color[i] = 1;
                if (bfs(graph, color, i) == 0)
                    return false;
            }
        }
        return true;
    }
};