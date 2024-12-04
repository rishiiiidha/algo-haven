#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
void solve(){
    int n;
    cin >> n;
    int sum = 0;
    while (n != 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    cout << sum << endl;
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