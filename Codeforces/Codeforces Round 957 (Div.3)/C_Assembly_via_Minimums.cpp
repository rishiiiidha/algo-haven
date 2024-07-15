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
   int n;
    cin >> n;
    int k = n * (n - 1) / 2;
    vector<int> v(k);
    int maxi = INT_MIN;
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    for (int i = 0; i < k;i+= (--n)){
        cout << v[i] << " ";
    }
    cout << 1000000000 << endl;
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