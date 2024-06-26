#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
// Read and try to understand every single test case
// Divide test cases into cases. Almost every test case is there for a reason.
// Taking more time than expected? Open paper and start writing
// Still can't find a pattern? Write a bruteforce and look for a pattern there.

void solve(){
    int n,x,y;
    cin >> n >> x >> y;
    int ans = 0;
    if(n&1){
        ans = max(n * x, (((n) / 2) * y) + x);
    }
    else
    {
        ans = max(n * x, ((n + 1) / 2) * y);
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