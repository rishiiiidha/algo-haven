#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;
bool compare(pair<int,int>p1,pair<int,int>p2){
    return p1.second > p2.second;
}
void solve(){
    int n,l;
    cin >> n >> l;
    vector<double>a(n);
    for (int i = 0;i<n;i++){
        cin >> a[i];
    }
    sort(all(a));
    double ans = LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        if(i==0){
            ans = max(ans, a[i] - 0);
        }
        if(i==n-1){
            ans = max(ans, l - a[i]);
        }
         if(i!=0){
            ans = max(ans, ((a[i] - a[i - 1]) / 2.0));
        }
    }
      cout << fixed << setprecision(10) << ans << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}