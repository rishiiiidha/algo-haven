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
int power(int a,int b){
    if(b==0) return 1;
    int value = power(a,b/2);
    if(b%2==0) return value*value;
    else return value*value*a;
}
void solve(){
    int n;
    cin >> n;
    int r = __builtin_popcountll(n);
    if(r==1){
        cout<<r<<endl;
        cout<<n<<endl;
        return;
    }
    cout<<r+1<<endl;
    int i=0;
    int k=n;
    vector<int>ans;
    ans.push_back(k);
    while(n>0){
        if(n%2==1){
           ans.push_back(k-(power(2,i)));
        }
        n=n/2;
        i++;
    }
    reverse(all(ans));
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
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