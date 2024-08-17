#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long max_score(int n, vector<int>& a, string& s) {
    vector<long long> dp(n + 1, 0);
    vector<long long> prefix_sum(n + 1, 0);
    
    for (int i = 0; i < n; i++) {
        prefix_sum[i + 1] = prefix_sum[i] + a[i];
    }
    
    long long max_r = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'R') {
            max_r = max(max_r, prefix_sum[i + 1] - prefix_sum[i]);
            dp[i] = dp[i + 1];
        } else {
            dp[i] = max(dp[i + 1], prefix_sum[n] - prefix_sum[i] + max_r);
            for (int j = i + 1; j < n; j++) {
                if (s[j] == 'R') {
                    long long score = prefix_sum[j + 1] - prefix_sum[i] + dp[j + 1];
                    dp[i] = max(dp[i], score);
                }
            }
        }
    }
    
    return dp[0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        string s;
        cin >> s;
        
        cout << max_score(n, a, s) << "\n";
    }
    
    return 0;
}