#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;
void solve(){
 
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1==x2&& y2>=x2 && y1<=x1)
        cout << "NO" << endl;
    else if(y1==y2 && x2>=y2 && x1<=y1)
        cout << "NO" << endl;
    else if(y1>=x1 && y2<=x2 && (y2-y1)<(x2-x1))
    cout << "NO" << endl;
     else if(x1>=y1 && x2<=y2 && (x2-x1)<(y2-y1))
    cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
