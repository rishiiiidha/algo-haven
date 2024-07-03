#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
// Read and try to understand every single test case
// Divide test cases into cases. Almost every test case is there for a reason.
// Taking more time than expected? Open paper and start writing
// Still can't find a pattern? Write a bruteforce and look for a pattern there.
int findHam(string a,string b,int i,int m){
    int x = 0;
    int k = 0;
    for (int j = i; j < i + m; j++)
    {
        if(a[j]!=b[k])
            x++;
        k++;
    }
    return x;
}
void solve(){
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int ans = INT_MAX;
    for (int i = 0; i <= n - m; i++)
    {
        ans = min(ans, findHam(a, b, i, m));
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