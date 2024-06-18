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
    int target = 7;

    int x = binary_search(arr, target);
    
}
signed main()
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