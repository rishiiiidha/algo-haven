#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;
bool compare(pair<int,int>p1,pair<int,int>p2){
    return p1.second > p2.second;
}
void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
        v[i]--;
    }
    // for(auto i:v)
    //     cout << i << " ";
        
    vector<int> a(n, -1);
    a[v[0]] = 0;
    for (int i = 1; i < n; i++)
    {
      
       if((v[i]+1 < n && a[v[i]+1] !=-1) || (v[i]-1>-1 && a[v[i]-1]!=-1)) a[v[i]] = i;
       else
           {
               cout << "NO" << endl;
               return;
           }
    }
    
    cout << "YES" << endl;
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