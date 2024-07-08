#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int r = 2;
    while (true)
    {
        int a = -1;
        int b = -1;
        int cnt = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if( a==-1 || a==arr[i]%r){
                a = (arr[i] % r);
                continue;
            }
            else if( b==-1 || b==arr[i]%r){
                b = (arr[i] % r);
                continue;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag && a!=b && a!=-1 && b!=-1){
            cout << r << endl;
            break;
        }
            r = r * 2;
    }
    
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