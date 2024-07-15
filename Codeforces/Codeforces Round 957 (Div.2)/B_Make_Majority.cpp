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
    string v;
    cin>>v;
    string zeros;
    string ans;
    for(auto i:v){
        if(i=='0'){
            zeros+='0';
        }else{
            if(zeros.size()>0) ans+='0';
            zeros.clear();
            ans+='1';
        }
    }
    // cout<<ans<<endl;
    if(zeros.size()>0) ans+='0';
    int c0=0;
    int c1=0;
    for(auto i:ans){
       if(i=='0') c0++;
       else c1++;
    }
    if(c0>=c1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
   
     
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