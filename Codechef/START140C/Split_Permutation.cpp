#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;
void solve(){
    int n;
    cin >> n;
    vector<int> ans(n);
    iota(ans.begin(), ans.end(), 1);

    int k = 0;
    if (n & 1) {  
        k = n;
        n--;
    }
    
    for (int i = 0; i < n / 2; i++) {
        cout << ans[i] << " " << ans[n - i - 1] << " ";
    }

    if (k != 0) {
        cout << k;
    }
    cout << endl;

}
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}