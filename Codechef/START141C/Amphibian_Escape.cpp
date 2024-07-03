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
    int n, k, h;
    cin >> n >> k >> h;
    int ans = 0;
    int diff = (h + k - 1) / k;
    int i = 1;
    for (i = 1; i <= n; i++)
    {
        if (i >= h)
            ans += n;
        else{
            int n = h - i;
            int m = k - 1;
            int mini = (n + m - 1) / m;
            int b = i - mini;
            if (b >= 1) {
                ans += b;
            }
            }
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