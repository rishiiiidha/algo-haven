#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
#define loop(i,a,b) for(int i=int(a);i<int(b);i++)
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;
void solve(){
    int n, k;
    cin >> n >>k;
    vector<int> v(k);
    for (int i = 0; i < k; i++){
        cin >> v[i];
    }
    sort(all(v));
    int idx = -1;
    int cnt = 0;
    for (int i = 0; i < k; i++)
    {
        if(v[i]==1)
            idx = i;
    }
    if(idx==-1)
        idx = 0;
    else if(idx==k-1){
        cout << k - 1 << endl;
        return;
    }
    else   idx++;
    cnt += (idx - 0);
    for (int i = idx; i < k - 1; i++)
    {
        cnt += ((2 * (v[i])) - 1);
    }
    cout << cnt << endl;
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