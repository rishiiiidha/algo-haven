#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;

void solve() {
    int n;
    cin >> n;
    vector<vector<int> > a(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    int ops = 0;
    
    for (int d = 0; d < n; d++) {
        int mini = INT_MAX;
        
        for (int i = 0; i < n - d; i++) {
            mini = min(mini, a[i][i + d]);
        }
        
        if (mini < 0) {
            int incre = -mini;
            ops += incre;
            
            for (int i = 0; i < n - d; i++) {
                a[i][i + d] += incre;
            }
        }
    }
    
    for (int d = 1; d < n; d++) {
        int mini = INT_MAX;
        
        for (int i = 0; i < n - d; i++) {
            mini = min(mini, a[d + i][i]);
        }
        
        if (mini < 0) {
            int incre = -mini;
            ops += incre;
            
            for (int i = 0; i < n - d; i++) {
                a[d + i][i] += incre;
            }
        }
    }
    
    cout << ops << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
