#include<bits/stdc++.h>
using namespace std;
int findMinimumVariance(vector<int>& height) {
    int n = height.size();
    int mini = INT_MAX;
    vector<vector<pair<int, int> > > vp(n); 
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (height[i] == height[j]) {
                vp[i].push_back(make_pair(i, j));
                break; 
            }
        }
    }
    int ans = INT_MAX;
    for (int i = 0; i < vp.size(); i++) {
        for (int j = 0; j < vp[i].size(); j++) {
            int x = vp[i][j].first;
            int y = vp[i][j].second;
            if(y-x+1>=2)
            ans = min(ans, y - x - 1);
        }
    }
    return ans == INT_MAX ? -1 : ans; 
}
int main() {
    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; ++i) {
        cin >> height[i];
    }
    cout << findMinimumVariance(height) << endl;
    return 0;
}
