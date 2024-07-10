#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;
int lcm(int a,int b){
    int k = a*b;
    return k / (__gcd(a, b));
}
bool compare(pair<int,int>p1,pair<int,int>p2){
    return p1.second > p2.second;
}
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    vector<int> temp[k+1];
    for (int i = 1; i <= k;i++){
        temp[i].push_back(-1);
    }
    for (int i = 0; i < n;i++){
        temp[v[i]].push_back(i);
    }
     for (int i = 1; i <= k;i++){
        temp[i].push_back(n);
    }
    int res = n;
    for (int i = 1; i <= k; i++)
    {
        int maxi = INT_MIN;
        int maxi2 = INT_MIN;
        for (int j = 1; j < temp[i].size(); j++)
        {
            int k = temp[i][j] - temp[i][j - 1];
            if(maxi<k){
                maxi2 = maxi;
                maxi = k;
            }
            else if(maxi2<k){
                maxi2 = k;
            }
        }
        res = min(res,max(maxi2,max((maxi + 1) / 2, (maxi / 2))));
    }
    cout << res-1 << endl;
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