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
void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int sum = 0;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if(sum<0)
            sum = 0;
        ans = max(ans, sum);
    }
    cout << ans << endl;
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