
#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;
bool compare(pair<int,int>p1,pair<int,int>p2){
    return p1.second > p2.second;
}
int compute_hasing(string const& s){
    int n = s.size();
    int hash = 0;
    int p = 31;
    int power = 1;
    int mod = 1e9 + 9;
    for (int i = 0; i < n; i++)
    {
        hash = (hash + (s[i] - 'a' + 1) * power)%mod;
        power = (power * p)%mod;
    }
    return hash;
}
void findHashForEachFunction(vector<string> const& v){

    vector<pair<int, int> > p;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        p.push_back(make_pair(compute_hasing(v[i]), i));
    }
    sort(all(p));
    for(auto i:p){
        cout << i.first << " " << i.second << endl;
    }
    vector<vector<string> > ans;
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if( i==0 || p[i].first != p[i-1].first){
            ans.emplace_back();
        }
        ans.back().push_back(v[p[i].second]);
        // cout << v[p[i].second] << " ";
    }
    int q = ans.size();
    for (int i = 0; i < q;i++){
        for (int j = 0; j <ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
void solve(){
    int n;
    cin >> n;
    vector<string>v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    findHashForEachFunction(v);
}
int32_t main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}