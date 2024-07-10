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
void solve(){
    int n, x, y;
    cin >> n >> x >> y;
    int l = lcm(x, y);
    int p = n - ((n / x) - (n / l));
    int q = (n / y) - (n / l);
    int sumx = (n * (n + 1)) / 2 - p * (p + 1) / 2;
    int sumy = q * (q + 1) / 2;
    cout <<( sumx - sumy ) << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}