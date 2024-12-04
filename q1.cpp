// C++ Solution with User Input
#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <sstream>
using namespace std;

class Solution {
private:
    unordered_map<int, set<int> > graph;
    vector<int> result;
    set<int> uniqueSymbols;
    
    void buildGraph(const vector<vector<int> >& symbolPairs) {
        for (const auto& pair : symbolPairs) {
            graph[pair[0]].insert(pair[1]);
            graph[pair[1]].insert(pair[0]);
            uniqueSymbols.insert(pair[0]);
            uniqueSymbols.insert(pair[1]);
        }
    }
    
    bool dfs(int current, int size) {
        if (result.size() == size) {
            return graph[result.back()].count(result[0]) > 0;
        }
        
        vector<int> neighbors(graph[current].begin(), graph[current].end());
        for (int next : neighbors) {
            if (find(result.begin(), result.end(), next) != result.end()) continue;
            
            result.push_back(next);
            if (dfs(next, size)) return true;
            result.pop_back();
        }
        return false;
    }

public:
    vector<int> solution(vector<vector<int> >& symbolPairs) {
        buildGraph(symbolPairs);
        result = {*uniqueSymbols.begin()};
        dfs(*uniqueSymbols.begin(), uniqueSymbols.size());
        return result;
    }
};

int main() {
    cout << "Enter number of symbol pairs: ";
    int n;
    cin >> n;
    
    vector<vector<int> > symbolPairs;
    cout << "Enter " << n << " pairs of numbers (x y format):\n";
    
    for(int i = 0; i < n; i++) {
        int x, y;
        cout << "Pair " << i+1 << ": ";
        cin >> x >> y;
        symbolPairs.push_back({x, y});
    }
    
    Solution sol;
    vector<int> result = sol.solution(symbolPairs);
    
    cout << "\nFound circular sequence: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << "\n";
    
    return 0;
}