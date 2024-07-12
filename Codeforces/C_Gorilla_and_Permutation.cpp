#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
#define loop(i,a,b) for(int i=int(a);i<int(b);i++)
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;
void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    int fi = 0;
    int gi = 0;
    vector<int> ans;
    unordered_map<int, int> g;
    for (int i = 1; i <= n; i++)
    {
        if(i<=m)
            g[i]++;
    }
    for (int i = n; i >= 1;i--){
        if(g.find(i)==g.end())
            cout << i << " ";
    }
    for (int i = 1; i <= n;i++){
        if(g.find(i)!=g.end())
        cout << i << " ";
    }
    cout << endl;
}
int32_t main()
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