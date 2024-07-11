#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i=0;i<n;i++) {
            cin >> v[i];
        }
        for (int i = 0; i <= 31; i++) {
            int k = 1 << i;
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if ((k & v[i]) == 0) cnt++;
            }
            int m = 0;
            if (cnt == n) {
                for (int i = 0; i < n; i++) {
                    if (v[i] > k) m++;
                }
                cout << m << endl;
                break;
            }
        }
    }
}