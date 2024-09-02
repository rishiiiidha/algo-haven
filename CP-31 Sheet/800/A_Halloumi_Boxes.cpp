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
bool sortedArray(vector<int>&v){
    int n = v.size();
    for (int i = 1; i < n;i++){
        if(v[i-1]>v[i])
            return false;
    }
    return true;
}
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    if(n==1 && k==1){
        cout << "YES" << endl;
    }
    else if(n>1 && k==1){
       if(sortedArray(v)){
        cout << "YES" << endl;
       }else{
        cout << "NO" << endl;
       }
    }
    else{
        cout << "YES" << endl;
    }
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